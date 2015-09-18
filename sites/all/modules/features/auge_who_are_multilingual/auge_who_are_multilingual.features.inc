<?php
/**
 * @file
 * auge_who_are_multilingual.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function auge_who_are_multilingual_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function auge_who_are_multilingual_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function auge_who_are_multilingual_node_info() {
  $items = array(
    'personnel' => array(
      'name' => t('Personnel'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
