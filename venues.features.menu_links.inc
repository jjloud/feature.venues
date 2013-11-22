<?php
/**
 * @file
 * venues.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function venues_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:node/add/venues
  $menu_links['navigation:node/add/venues'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/venues',
    'router_path' => 'node/add/venues',
    'link_title' => 'Venues',
    'options' => array(
      'attributes' => array(
        'title' => 'A content type to store venue listings including contact information, images, and more. ',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Venues');


  return $menu_links;
}
