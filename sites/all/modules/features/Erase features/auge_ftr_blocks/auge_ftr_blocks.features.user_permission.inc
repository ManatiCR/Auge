<?php
/**
 * @file
 * auge_ftr_blocks.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function auge_ftr_blocks_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'contact',
  );

  return $permissions;
}
