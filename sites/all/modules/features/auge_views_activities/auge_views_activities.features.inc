<?php
/**
 * @file
 * auge_views_activities.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function auge_views_activities_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function auge_views_activities_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_date_locale_date_format().
 */
function auge_views_activities_fe_date_locale_date_format() {
  $locale_date_formats = array();

  // Exported format: activities_sidebar::en
  $locale_date_formats['activities_sidebar::en'] = array(
    'type' => 'activities_sidebar',
    'format' => array(
      'blog_post_date' => 'F j, Y',
    ),
    'locales' => array(
      0 => 'en',
    ),
  );
  // Exported format: activities_sidebar::es
  $locale_date_formats['activities_sidebar::es'] = array(
    'type' => 'activities_sidebar',
    'format' => array(
      'blog_post_date' => 'F j, Y',
    ),
    'locales' => array(
      0 => 'es',
    ),
  );
  return $locale_date_formats;
}
