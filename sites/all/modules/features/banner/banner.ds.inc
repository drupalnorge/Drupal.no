<?php
/**
 * @file
 * banner.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function banner_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'ds_views|baner-page-fields|default';
  $ds_fieldsetting->entity_type = 'ds_views';
  $ds_fieldsetting->bundle = 'baner-page-fields';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_bannerimage' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'body' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['ds_views|baner-page-fields|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function banner_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'ds_views|baner-page-fields|default';
  $ds_layout->entity_type = 'ds_views';
  $ds_layout->bundle = 'baner-page-fields';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_bannerimage',
        1 => 'body',
      ),
    ),
    'fields' => array(
      'field_bannerimage' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['ds_views|baner-page-fields|default'] = $ds_layout;

  return $export;
}
