<?php
/**
 * @file
 * reference_sites.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function reference_sites_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|drupal_site|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'drupal_site';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_logo' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
      ),
    ),
  );
  $export['node|drupal_site|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function reference_sites_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|drupal_site|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'drupal_site';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_logo',
        1 => 'title',
        2 => 'field_company_url',
        3 => 'field_short_description',
      ),
    ),
    'fields' => array(
      'field_logo' => 'ds_content',
      'title' => 'ds_content',
      'field_company_url' => 'ds_content',
      'field_short_description' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|drupal_site|default'] = $ds_layout;

  return $export;
}
