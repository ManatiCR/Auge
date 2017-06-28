<?php
/**
 * @file
 * auge_contexts.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function auge_contexts_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-social-links'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-social-links',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'auge' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'auge',
        'weight' => 3,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
