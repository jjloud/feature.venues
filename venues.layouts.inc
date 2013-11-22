<?php
/**
 * @file
 * venues.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function venues_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'venues';
  $layout->admin_title = 'Venues';
  $layout->admin_description = '';
  $layout->category = '';
  $layout->plugin = 'flexible';
  $layout->settings = array();
  $export['venues'] = $layout;

  return $export;
}
