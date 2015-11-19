<?php
/**
 * @file
 * auge_page_titles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function auge_page_titles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function auge_page_titles_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
