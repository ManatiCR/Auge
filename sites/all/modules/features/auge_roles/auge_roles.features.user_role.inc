<?php
/**
 * @file
 * auge_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function auge_roles_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: content admin.
  $roles['content admin'] = array(
    'name' => 'content admin',
    'weight' => 3,
  );

  return $roles;
}
