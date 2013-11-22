<?php
/**
 * @file
 * venues.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function venues_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'venue_node_categories';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Venue Node Categories';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Venue Category';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Venue Category */
  $handler->display->display_options['fields']['field_venue_category']['id'] = 'field_venue_category';
  $handler->display->display_options['fields']['field_venue_category']['table'] = 'field_data_field_venue_category';
  $handler->display->display_options['fields']['field_venue_category']['field'] = 'field_venue_category';
  $handler->display->display_options['fields']['field_venue_category']['label'] = '';
  $handler->display->display_options['fields']['field_venue_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_venue_category']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'venues' => 'venues',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';

  /* Display: Venue Category */
  $handler = $view->new_display('panel_pane', 'Venue Category', 'panel_pane_1');
  $export['venue_node_categories'] = $view;

  $view = new view();
  $view->name = 'venue_node_contact';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Venue Node Contact';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = 'Contact';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['type'] = 'contact_form';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'venues' => 'venues',
  );
  /* Filter criterion: Content: Email (field_email) */
  $handler->display->display_options['filters']['field_email_email']['id'] = 'field_email_email';
  $handler->display->display_options['filters']['field_email_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['filters']['field_email_email']['field'] = 'field_email_email';
  $handler->display->display_options['filters']['field_email_email']['operator'] = 'not empty';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['venue_node_contact'] = $view;

  $view = new view();
  $view->name = 'venue_node_map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Venue Node Image Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'venues_node_map';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'The %1 is available for private party rentals! Begin planning your event by contacting the venue!';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Field: Content: Venue Images */
  $handler->display->display_options['fields']['field_venue_images']['id'] = 'field_venue_images';
  $handler->display->display_options['fields']['field_venue_images']['table'] = 'field_data_field_venue_images';
  $handler->display->display_options['fields']['field_venue_images']['field'] = 'field_venue_images';
  $handler->display->display_options['fields']['field_venue_images']['label'] = '';
  $handler->display->display_options['fields']['field_venue_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_venue_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_venue_images']['settings'] = array(
    'image_style' => 'panopoly_image_featured',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_venue_images']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_venue_images']['delta_offset'] = '0';
  /* Sort criterion: Content: geofield (field_geofield) - proximity */
  $handler->display->display_options['sorts']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['sorts']['field_geofield_distance']['table'] = 'field_data_field_geofield';
  $handler->display->display_options['sorts']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['sorts']['field_geofield_distance']['source'] = 'exposed_geofield_filter';
  $handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_manual'] = array(
    'lat' => '',
    'lon' => '',
  );
  $handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_openlayers_example_input';
  $handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_openlayers_example_input';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'venues' => 'venues',
  );
  /* Filter criterion: Content: Venue Images (field_venue_images:alt) */
  $handler->display->display_options['filters']['field_venue_images_alt']['id'] = 'field_venue_images_alt';
  $handler->display->display_options['filters']['field_venue_images_alt']['table'] = 'field_data_field_venue_images';
  $handler->display->display_options['filters']['field_venue_images_alt']['field'] = 'field_venue_images_alt';
  $handler->display->display_options['filters']['field_venue_images_alt']['operator'] = 'not empty';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['venue_node_map'] = $view;

  $view = new view();
  $view->name = 'venue_node_proximity';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Venue Node Proximity';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Nearby Venues';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'venues_node_map';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: geofield */
  $handler->display->display_options['fields']['field_geofield']['id'] = 'field_geofield';
  $handler->display->display_options['fields']['field_geofield']['table'] = 'field_data_field_geofield';
  $handler->display->display_options['fields']['field_geofield']['field'] = 'field_geofield';
  $handler->display->display_options['fields']['field_geofield']['label'] = '';
  $handler->display->display_options['fields']['field_geofield']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_geofield']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geofield']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_geofield']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: geofield (field_geofield) - proximity */
  $handler->display->display_options['fields']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['fields']['field_geofield_distance']['table'] = 'field_data_field_geofield';
  $handler->display->display_options['fields']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['fields']['field_geofield_distance']['label'] = '';
  $handler->display->display_options['fields']['field_geofield_distance']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geofield_distance']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['field_geofield_distance']['precision'] = '1';
  $handler->display->display_options['fields']['field_geofield_distance']['suffix'] = ' miles';
  $handler->display->display_options['fields']['field_geofield_distance']['source'] = 'entity_from_url';
  $handler->display->display_options['fields']['field_geofield_distance']['geofield_proximity_manual'] = array(
    'lat' => '',
    'lon' => '',
  );
  $handler->display->display_options['fields']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_geofield';
  $handler->display->display_options['fields']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_openlayers_example_input';
  $handler->display->display_options['fields']['field_geofield_distance']['radius_of_earth'] = '6371';
  /* Sort criterion: Content: geofield (field_geofield) - proximity */
  $handler->display->display_options['sorts']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['sorts']['field_geofield_distance']['table'] = 'field_data_field_geofield';
  $handler->display->display_options['sorts']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['sorts']['field_geofield_distance']['source'] = 'entity_from_url';
  $handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_manual'] = array(
    'lat' => '',
    'lon' => '',
  );
  $handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_geofield';
  $handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_openlayers_example_input';
  $handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_other_geofield'] = 'field_geofield';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: geofield (field_geofield) - proximity */
  $handler->display->display_options['filters']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['table'] = 'field_data_field_geofield';
  $handler->display->display_options['filters']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['operator'] = '<=';
  $handler->display->display_options['filters']['field_geofield_distance']['value'] = array(
    'distance' => '10',
    'distance2' => 200,
    'unit' => '3959',
    'origin' => '',
  );
  $handler->display->display_options['filters']['field_geofield_distance']['source'] = 'entity_from_url';
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_geofield';
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_openlayers_example_input';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'venues' => 'venues',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Venue Images */
  $handler->display->display_options['fields']['field_venue_images']['id'] = 'field_venue_images';
  $handler->display->display_options['fields']['field_venue_images']['table'] = 'field_data_field_venue_images';
  $handler->display->display_options['fields']['field_venue_images']['field'] = 'field_venue_images';
  $handler->display->display_options['fields']['field_venue_images']['label'] = '';
  $handler->display->display_options['fields']['field_venue_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_venue_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_venue_images']['settings'] = array(
    'image_style' => 'panopoly_image_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_venue_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_venue_images']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: geofield */
  $handler->display->display_options['fields']['field_geofield']['id'] = 'field_geofield';
  $handler->display->display_options['fields']['field_geofield']['table'] = 'field_data_field_geofield';
  $handler->display->display_options['fields']['field_geofield']['field'] = 'field_geofield';
  $handler->display->display_options['fields']['field_geofield']['label'] = '';
  $handler->display->display_options['fields']['field_geofield']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_geofield']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geofield']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_geofield']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: geofield (field_geofield) - proximity */
  $handler->display->display_options['fields']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['fields']['field_geofield_distance']['table'] = 'field_data_field_geofield';
  $handler->display->display_options['fields']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['fields']['field_geofield_distance']['label'] = '';
  $handler->display->display_options['fields']['field_geofield_distance']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geofield_distance']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['field_geofield_distance']['precision'] = '1';
  $handler->display->display_options['fields']['field_geofield_distance']['suffix'] = ' miles';
  $handler->display->display_options['fields']['field_geofield_distance']['source'] = 'entity_from_url';
  $handler->display->display_options['fields']['field_geofield_distance']['geofield_proximity_manual'] = array(
    'lat' => '',
    'lon' => '',
  );
  $handler->display->display_options['fields']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_geofield';
  $handler->display->display_options['fields']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_openlayers_example_input';
  $handler->display->display_options['fields']['field_geofield_distance']['radius_of_earth'] = '6371';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'nearby';

  /* Display: Venue Node Proximity */
  $handler = $view->new_display('openlayers', 'Venue Node Proximity', 'openlayers_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_geofield',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => '',
    'view_mode' => 'full',
    'style_field' => '',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Content pane 2 */
  $handler = $view->new_display('panel_pane', 'Content pane 2', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'venues_node_map';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Venue Node Actual */
  $handler = $view->new_display('openlayers', 'Venue Node Actual', 'openlayers_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_geofield',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => '',
    'view_mode' => 'full',
    'style_field' => '',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['venue_node_proximity'] = $view;

  $view = new view();
  $view->name = 'venue_node_specs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Venue Node Specs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Venue Specifications';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'flipped';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_maximum_occupancy' => 'field_maximum_occupancy',
    'field_alcohol' => 'field_alcohol',
    'field_food_policy' => 'field_food_policy',
    'field_address' => 'field_address',
    'field_website' => 'field_website',
    'field_telephone' => 'field_telephone',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_maximum_occupancy' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_alcohol' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_food_policy' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_website' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_telephone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['style_options']['flipped_table_header_first_field'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Telephone */
  $handler->display->display_options['fields']['field_telephone']['id'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['table'] = 'field_data_field_telephone';
  $handler->display->display_options['fields']['field_telephone']['field'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['hide_empty'] = TRUE;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  /* Field: Content: Maximum Occupancy */
  $handler->display->display_options['fields']['field_maximum_occupancy']['id'] = 'field_maximum_occupancy';
  $handler->display->display_options['fields']['field_maximum_occupancy']['table'] = 'field_data_field_maximum_occupancy';
  $handler->display->display_options['fields']['field_maximum_occupancy']['field'] = 'field_maximum_occupancy';
  $handler->display->display_options['fields']['field_maximum_occupancy']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_maximum_occupancy']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_maximum_occupancy']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Alcohol Policy */
  $handler->display->display_options['fields']['field_alcohol']['id'] = 'field_alcohol';
  $handler->display->display_options['fields']['field_alcohol']['table'] = 'field_data_field_alcohol';
  $handler->display->display_options['fields']['field_alcohol']['field'] = 'field_alcohol';
  $handler->display->display_options['fields']['field_alcohol']['hide_empty'] = TRUE;
  /* Field: Content: Food Policy */
  $handler->display->display_options['fields']['field_food_policy']['id'] = 'field_food_policy';
  $handler->display->display_options['fields']['field_food_policy']['table'] = 'field_data_field_food_policy';
  $handler->display->display_options['fields']['field_food_policy']['field'] = 'field_food_policy';
  $handler->display->display_options['fields']['field_food_policy']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_food_policy']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'venues' => 'venues',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['venue_node_specs'] = $view;

  $view = new view();
  $view->name = 'venues_bulk_operations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Venues Bulk Operations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_geofield',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => '#node',
    'view_mode' => 'teaser',
    'style_field' => '',
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::flag_node_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'venues::field_venue_category' => 'venues::field_venue_category',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::panelizer_set_status_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Venue Images */
  $handler->display->display_options['fields']['field_venue_images']['id'] = 'field_venue_images';
  $handler->display->display_options['fields']['field_venue_images']['table'] = 'field_data_field_venue_images';
  $handler->display->display_options['fields']['field_venue_images']['field'] = 'field_venue_images';
  $handler->display->display_options['fields']['field_venue_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_venue_images']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_venue_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_venue_images']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: geofield */
  $handler->display->display_options['fields']['field_geofield']['id'] = 'field_geofield';
  $handler->display->display_options['fields']['field_geofield']['table'] = 'field_data_field_geofield';
  $handler->display->display_options['fields']['field_geofield']['field'] = 'field_geofield';
  $handler->display->display_options['fields']['field_geofield']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_geofield']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_geofield']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: geofield (field_geofield) - proximity */
  $handler->display->display_options['fields']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['fields']['field_geofield_distance']['table'] = 'field_data_field_geofield';
  $handler->display->display_options['fields']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['fields']['field_geofield_distance']['label'] = 'Distance';
  $handler->display->display_options['fields']['field_geofield_distance']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['field_geofield_distance']['precision'] = '1';
  $handler->display->display_options['fields']['field_geofield_distance']['source'] = 'exposed_geofield_filter';
  $handler->display->display_options['fields']['field_geofield_distance']['geofield_proximity_manual'] = array(
    'lat' => '',
    'lon' => '',
  );
  $handler->display->display_options['fields']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_openlayers_example_input';
  $handler->display->display_options['fields']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_openlayers_example_input';
  $handler->display->display_options['fields']['field_geofield_distance']['radius_of_earth'] = '3959';
  /* Field: Content: Maximum Occupancy */
  $handler->display->display_options['fields']['field_maximum_occupancy']['id'] = 'field_maximum_occupancy';
  $handler->display->display_options['fields']['field_maximum_occupancy']['table'] = 'field_data_field_maximum_occupancy';
  $handler->display->display_options['fields']['field_maximum_occupancy']['field'] = 'field_maximum_occupancy';
  $handler->display->display_options['fields']['field_maximum_occupancy']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Venue Category */
  $handler->display->display_options['fields']['field_venue_category']['id'] = 'field_venue_category';
  $handler->display->display_options['fields']['field_venue_category']['table'] = 'field_data_field_venue_category';
  $handler->display->display_options['fields']['field_venue_category']['field'] = 'field_venue_category';
  $handler->display->display_options['fields']['field_venue_category']['delta_offset'] = '0';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  /* Sort criterion: Content: geofield (field_geofield) - proximity */
  $handler->display->display_options['sorts']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['sorts']['field_geofield_distance']['table'] = 'field_data_field_geofield';
  $handler->display->display_options['sorts']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['sorts']['field_geofield_distance']['source'] = 'exposed_geofield_filter';
  $handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_manual'] = array(
    'lat' => '',
    'lon' => '',
  );
  $handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_openlayers_example_input';
  $handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_openlayers_example_input';
  /* Sort criterion: Content: Email (field_email) */
  $handler->display->display_options['sorts']['field_email_email']['id'] = 'field_email_email';
  $handler->display->display_options['sorts']['field_email_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['sorts']['field_email_email']['field'] = 'field_email_email';
  $handler->display->display_options['sorts']['field_email_email']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_email_email']['expose']['label'] = 'Email (field_email)';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'venues' => 'venues',
  );
  /* Filter criterion: Content: geofield (field_geofield) - proximity */
  $handler->display->display_options['filters']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['table'] = 'field_data_field_geofield';
  $handler->display->display_options['filters']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['operator'] = '<=';
  $handler->display->display_options['filters']['field_geofield_distance']['value'] = array(
    'distance' => '10',
    'distance2' => 200,
    'unit' => '3959',
    'origin' => '',
  );
  $handler->display->display_options['filters']['field_geofield_distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['operator_id'] = 'field_geofield_distance_op';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['label'] = 'Proximity';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['operator'] = 'field_geofield_distance_op';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['identifier'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['filters']['field_geofield_distance']['source'] = 'geocoder';
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_openlayers_example_input';
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_openlayers_example_input';
  /* Filter criterion: Content: Venue Category (field_venue_category) */
  $handler->display->display_options['filters']['field_venue_category_tid']['id'] = 'field_venue_category_tid';
  $handler->display->display_options['filters']['field_venue_category_tid']['table'] = 'field_data_field_venue_category';
  $handler->display->display_options['filters']['field_venue_category_tid']['field'] = 'field_venue_category_tid';
  $handler->display->display_options['filters']['field_venue_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_venue_category_tid']['expose']['operator_id'] = 'field_venue_category_tid_op';
  $handler->display->display_options['filters']['field_venue_category_tid']['expose']['label'] = 'Venue Category';
  $handler->display->display_options['filters']['field_venue_category_tid']['expose']['operator'] = 'field_venue_category_tid_op';
  $handler->display->display_options['filters']['field_venue_category_tid']['expose']['identifier'] = 'field_venue_category_tid';
  $handler->display->display_options['filters']['field_venue_category_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_venue_category_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_venue_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['filters']['field_venue_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_venue_category_tid']['vocabulary'] = 'venue_categories';
  /* Filter criterion: Content: Alcohol Policy (field_alcohol) */
  $handler->display->display_options['filters']['field_alcohol_tid']['id'] = 'field_alcohol_tid';
  $handler->display->display_options['filters']['field_alcohol_tid']['table'] = 'field_data_field_alcohol';
  $handler->display->display_options['filters']['field_alcohol_tid']['field'] = 'field_alcohol_tid';
  $handler->display->display_options['filters']['field_alcohol_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_alcohol_tid']['expose']['operator_id'] = 'field_alcohol_tid_op';
  $handler->display->display_options['filters']['field_alcohol_tid']['expose']['label'] = 'Alcohol Policy';
  $handler->display->display_options['filters']['field_alcohol_tid']['expose']['operator'] = 'field_alcohol_tid_op';
  $handler->display->display_options['filters']['field_alcohol_tid']['expose']['identifier'] = 'field_alcohol_tid';
  $handler->display->display_options['filters']['field_alcohol_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_alcohol_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_alcohol_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['filters']['field_alcohol_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_alcohol_tid']['vocabulary'] = 'venue_alcohol_policy';
  /* Filter criterion: Content: Food Policy (field_food_policy) */
  $handler->display->display_options['filters']['field_food_policy_tid']['id'] = 'field_food_policy_tid';
  $handler->display->display_options['filters']['field_food_policy_tid']['table'] = 'field_data_field_food_policy';
  $handler->display->display_options['filters']['field_food_policy_tid']['field'] = 'field_food_policy_tid';
  $handler->display->display_options['filters']['field_food_policy_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_food_policy_tid']['expose']['operator_id'] = 'field_food_policy_tid_op';
  $handler->display->display_options['filters']['field_food_policy_tid']['expose']['label'] = 'Food Policy';
  $handler->display->display_options['filters']['field_food_policy_tid']['expose']['operator'] = 'field_food_policy_tid_op';
  $handler->display->display_options['filters']['field_food_policy_tid']['expose']['identifier'] = 'field_food_policy_tid';
  $handler->display->display_options['filters']['field_food_policy_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_food_policy_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_food_policy_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['filters']['field_food_policy_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_food_policy_tid']['vocabulary'] = 'venue_food_policy';
  /* Filter criterion: Content: Maximum Occupancy (field_maximum_occupancy) */
  $handler->display->display_options['filters']['field_maximum_occupancy_value']['id'] = 'field_maximum_occupancy_value';
  $handler->display->display_options['filters']['field_maximum_occupancy_value']['table'] = 'field_data_field_maximum_occupancy';
  $handler->display->display_options['filters']['field_maximum_occupancy_value']['field'] = 'field_maximum_occupancy_value';
  $handler->display->display_options['filters']['field_maximum_occupancy_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_maximum_occupancy_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_maximum_occupancy_value']['expose']['operator_id'] = 'field_maximum_occupancy_value_op';
  $handler->display->display_options['filters']['field_maximum_occupancy_value']['expose']['label'] = 'Maximum Occupancy (less than)';
  $handler->display->display_options['filters']['field_maximum_occupancy_value']['expose']['operator'] = 'field_maximum_occupancy_value_op';
  $handler->display->display_options['filters']['field_maximum_occupancy_value']['expose']['identifier'] = 'field_maximum_occupancy_value';
  $handler->display->display_options['filters']['field_maximum_occupancy_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_maximum_occupancy_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => '3',
    4 => '4',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_venue_images' => 'field_venue_images',
    'title' => 'title',
    'field_geofield' => 'field_geofield',
    'field_geofield_distance' => 'field_geofield_distance',
    'field_maximum_occupancy' => 'field_maximum_occupancy',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_venue_images' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_geofield' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_geofield_distance' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_maximum_occupancy' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'venues-mod';
  $export['venues_bulk_operations'] = $view;

  $view = new view();
  $view->name = 'venues_map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Venues Map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_geofield_distance' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_venue_category_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_alcohol_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_food_policy_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_geofield',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => '#node',
    'view_mode' => 'teaser',
    'style_field' => '',
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Venue Images */
  $handler->display->display_options['fields']['field_venue_images']['id'] = 'field_venue_images';
  $handler->display->display_options['fields']['field_venue_images']['table'] = 'field_data_field_venue_images';
  $handler->display->display_options['fields']['field_venue_images']['field'] = 'field_venue_images';
  $handler->display->display_options['fields']['field_venue_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_venue_images']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_venue_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_venue_images']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: geofield */
  $handler->display->display_options['fields']['field_geofield']['id'] = 'field_geofield';
  $handler->display->display_options['fields']['field_geofield']['table'] = 'field_data_field_geofield';
  $handler->display->display_options['fields']['field_geofield']['field'] = 'field_geofield';
  $handler->display->display_options['fields']['field_geofield']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_geofield']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_geofield']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: geofield (field_geofield) - proximity */
  $handler->display->display_options['fields']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['fields']['field_geofield_distance']['table'] = 'field_data_field_geofield';
  $handler->display->display_options['fields']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['fields']['field_geofield_distance']['label'] = 'Distance';
  $handler->display->display_options['fields']['field_geofield_distance']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['field_geofield_distance']['precision'] = '1';
  $handler->display->display_options['fields']['field_geofield_distance']['source'] = 'exposed_geofield_filter';
  $handler->display->display_options['fields']['field_geofield_distance']['geofield_proximity_manual'] = array(
    'lat' => '',
    'lon' => '',
  );
  $handler->display->display_options['fields']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_openlayers_example_input';
  $handler->display->display_options['fields']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_openlayers_example_input';
  $handler->display->display_options['fields']['field_geofield_distance']['radius_of_earth'] = '3959';
  /* Field: Content: Maximum Occupancy */
  $handler->display->display_options['fields']['field_maximum_occupancy']['id'] = 'field_maximum_occupancy';
  $handler->display->display_options['fields']['field_maximum_occupancy']['table'] = 'field_data_field_maximum_occupancy';
  $handler->display->display_options['fields']['field_maximum_occupancy']['field'] = 'field_maximum_occupancy';
  $handler->display->display_options['fields']['field_maximum_occupancy']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: geofield (field_geofield) - proximity */
  $handler->display->display_options['sorts']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['sorts']['field_geofield_distance']['table'] = 'field_data_field_geofield';
  $handler->display->display_options['sorts']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['sorts']['field_geofield_distance']['source'] = 'exposed_geofield_filter';
  $handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_manual'] = array(
    'lat' => '',
    'lon' => '',
  );
  $handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_openlayers_example_input';
  $handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_openlayers_example_input';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'venues' => 'venues',
  );
  /* Filter criterion: Content: geofield (field_geofield) - proximity */
  $handler->display->display_options['filters']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['table'] = 'field_data_field_geofield';
  $handler->display->display_options['filters']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['operator'] = '<=';
  $handler->display->display_options['filters']['field_geofield_distance']['value'] = array(
    'distance' => '10',
    'distance2' => 200,
    'unit' => '3959',
    'origin' => '',
  );
  $handler->display->display_options['filters']['field_geofield_distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['operator_id'] = 'field_geofield_distance_op';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['label'] = 'Proximity';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['operator'] = 'field_geofield_distance_op';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['identifier'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['filters']['field_geofield_distance']['source'] = 'geocoder';
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_geofield';
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_geofield';
  /* Filter criterion: Content: Venue Category (field_venue_category) */
  $handler->display->display_options['filters']['field_venue_category_tid']['id'] = 'field_venue_category_tid';
  $handler->display->display_options['filters']['field_venue_category_tid']['table'] = 'field_data_field_venue_category';
  $handler->display->display_options['filters']['field_venue_category_tid']['field'] = 'field_venue_category_tid';
  $handler->display->display_options['filters']['field_venue_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_venue_category_tid']['expose']['operator_id'] = 'field_venue_category_tid_op';
  $handler->display->display_options['filters']['field_venue_category_tid']['expose']['label'] = 'Venue Category';
  $handler->display->display_options['filters']['field_venue_category_tid']['expose']['operator'] = 'field_venue_category_tid_op';
  $handler->display->display_options['filters']['field_venue_category_tid']['expose']['identifier'] = 'field_venue_category_tid';
  $handler->display->display_options['filters']['field_venue_category_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_venue_category_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_venue_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['filters']['field_venue_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_venue_category_tid']['vocabulary'] = 'venue_categories';
  /* Filter criterion: Content: Alcohol Policy (field_alcohol) */
  $handler->display->display_options['filters']['field_alcohol_tid']['id'] = 'field_alcohol_tid';
  $handler->display->display_options['filters']['field_alcohol_tid']['table'] = 'field_data_field_alcohol';
  $handler->display->display_options['filters']['field_alcohol_tid']['field'] = 'field_alcohol_tid';
  $handler->display->display_options['filters']['field_alcohol_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_alcohol_tid']['expose']['operator_id'] = 'field_alcohol_tid_op';
  $handler->display->display_options['filters']['field_alcohol_tid']['expose']['label'] = 'Alcohol Policy';
  $handler->display->display_options['filters']['field_alcohol_tid']['expose']['operator'] = 'field_alcohol_tid_op';
  $handler->display->display_options['filters']['field_alcohol_tid']['expose']['identifier'] = 'field_alcohol_tid';
  $handler->display->display_options['filters']['field_alcohol_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_alcohol_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_alcohol_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['filters']['field_alcohol_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_alcohol_tid']['vocabulary'] = 'venue_alcohol_policy';
  /* Filter criterion: Content: Food Policy (field_food_policy) */
  $handler->display->display_options['filters']['field_food_policy_tid']['id'] = 'field_food_policy_tid';
  $handler->display->display_options['filters']['field_food_policy_tid']['table'] = 'field_data_field_food_policy';
  $handler->display->display_options['filters']['field_food_policy_tid']['field'] = 'field_food_policy_tid';
  $handler->display->display_options['filters']['field_food_policy_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_food_policy_tid']['expose']['operator_id'] = 'field_food_policy_tid_op';
  $handler->display->display_options['filters']['field_food_policy_tid']['expose']['label'] = 'Food Policy';
  $handler->display->display_options['filters']['field_food_policy_tid']['expose']['operator'] = 'field_food_policy_tid_op';
  $handler->display->display_options['filters']['field_food_policy_tid']['expose']['identifier'] = 'field_food_policy_tid';
  $handler->display->display_options['filters']['field_food_policy_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_food_policy_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_food_policy_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['filters']['field_food_policy_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_food_policy_tid']['vocabulary'] = 'venue_food_policy';
  /* Filter criterion: Content: Maximum Occupancy (field_maximum_occupancy) */
  $handler->display->display_options['filters']['field_maximum_occupancy_value']['id'] = 'field_maximum_occupancy_value';
  $handler->display->display_options['filters']['field_maximum_occupancy_value']['table'] = 'field_data_field_maximum_occupancy';
  $handler->display->display_options['filters']['field_maximum_occupancy_value']['field'] = 'field_maximum_occupancy_value';
  $handler->display->display_options['filters']['field_maximum_occupancy_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_maximum_occupancy_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_maximum_occupancy_value']['expose']['operator_id'] = 'field_maximum_occupancy_value_op';
  $handler->display->display_options['filters']['field_maximum_occupancy_value']['expose']['label'] = 'Maximum Occupancy (less than)';
  $handler->display->display_options['filters']['field_maximum_occupancy_value']['expose']['operator'] = 'field_maximum_occupancy_value_op';
  $handler->display->display_options['filters']['field_maximum_occupancy_value']['expose']['identifier'] = 'field_maximum_occupancy_value';
  $handler->display->display_options['filters']['field_maximum_occupancy_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_maximum_occupancy_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => '3',
    4 => '4',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;

  /* Display: OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'openlayers_1');
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';

  /* Display: Table Pane */
  $handler = $view->new_display('panel_pane', 'Table Pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_geofield' => 'field_geofield',
    'field_geofield_distance' => 'field_geofield_distance',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_geofield' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_geofield_distance' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['link_to_view'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Map Pane */
  $handler = $view->new_display('panel_pane', 'Map Pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'venues_map';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found. Please modify your search. ';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['venues_map'] = $view;

  return $export;
}
