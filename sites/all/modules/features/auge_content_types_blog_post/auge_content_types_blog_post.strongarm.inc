<?php
/**
 * @file
 * auge_content_types_blog_post.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function auge_content_types_blog_post_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_blog_post_date';
  $strongarm->value = 'F j, Y';
  $export['date_format_blog_post_date'] = $strongarm;

  return $export;
}
