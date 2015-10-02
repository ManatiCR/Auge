<?php
/**
 * @file
 * auge_content_types_project.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function auge_content_types_project_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function auge_content_types_project_node_info() {
  $items = array(
    'projects' => array(
      'name' => t('Project'),
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
