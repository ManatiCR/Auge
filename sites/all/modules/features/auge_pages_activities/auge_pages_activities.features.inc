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

/**
 * Implements hook_fe_date_locale_date_format().
 */
function auge_pages_activities_fe_date_locale_date_format() {
  $locale_date_formats = array();

  // Exported format: activities_sidebar::en
  $locale_date_formats['activities_sidebar::en'] = array(
    'type' => 'activities_sidebar',
    'format' => 'd M',
    'locales' => array(
      0 => 'en',
    ),
  );
  // Exported format: activities_sidebar::es
  $locale_date_formats['activities_sidebar::es'] = array(
    'type' => 'activities_sidebar',
    'format' => 'd M',
    'locales' => array(
      0 => 'es',
    ),
  );
  return $locale_date_formats;
}
