<?php
/**
 * @file
 * auge_views_projects.features.inc
 */

/**
 * Implements hook_views_api().
 */
function auge_views_projects_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function auge_views_projects_image_default_styles() {
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
