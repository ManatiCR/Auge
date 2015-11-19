<?php
/**
 * @file
 * auge_quicktabs.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function auge_quicktabs_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['quicktabs-personel_tabs_spanish'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'personel_tabs_spanish',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'quicktabs',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'auge' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'auge',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['quicktabs-personnel_tabs'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'personnel_tabs',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'quicktabs',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'auge' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'auge',
        'weight' => -2,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
