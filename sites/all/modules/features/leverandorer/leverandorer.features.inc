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
      4 => array(
        'label' => 'Skaler',
        'help' => 'Skalering vil beholde størrelsesforhold i det originale bildet. Hvis bare en dimensjon er oppgitt, så beregnes den andre dimensjonen.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '199',
          'height' => '119',
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
            'width' => '219',
            'height' => '139',
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
        'weight' => '2',
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
