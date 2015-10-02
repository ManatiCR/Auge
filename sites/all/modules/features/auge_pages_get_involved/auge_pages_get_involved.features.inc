<?php
/**
 * @file
 * auge_pages_get_involved.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function auge_pages_get_involved_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
