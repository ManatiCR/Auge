<?php
/**
 * @file
 * auge_views_personnel.features.inc
 */

/**
 * Implements hook_views_api().
 */
function auge_views_personnel_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function auge_views_personnel_image_default_styles() {
  $styles = array();

  // Exported image style: people_picture.
  $styles['people_picture'] = array(
    'label' => 'Personnel photo',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 142,
          'height' => 142,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
