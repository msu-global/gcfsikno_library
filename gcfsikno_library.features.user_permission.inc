<?php
/**
 * @file
 * gcfsikno_library.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gcfsikno_library_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create library_resource content'.
  $permissions['create library_resource content'] = array(
    'name' => 'create library_resource content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any library_resource content'.
  $permissions['delete any library_resource content'] = array(
    'name' => 'delete any library_resource content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own library_resource content'.
  $permissions['delete own library_resource content'] = array(
    'name' => 'delete own library_resource content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any library_resource content'.
  $permissions['edit any library_resource content'] = array(
    'name' => 'edit any library_resource content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own library_resource content'.
  $permissions['edit own library_resource content'] = array(
    'name' => 'edit own library_resource content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
