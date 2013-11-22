<?php
/**
 * @file
 * venues.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function venues_taxonomy_default_vocabularies() {
  return array(
    'availability' => array(
      'name' => 'Availability',
      'machine_name' => 'availability',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'included_features' => array(
      'name' => 'Included Features',
      'machine_name' => 'included_features',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'venue_alcohol_policy' => array(
      'name' => 'Venue Alcohol Policy',
      'machine_name' => 'venue_alcohol_policy',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'venue_categories' => array(
      'name' => 'Venue Categories',
      'machine_name' => 'venue_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'venue_food_policy' => array(
      'name' => 'Venue Food Policy',
      'machine_name' => 'venue_food_policy',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
