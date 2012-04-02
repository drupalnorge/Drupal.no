<?php
/**
 * @file
 * banner.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function banner_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'baner';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Banner';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_text'] = 'mer';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Nullstill';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér på';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Synkende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer per side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Standard',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_text_style' => 0,
    'field_text_position' => 0,
    'field_bannerimage' => 0,
    'title' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_text_style' => 0,
    'field_text_position' => 0,
    'field_bannerimage' => 0,
    'title' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'shuffle';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'ds_fields';
  /* Felt: Innhold: Text style */
  $handler->display->display_options['fields']['field_text_style']['id'] = 'field_text_style';
  $handler->display->display_options['fields']['field_text_style']['table'] = 'field_data_field_text_style';
  $handler->display->display_options['fields']['field_text_style']['field'] = 'field_text_style';
  $handler->display->display_options['fields']['field_text_style']['label'] = '';
  $handler->display->display_options['fields']['field_text_style']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_text_style']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_text_style']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_text_style']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_text_style']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_text_style']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_text_style']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_text_style']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_text_style']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_text_style']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_text_style']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_text_style']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_text_style']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_text_style']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_text_style']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text_style']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_text_style']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_text_style']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_text_style']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_text_style']['field_api_classes'] = 0;
  /* Felt: Innhold: Text position */
  $handler->display->display_options['fields']['field_text_position']['id'] = 'field_text_position';
  $handler->display->display_options['fields']['field_text_position']['table'] = 'field_data_field_text_position';
  $handler->display->display_options['fields']['field_text_position']['field'] = 'field_text_position';
  $handler->display->display_options['fields']['field_text_position']['label'] = '';
  $handler->display->display_options['fields']['field_text_position']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_text_position']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_text_position']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_text_position']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_text_position']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_text_position']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_text_position']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_text_position']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_text_position']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_text_position']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_text_position']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_text_position']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_text_position']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_text_position']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_text_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text_position']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_text_position']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_text_position']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_text_position']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_text_position']['field_api_classes'] = 0;
  /* Felt: Innhold: image */
  $handler->display->display_options['fields']['field_bannerimage']['id'] = 'field_bannerimage';
  $handler->display->display_options['fields']['field_bannerimage']['table'] = 'field_data_field_bannerimage';
  $handler->display->display_options['fields']['field_bannerimage']['field'] = 'field_bannerimage';
  $handler->display->display_options['fields']['field_bannerimage']['label'] = '';
  $handler->display->display_options['fields']['field_bannerimage']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_bannerimage']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_bannerimage']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_bannerimage']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_bannerimage']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_bannerimage']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_bannerimage']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_bannerimage']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_bannerimage']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_bannerimage']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_bannerimage']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_bannerimage']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_bannerimage']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_bannerimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bannerimage']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_bannerimage']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_bannerimage']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_bannerimage']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_bannerimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_bannerimage']['settings'] = array(
    'image_style' => 'banner',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_bannerimage']['field_api_classes'] = 0;
  /* Felt: Innhold: Tittel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Felt: Innhold: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="wrapper [field_text_style] [field_text_position]">
<h2>[title]</h2>
[body]
</div>';
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Sorteringskriterium: Innhold: Innleggsdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Innhold: Publisert */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Innhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'banner' => 'banner',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'front';
  $translatables['baner'] = array(
    t('Master'),
    t('mer'),
    t('Bruk'),
    t('Nullstill'),
    t('Sortér på'),
    t('Stigende'),
    t('Synkende'),
    t('Elementer per side'),
    t('- Alle -'),
    t('Offset'),
    t('<div class="wrapper [field_text_style] [field_text_position]">
<h2>[title]</h2>
[body]
</div>'),
    t('Page'),
  );
  $export['baner'] = $view;

  return $export;
}
