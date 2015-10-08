<?php
/**
 * @file
 * auge_contexts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function auge_contexts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
