<?php
/**
 * @file
 * venues.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function venues_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_venues';
  $strongarm->value = 'edit-menu';
  $export['additional_settings__active_tab_venues'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_enabled_venues';
  $strongarm->value = 1;
  $export['date_popup_authored_enabled_venues'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_format_venues';
  $strongarm->value = 'm/d/Y - H:i';
  $export['date_popup_authored_format_venues'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_year_range_venues';
  $strongarm->value = '3';
  $export['date_popup_authored_year_range_venues'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flag_bookmarks_default_venues';
  $strongarm->value = 0;
  $export['flag_bookmarks_default_venues'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_venues';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 1,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 1,
        'default' => 0,
        'choice' => 0,
      ),
      'featured' => array(
        'status' => 1,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_venues'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_venues_pattern';
  $strongarm->value = 'venue/[node:title]';
  $export['pathauto_node_venues_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_venues';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_venues'] = $strongarm;

  return $export;
}
