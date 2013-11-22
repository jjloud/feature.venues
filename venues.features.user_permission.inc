<?php
/**
 * @file
 * venues.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function venues_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer panelizer node venues breadcrumbs.
  $permissions['administer panelizer node venues breadcrumbs'] = array(
    'name' => 'administer panelizer node venues breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node venues content.
  $permissions['administer panelizer node venues content'] = array(
    'name' => 'administer panelizer node venues content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node venues context.
  $permissions['administer panelizer node venues context'] = array(
    'name' => 'administer panelizer node venues context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node venues defaults.
  $permissions['administer panelizer node venues defaults'] = array(
    'name' => 'administer panelizer node venues defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node venues layout.
  $permissions['administer panelizer node venues layout'] = array(
    'name' => 'administer panelizer node venues layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node venues overview.
  $permissions['administer panelizer node venues overview'] = array(
    'name' => 'administer panelizer node venues overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node venues settings.
  $permissions['administer panelizer node venues settings'] = array(
    'name' => 'administer panelizer node venues settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: clear venues feeds.
  $permissions['clear venues feeds'] = array(
    'name' => 'clear venues feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: create venues content.
  $permissions['create venues content'] = array(
    'name' => 'create venues content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any venues content.
  $permissions['delete any venues content'] = array(
    'name' => 'delete any venues content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own venues content.
  $permissions['delete own venues content'] = array(
    'name' => 'delete own venues content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any venues content.
  $permissions['edit any venues content'] = array(
    'name' => 'edit any venues content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own venues content.
  $permissions['edit own venues content'] = array(
    'name' => 'edit own venues content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: import venues feeds.
  $permissions['import venues feeds'] = array(
    'name' => 'import venues feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: unlock venues feeds.
  $permissions['unlock venues feeds'] = array(
    'name' => 'unlock venues feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
