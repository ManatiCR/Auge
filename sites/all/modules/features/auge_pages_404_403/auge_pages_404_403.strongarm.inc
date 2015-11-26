<?php
/**
 * @file
 * auge_pages_404_403.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function auge_pages_404_403_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'r4032login_access_denied_message';
  $strongarm->value = '';
  $export['r4032login_access_denied_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'r4032login_access_denied_message_type';
  $strongarm->value = 'error';
  $export['r4032login_access_denied_message_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'r4032login_default_redirect_code';
  $strongarm->value = '302';
  $export['r4032login_default_redirect_code'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'r4032login_display_denied_message';
  $strongarm->value = 0;
  $export['r4032login_display_denied_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'r4032login_match_noredirect_pages';
  $strongarm->value = '';
  $export['r4032login_match_noredirect_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'r4032login_redirect_authenticated_users_to';
  $strongarm->value = '<front>';
  $export['r4032login_redirect_authenticated_users_to'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'r4032login_user_login_path';
  $strongarm->value = 'user/';
  $export['r4032login_user_login_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_403';
  $strongarm->value = '';
  $export['site_403'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_404';
  $strongarm->value = 'noencontrada';
  $export['site_404'] = $strongarm;

  return $export;
}
