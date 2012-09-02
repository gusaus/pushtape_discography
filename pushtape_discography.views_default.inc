<?php
/**
 * @file
 * pushtape_discography.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pushtape_discography_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'releases';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'releases';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Releases';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_album',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No releases yet';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No releases yet. Add a <a href="/node/add/track">new track!</a>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Field: Content: Artwork */
  $handler->display->display_options['fields']['field_artwork']['id'] = 'field_artwork';
  $handler->display->display_options['fields']['field_artwork']['table'] = 'field_data_field_artwork';
  $handler->display->display_options['fields']['field_artwork']['field'] = 'field_artwork';
  $handler->display->display_options['fields']['field_artwork']['label'] = '';
  $handler->display->display_options['fields']['field_artwork']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_artwork']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_artwork']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_artwork']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_artwork']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artwork']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_artwork']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_artwork']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_artwork']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_artwork']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_artwork']['settings'] = array(
    'image_style' => 'artwork_small',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_artwork']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
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
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Album */
  $handler->display->display_options['fields']['field_album']['id'] = 'field_album';
  $handler->display->display_options['fields']['field_album']['table'] = 'field_data_field_album';
  $handler->display->display_options['fields']['field_album']['field'] = 'field_album';
  $handler->display->display_options['fields']['field_album']['label'] = '';
  $handler->display->display_options['fields']['field_album']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_album']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_album']['alter']['text'] = '[field_artwork][field_album]';
  $handler->display->display_options['fields']['field_album']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_album']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_album']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_album']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_album']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_album']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_album']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_album']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_album']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_album']['field_api_classes'] = 0;
  /* Field: Content: Artist */
  $handler->display->display_options['fields']['field_artist_term']['id'] = 'field_artist_term';
  $handler->display->display_options['fields']['field_artist_term']['table'] = 'field_data_field_artist_term';
  $handler->display->display_options['fields']['field_artist_term']['field'] = 'field_artist_term';
  $handler->display->display_options['fields']['field_artist_term']['label'] = '';
  $handler->display->display_options['fields']['field_artist_term']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_artist_term']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_artist_term']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['element_type'] = 'h5';
  $handler->display->display_options['fields']['field_artist_term']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artist_term']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_artist_term']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_artist_term']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_artist_term']['field_api_classes'] = 0;
  /* Contextual filter: Content: Album (field_album) */
  $handler->display->display_options['arguments']['field_album_target_id']['id'] = 'field_album_target_id';
  $handler->display->display_options['arguments']['field_album_target_id']['table'] = 'field_data_field_album';
  $handler->display->display_options['arguments']['field_album_target_id']['field'] = 'field_album_target_id';
  $handler->display->display_options['arguments']['field_album_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_album_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'album' => 'album',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;

  /* Display: Albums block */
  $handler = $view->new_display('block', 'Albums block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Albums';
  $handler->display->display_options['display_description'] = 'shows albums';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Artwork */
  $handler->display->display_options['fields']['field_artwork']['id'] = 'field_artwork';
  $handler->display->display_options['fields']['field_artwork']['table'] = 'field_data_field_artwork';
  $handler->display->display_options['fields']['field_artwork']['field'] = 'field_artwork';
  $handler->display->display_options['fields']['field_artwork']['label'] = '';
  $handler->display->display_options['fields']['field_artwork']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_artwork']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_artwork']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_artwork']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_artwork']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_artwork']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_artwork']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_artwork']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_artwork']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_artwork']['settings'] = array(
    'image_style' => 'artwork_small',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_artwork']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
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
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Album */
  $handler->display->display_options['fields']['field_album']['id'] = 'field_album';
  $handler->display->display_options['fields']['field_album']['table'] = 'field_data_field_album';
  $handler->display->display_options['fields']['field_album']['field'] = 'field_album';
  $handler->display->display_options['fields']['field_album']['label'] = '';
  $handler->display->display_options['fields']['field_album']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_album']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_album']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_album']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_album']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_album']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_album']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_album']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_album']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_album']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_album']['field_api_classes'] = 0;
  /* Field: Content: Artist */
  $handler->display->display_options['fields']['field_artist_term']['id'] = 'field_artist_term';
  $handler->display->display_options['fields']['field_artist_term']['table'] = 'field_data_field_artist_term';
  $handler->display->display_options['fields']['field_artist_term']['field'] = 'field_artist_term';
  $handler->display->display_options['fields']['field_artist_term']['label'] = '';
  $handler->display->display_options['fields']['field_artist_term']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_artist_term']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_artist_term']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_artist_term']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['element_type'] = 'h5';
  $handler->display->display_options['fields']['field_artist_term']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artist_term']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_artist_term']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_artist_term']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_artist_term']['field_api_classes'] = 0;
  /* Field: Content: Release date */
  $handler->display->display_options['fields']['field_release_date']['id'] = 'field_release_date';
  $handler->display->display_options['fields']['field_release_date']['table'] = 'field_data_field_release_date';
  $handler->display->display_options['fields']['field_release_date']['field'] = 'field_release_date';
  $handler->display->display_options['fields']['field_release_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_release_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_release_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_release_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_release_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_release_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_release_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_release_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_release_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_release_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_release_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_release_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_release_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_release_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_release_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_release_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_release_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_release_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_release_date']['field_api_classes'] = 0;

  /* Display: Releases pane */
  $handler = $view->new_display('panel_pane', 'Releases pane', 'releases_all');

  /* Display: Releases Slideshow */
  $handler = $view->new_display('panel_pane', 'Releases Slideshow', 'releases_slideshow');

  /* Display: Releases Page */
  $handler = $view->new_display('page', 'Releases Page', 'releases_page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_artwork',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'album' => 'album',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  $handler->display->display_options['path'] = 'discography';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Discography';
  $handler->display->display_options['menu']['description'] = 'albums and tracks';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['title'] = 'Discography';
  $handler->display->display_options['tab_options']['description'] = 'all releases';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';

  /* Display: Tracks */
  $handler = $view->new_display('page', 'Tracks', 'tracksview');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tracks';
  $handler->display->display_options['path'] = 'discography/tracks';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Tracks';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: All Releases Page */
  $handler = $view->new_display('page', 'All Releases Page', 'page_1');
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'track' => 'track',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  $handler->display->display_options['path'] = 'discography';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'All Releases';
  $handler->display->display_options['menu']['description'] = 'albums and tracks';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['title'] = 'Discography';
  $handler->display->display_options['tab_options']['description'] = 'all releases';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';

  /* Display: Albums */
  $handler = $view->new_display('page', 'Albums', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Albums';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Artwork */
  $handler->display->display_options['fields']['field_artwork']['id'] = 'field_artwork';
  $handler->display->display_options['fields']['field_artwork']['table'] = 'field_data_field_artwork';
  $handler->display->display_options['fields']['field_artwork']['field'] = 'field_artwork';
  $handler->display->display_options['fields']['field_artwork']['label'] = '';
  $handler->display->display_options['fields']['field_artwork']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_artwork']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_artwork']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_artwork']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_artwork']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_artwork']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_artwork']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_artwork']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_artwork']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_artwork']['settings'] = array(
    'image_style' => 'artwork_small',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_artwork']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
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
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Album */
  $handler->display->display_options['fields']['field_album']['id'] = 'field_album';
  $handler->display->display_options['fields']['field_album']['table'] = 'field_data_field_album';
  $handler->display->display_options['fields']['field_album']['field'] = 'field_album';
  $handler->display->display_options['fields']['field_album']['label'] = '';
  $handler->display->display_options['fields']['field_album']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_album']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_album']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_album']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_album']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_album']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_album']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_album']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_album']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_album']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_album']['field_api_classes'] = 0;
  /* Field: Content: Artist */
  $handler->display->display_options['fields']['field_artist_term']['id'] = 'field_artist_term';
  $handler->display->display_options['fields']['field_artist_term']['table'] = 'field_data_field_artist_term';
  $handler->display->display_options['fields']['field_artist_term']['field'] = 'field_artist_term';
  $handler->display->display_options['fields']['field_artist_term']['label'] = '';
  $handler->display->display_options['fields']['field_artist_term']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_artist_term']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_artist_term']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['element_type'] = 'h5';
  $handler->display->display_options['fields']['field_artist_term']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artist_term']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_artist_term']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_artist_term']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_artist_term']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_artist_term']['field_api_classes'] = 0;
  /* Field: Content: Audio */
  $handler->display->display_options['fields']['field_audio']['id'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['table'] = 'field_data_field_audio';
  $handler->display->display_options['fields']['field_audio']['field'] = 'field_audio';
  $handler->display->display_options['fields']['field_audio']['label'] = '';
  $handler->display->display_options['fields']['field_audio']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_audio']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_audio']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_audio']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_audio']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_audio']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_audio']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_audio']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_audio']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_audio']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_audio']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_audio']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_audio']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_audio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_audio']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_audio']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_audio']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_audio']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_audio']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_audio']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_audio']['settings'] = array(
    'file_view_mode' => 'media_original',
  );
  $handler->display->display_options['fields']['field_audio']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = 'discography/albums';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Albums';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';
  $translatables['releases'] = array(
    t('Master'),
    t('All Releases'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('No releases yet'),
    t('No releases yet. Add a <a href="/node/add/track">new track!</a>'),
    t('[field_artwork][field_album]'),
    t('All'),
    t('Albums block'),
    t('Albums'),
    t('shows albums'),
    t('Release date'),
    t('Releases pane'),
    t('View panes'),
    t('Releases Slideshow'),
    t('Releases Page'),
    t('Tracks'),
    t('All Releases Page'),
  );
  $export['releases'] = $view;

  return $export;
}
