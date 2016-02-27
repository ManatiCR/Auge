<?php
/**
 * @file
 * auge_pages_projects.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function auge_pages_projects_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_projects';
  $strongarm->value = 'edit-i18n';
  $export['additional_settings__active_tab_projects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_rebuild_projects';
  $strongarm->value = 1;
  $export['l10n_update_rebuild_projects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_projects';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_projects'] = $strongarm;

  return $export;
}
