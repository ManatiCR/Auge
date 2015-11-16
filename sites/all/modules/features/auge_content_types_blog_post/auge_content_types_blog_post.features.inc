<?php
/**
 * @file
 * auge_content_types_blog_post.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function auge_content_types_blog_post_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_fe_date_custom_date_formats().
 */
function auge_content_types_blog_post_fe_date_custom_date_formats() {
  $custom_date_formats = array();
  $custom_date_formats['F j, Y'] = 'F j, Y';
  return $custom_date_formats;
}

/**
 * Implements hook_date_format_types().
 */
function auge_content_types_blog_post_date_format_types() {
  $format_types = array();
  // Exported date format type: blog_post_date
  $format_types['blog_post_date'] = 'Blog post date';
  return $format_types;
}

/**
 * Implements hook_fe_date_locale_date_format().
 */
function auge_content_types_blog_post_fe_date_locale_date_format() {
  $locale_date_formats = array();

  // Exported format: blog_post_date::en
  $locale_date_formats['blog_post_date::en'] = array(
    'type' => 'blog_post_date',
    'format' => 'F j, Y',
    'locales' => array(
      0 => 'en',
    ),
  );
  // Exported format: blog_post_date::es
  $locale_date_formats['blog_post_date::es'] = array(
    'type' => 'blog_post_date',
    'format' => 'F j, Y',
    'locales' => array(
      0 => 'es',
    ),
  );
  return $locale_date_formats;
}

/**
 * Implements hook_node_info().
 */
function auge_content_types_blog_post_node_info() {
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
