<?php
/**
 * @file
 * banner.ds_extras.inc
 */

/**
 * Implements hook_ds_vd_info().
 */
function banner_ds_vd_info() {
  $export = array();

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'baner-page-fields';
  $ds_vd->label = 'Baner: Page (Fields)';
  $export['baner-page-fields'] = $ds_vd;

  return $export;
}
