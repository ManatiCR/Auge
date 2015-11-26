<?php
/**
 * @file
 * auge_pages_404_403.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function auge_pages_404_403_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
