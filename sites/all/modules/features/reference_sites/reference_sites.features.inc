<?php
/**
 * @file
 * reference_sites.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function reference_sites_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function reference_sites_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function reference_sites_image_default_styles() {
  $styles = array();

  // Exported image style: reference
  $styles['reference'] = array(
    'name' => 'reference',
    'effects' => array(
      7 => array(
        'label' => 'Skaler',
        'help' => 'Skalering vil beholde størrelsesforhold i det originale bildet. Hvis bare en dimensjon er oppgitt, så beregnes den andre dimensjonen.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '278',
          'height' => '178',
          'upscale' => 0,
        ),
        'weight' => '-10',
      ),
      6 => array(
        'label' => 'Define canvas',
        'help' => 'Define the size of the working canvas and background color, this controls the dimensions of the output image.',
        'effect callback' => 'canvasactions_definecanvas_image',
        'form callback' => 'canvasactions_definecanvas_form',
        'summary theme' => 'canvasactions_definecanvas_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => 'ffffff',
          ),
          'under' => 1,
          'exact' => array(
            'width' => '298',
            'height' => '198',
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => '-9',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function reference_sites_node_info() {
  $items = array(
    'drupal_site' => array(
      'name' => t('Drupal side'),
      'base' => 'node_content',
      'description' => t('Norske og internasjonale sider som er bygget på drupal. Dette er sider som er plukket ut som gode referanser for å bygge drupal merkevaren.'),
      'has_title' => '1',
      'title_label' => t('Navn'),
      'help' => '',
    ),
  );
  return $items;
}
