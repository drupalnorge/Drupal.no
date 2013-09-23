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

  $view = new view();
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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mer';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Bruk';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Nullstill';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér på';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Synkende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer per side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'neste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'siste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Felt: Innhold: Logo */
  $handler->display->display_options['fields']['field_company_logo']['id'] = 'field_company_logo';
  $handler->display->display_options['fields']['field_company_logo']['table'] = 'field_data_field_company_logo';
  $handler->display->display_options['fields']['field_company_logo']['field'] = 'field_company_logo';
  $handler->display->display_options['fields']['field_company_logo']['label'] = '';
  $handler->display->display_options['fields']['field_company_logo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_logo']['element_type'] = '0';
  $handler->display->display_options['fields']['field_company_logo']['element_class'] = 'logo';
  $handler->display->display_options['fields']['field_company_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_logo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_company_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_company_logo']['settings'] = array(
    'image_style' => 'company',
    'image_link' => '',
  );
  /* Felt: Innhold: Tittel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Innhold: Beliggenhet */
  $handler->display->display_options['fields']['field_company_where']['id'] = 'field_company_where';
  $handler->display->display_options['fields']['field_company_where']['table'] = 'field_data_field_company_where';
  $handler->display->display_options['fields']['field_company_where']['field'] = 'field_company_where';
  $handler->display->display_options['fields']['field_company_where']['label'] = '';
  $handler->display->display_options['fields']['field_company_where']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_where']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_company_where']['element_class'] = 'place';
  $handler->display->display_options['fields']['field_company_where']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_where']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_company_where']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Innhold: Nettside */
  $handler->display->display_options['fields']['field_company_url']['id'] = 'field_company_url';
  $handler->display->display_options['fields']['field_company_url']['table'] = 'field_data_field_company_url';
  $handler->display->display_options['fields']['field_company_url']['field'] = 'field_company_url';
  $handler->display->display_options['fields']['field_company_url']['label'] = '';
  $handler->display->display_options['fields']['field_company_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_company_url']['alter']['text'] = '<span class="website"><i class="icon-home"></i>[field_company_url]</span>';
  $handler->display->display_options['fields']['field_company_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_company_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_company_url']['type'] = 'link_url';
  /* Felt: Innhold: Telefon */
  $handler->display->display_options['fields']['field_company_phonenumber']['id'] = 'field_company_phonenumber';
  $handler->display->display_options['fields']['field_company_phonenumber']['table'] = 'field_data_field_company_phonenumber';
  $handler->display->display_options['fields']['field_company_phonenumber']['field'] = 'field_company_phonenumber';
  $handler->display->display_options['fields']['field_company_phonenumber']['label'] = '';
  $handler->display->display_options['fields']['field_company_phonenumber']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_phonenumber']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_company_phonenumber']['alter']['text'] = '<span class="comment"><i class="icon-comment"></i>[field_company_phonenumber]</span>';
  $handler->display->display_options['fields']['field_company_phonenumber']['element_type'] = '0';
  $handler->display->display_options['fields']['field_company_phonenumber']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_phonenumber']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_company_phonenumber']['element_default_classes'] = FALSE;
  /* Felt: Innhold: Rediger lenke */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<div><i class="icon-pencil"></i>[edit_node]</div>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Rediger leverandør';
  /* Felt: Innhold: E-post */
  $handler->display->display_options['fields']['field_company_email']['id'] = 'field_company_email';
  $handler->display->display_options['fields']['field_company_email']['table'] = 'field_data_field_company_email';
  $handler->display->display_options['fields']['field_company_email']['field'] = 'field_company_email';
  $handler->display->display_options['fields']['field_company_email']['label'] = '';
  $handler->display->display_options['fields']['field_company_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_company_email']['alter']['text'] = '<span class="mail"><i class="icon-envelope"></i>[field_company_email]</span>';
  $handler->display->display_options['fields']['field_company_email']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_company_email']['element_class'] = 'icon-envelope';
  $handler->display->display_options['fields']['field_company_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_company_email']['type'] = 'invisimail_js_entities';
  $handler->display->display_options['fields']['field_company_email']['settings'] = array(
    'chunk' => 0,
    'link' => 1,
  );
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_company_logo]
<section class="info">
  <h2>[title] <i class="where">[field_company_where]</i></h2>
  [field_company_url]
  [field_company_phonenumber]
  [field_company_email]
</section>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sorteringskriterium: Global: Tilfeldig */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
  $handler->display->display_options['filters']['type']['group'] = 1;

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
    t('« første'),
    t('‹ forrige'),
    t('neste ›'),
    t('siste »'),
    t('<span class="website"><i class="icon-home"></i>[field_company_url]</span>'),
    t('<span class="comment"><i class="icon-comment"></i>[field_company_phonenumber]</span>'),
    t('<div><i class="icon-pencil"></i>[edit_node]</div>'),
    t('Rediger leverandør'),
    t('<span class="mail"><i class="icon-envelope"></i>[field_company_email]</span>'),
    t('[field_company_logo]
<section class="info">
  <h2>[title] <i class="where">[field_company_where]</i></h2>
  [field_company_url]
  [field_company_phonenumber]
  [field_company_email]
</section>'),
    t('Page'),
  );
  $export['leverandorer'] = $view;

  return $export;
}
