<?php
/**
 * @file
 * auge_pages_who_we_are.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function auge_pages_who_we_are_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
