<?php
/**
 * @file
 * auge_pages_projects.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function auge_pages_projects_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function auge_pages_projects_image_default_styles() {
  $styles = array();

  // Exported image style: project_logo.
  $styles['project_logo'] = array(
    'label' => 'Project logo',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 180,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
