<?php
/**
 * @file
 * auge_language_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function auge_language_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  return $permissions;
}
