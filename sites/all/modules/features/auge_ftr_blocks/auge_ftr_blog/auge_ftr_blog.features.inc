<?php
/**
 * @file
 * auge_ftr_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function auge_ftr_blog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function auge_ftr_blog_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function auge_ftr_blog_image_default_styles() {
  $styles = array();

  // Exported image style: blog_view_image.
  $styles['blog_view_image'] = array(
    'label' => 'Blog view image',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 432,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function auge_ftr_blog_node_info() {
  $items = array(
    'blog_post' => array(
      'name' => t('Blog Post'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Blog Post'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
