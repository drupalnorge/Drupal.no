<?php
/**
 * @file
 * leverandorer.features.inc
 */

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
