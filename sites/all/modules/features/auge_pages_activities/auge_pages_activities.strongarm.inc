<?php
/**
 * @file
 * auge_pages_activities.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function auge_pages_activities_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_activities_sidebar';
  $strongarm->value = 'd M';
  $export['date_format_activities_sidebar'] = $strongarm;

  return $export;
}
