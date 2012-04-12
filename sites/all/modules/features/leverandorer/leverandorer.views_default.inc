<?php
/**
 * @file
 * leverandorer.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function leverandorer_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'leverandorer';
  $view->description = 'Oversikt over norske Drupal-leverandører';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Leverandører';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Leverandører i Norge';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer per side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Felt: Innhold: Logo */
  $handler->display->display_options['fields']['field_company_logo']['id'] = 'field_company_logo';
  $handler->display->display_options['fields']['field_company_logo']['table'] = 'field_data_field_company_logo';
  $handler->display->display_options['fields']['field_company_logo']['field'] = 'field_company_logo';
  $handler->display->display_options['fields']['field_company_logo']['label'] = '';
  $handler->display->display_options['fields']['field_company_logo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_logo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_company_logo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_company_logo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_company_logo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_company_logo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_company_logo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_company_logo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_company_logo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_company_logo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_company_logo']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_company_logo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_company_logo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_company_logo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_company_logo']['element_type'] = '0';
  $handler->display->display_options['fields']['field_company_logo']['element_class'] = 'logo';
  $handler->display->display_options['fields']['field_company_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_logo']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_company_logo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_company_logo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_company_logo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_company_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_company_logo']['settings'] = array(
    'image_style' => 'company',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_company_logo']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Felt: Innhold: Beliggenhet */
  $handler->display->display_options['fields']['field_company_where']['id'] = 'field_company_where';
  $handler->display->display_options['fields']['field_company_where']['table'] = 'field_data_field_company_where';
  $handler->display->display_options['fields']['field_company_where']['field'] = 'field_company_where';
  $handler->display->display_options['fields']['field_company_where']['label'] = '';
  $handler->display->display_options['fields']['field_company_where']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_where']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_company_where']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_company_where']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_company_where']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_company_where']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_company_where']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_company_where']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_company_where']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_company_where']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_company_where']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_company_where']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_company_where']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_company_where']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_company_where']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_company_where']['element_class'] = 'place';
  $handler->display->display_options['fields']['field_company_where']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_where']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_company_where']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_company_where']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_company_where']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_company_where']['field_api_classes'] = 0;
  /* Felt: Innhold: Nettside */
  $handler->display->display_options['fields']['field_company_url']['id'] = 'field_company_url';
  $handler->display->display_options['fields']['field_company_url']['table'] = 'field_data_field_company_url';
  $handler->display->display_options['fields']['field_company_url']['field'] = 'field_company_url';
  $handler->display->display_options['fields']['field_company_url']['label'] = '';
  $handler->display->display_options['fields']['field_company_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_url']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_company_url']['alter']['text'] = '<span class="website"><i class="icon-home"></i>[field_company_url]</span>';
  $handler->display->display_options['fields']['field_company_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_company_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_company_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_company_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_company_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_company_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_company_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_company_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_company_url']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_company_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_company_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_company_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_company_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_url']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_company_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_company_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_company_url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_company_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_company_url']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_company_url']['field_api_classes'] = 0;
  /* Felt: Innhold: Telefon */
  $handler->display->display_options['fields']['field_company_phone']['id'] = 'field_company_phone';
  $handler->display->display_options['fields']['field_company_phone']['table'] = 'field_data_field_company_phone';
  $handler->display->display_options['fields']['field_company_phone']['field'] = 'field_company_phone';
  $handler->display->display_options['fields']['field_company_phone']['label'] = '';
  $handler->display->display_options['fields']['field_company_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_phone']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_company_phone']['alter']['text'] = '<span class="comment"><i class="icon-comment"></i>[field_company_phone]</span>';
  $handler->display->display_options['fields']['field_company_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_company_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_company_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_company_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_company_phone']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_company_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_company_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_company_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_company_phone']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_company_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_company_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_company_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_company_phone']['element_type'] = '0';
  $handler->display->display_options['fields']['field_company_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_phone']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_company_phone']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_company_phone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_company_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_company_phone']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_company_phone']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_company_phone']['field_api_classes'] = 0;
  /* Felt: Innhold: E-post */
  $handler->display->display_options['fields']['field_company_email']['id'] = 'field_company_email';
  $handler->display->display_options['fields']['field_company_email']['table'] = 'field_data_field_company_email';
  $handler->display->display_options['fields']['field_company_email']['field'] = 'field_company_email';
  $handler->display->display_options['fields']['field_company_email']['label'] = '';
  $handler->display->display_options['fields']['field_company_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_email']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_company_email']['alter']['text'] = '<span class="mail"><i class="icon-envelope"></i>[field_company_email]</span>';
  $handler->display->display_options['fields']['field_company_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_company_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_company_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_company_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_company_email']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_company_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_company_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_company_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_company_email']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_company_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_company_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_company_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_company_email']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_company_email']['element_class'] = 'icon-envelope';
  $handler->display->display_options['fields']['field_company_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_email']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_company_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_company_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_company_email']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_company_email']['field_api_classes'] = 0;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_company_logo]
<section class="info">
  <h2>[title] <i class="where">[field_company_where]</i></h2>
  [field_company_url]
  [field_company_phone]
  [field_company_email]
</section>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
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
    'company' => 'company',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'leverandører';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Leverandører';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['leverandorer'] = array(
    t('Master'),
    t('Leverandører i Norge'),
    t('mer'),
    t('Bruk'),
    t('Nullstill'),
    t('Sortér på'),
    t('Stigende'),
    t('Synkende'),
    t('Elementer per side'),
    t('- Alle -'),
    t('Offset'),
    t('<span class="website"><i class="icon-home"></i>[field_company_url]</span>'),
    t('<span class="comment"><i class="icon-comment"></i>[field_company_phone]</span>'),
    t('<span class="mail"><i class="icon-envelope"></i>[field_company_email]</span>'),
    t('[field_company_logo]
<section class="info">
  <h2>[title] <i class="where">[field_company_where]</i></h2>
  [field_company_url]
  [field_company_phone]
  [field_company_email]
</section>'),
    t('Page'),
  );
  $export['leverandorer'] = $view;

  return $export;
}
