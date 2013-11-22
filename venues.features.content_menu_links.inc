<?php
/**
 * @file
 * venues.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function venues_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu:venues
  $menu_links['main-menu:venues'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'venues',
    'router_path' => 'venues',
    'link_title' => 'Venues',
    'options' => array(
      'attributes' => array(
        'title' => 'Link to the venues feature. ',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
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
