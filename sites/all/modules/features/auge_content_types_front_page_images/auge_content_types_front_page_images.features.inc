<?php
/**
 * @file
 * auge_content_types_front_page_images.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function auge_content_types_front_page_images_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function auge_content_types_front_page_images_node_info() {
  $items = array(
    'front_page_images' => array(
      'name' => t('Front page images'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Place'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
