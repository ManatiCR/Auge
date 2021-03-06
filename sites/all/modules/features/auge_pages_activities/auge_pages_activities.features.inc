<?php
/**
 * @file
 * auge_pages_activities.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function auge_pages_activities_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_fe_date_custom_date_formats().
 */
function auge_pages_activities_fe_date_custom_date_formats() {
  $custom_date_formats = array();
  $custom_date_formats['d M'] = 'd M';
  return $custom_date_formats;
}

/**
 * Implements hook_date_format_types().
 */
function auge_pages_activities_date_format_types() {
  $format_types = array();
  // Exported date format type: activities_sidebar
  $format_types['activities_sidebar'] = 'Activities sidebar';
  return $format_types;
}
