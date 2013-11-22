<?php
/**
 * @file
 * venues.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function venues_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'venues-country-default_value';
  $feeds_tamper->importer = 'venues';
  $feeds_tamper->source = 'Country';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'US',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';
  $export['venues-country-default_value'] = $feeds_tamper;

  return $export;
}
