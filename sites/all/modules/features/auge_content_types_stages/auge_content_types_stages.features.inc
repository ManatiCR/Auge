<?php
/**
 * @file
 * auge_content_types_stages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function auge_content_types_stages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function auge_content_types_stages_node_info() {
  $items = array(
    'stages' => array(
      'name' => t('Stages'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Stage'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
