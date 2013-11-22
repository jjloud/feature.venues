<?php
/**
 * @file
 * venues.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function venues_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'venues';
  $feeds_importer->config = array(
    'name' => 'Venues',
    'description' => 'Importer for DJEventPlanner venues',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'private://tmp',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Address',
            'target' => 'field_address:thoroughfare',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'City',
            'target' => 'field_address:locality',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'State',
            'target' => 'field_address:administrative_area',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Zipcode',
            'target' => 'field_address:postal_code',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Country',
            'target' => 'field_address:country',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Website',
            'target' => 'field_website:url',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'LinkTitle',
            'target' => 'field_website:title',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Telephone',
            'target' => 'field_telephone',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Email',
            'target' => 'field_email',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Venue ID',
            'target' => 'guid',
            'unique' => 1,
          ),
          11 => array(
            'source' => 'Venue ID',
            'target' => 'field_venue_id',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'venues',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['venues'] = $feeds_importer;

  return $export;
}
