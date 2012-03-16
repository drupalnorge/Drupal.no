<?php
/**
 * @file
 * leverandorer.features.inc
 */

/**
 * Implements hook_views_api().
 */
function leverandorer_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function leverandorer_image_default_styles() {
  $styles = array();

  // Exported image style: company
  $styles['company'] = array(
    'name' => 'company',
    'effects' => array(
      2 => array(
        'label' => 'Skaler',
        'help' => 'Skalering vil beholde størrelsesforhold i det originale bildet. Hvis bare en dimensjon er oppgitt, så beregnes den andre dimensjonen.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '170',
          'height' => '140',
          'upscale' => 0,
        ),
        'weight' => '-10',
      ),
      3 => array(
        'label' => 'Beskjær',
        'help' => 'Beskjæring vil fjerne deler av et bilde slik at det passer med de oppgitte dimensjonene.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => '219',
          'height' => '139',
          'anchor' => 'center-center',
        ),
        'weight' => '-8',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function leverandorer_node_info() {
  $items = array(
    'company' => array(
      'name' => t('Leverandør'),
      'base' => 'node_content',
      'description' => t('Et foretak som leverer Drupal-tjenester.'),
      'has_title' => '1',
      'title_label' => t('Selskap'),
      'help' => '',
    ),
  );
  return $items;
}
