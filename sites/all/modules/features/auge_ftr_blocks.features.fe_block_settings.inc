<?php
/**
 * @file
 * auge_ftr_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function auge_ftr_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-block_contacto'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'block_contacto',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'footer_fourthcolumn',
        'status' => 1,
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
    'title' => 'Contacto',
    'visibility' => 0,
  );

  return $export;
}
