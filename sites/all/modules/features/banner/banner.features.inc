<?php
/**
 * @file
 * banner.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function banner_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "ds_extras" && $api == "ds_extras") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function banner_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function banner_image_default_styles() {
  $styles = array();

  // Exported image style: banner
  $styles['banner'] = array(
    'name' => 'banner',
    'effects' => array(
      4 => array(
        'label' => 'Skaler og beskjær',
        'help' => 'Skaler og beskjær vil beholde størrelsesforhold i det originale bildet og så beskjære den største dimensjonen. Dette er mest nyttig for å lage perfekte kvadratiske miniatyrbilder uten å strekke bildet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '940',
          'height' => '360',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function banner_node_info() {
  $items = array(
    'banner' => array(
      'name' => t('Banner'),
      'base' => 'node_content',
      'description' => t('Banner to be viewed on the font page carousel'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
