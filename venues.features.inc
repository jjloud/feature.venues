<?php
/**
 * @file
 * venues.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function venues_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function venues_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function venues_node_info() {
  $items = array(
    'venues' => array(
      'name' => t('Venues'),
      'base' => 'node_content',
      'description' => t('A content type to store venue listings including contact information, images, and more. '),
      'has_title' => '1',
      'title_label' => t('Venue Name'),
      'help' => '',
    ),
  );
  return $items;
}
