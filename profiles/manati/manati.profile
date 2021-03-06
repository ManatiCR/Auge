<?php

/**
 * @file
 * Enables modules and site configuration for a manati site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 */
function manati_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = 'My New Awesome Site';
  $form['site_information']['site_mail']['#default_value'] = 'ops@estudiomanati.com';
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['admin_account']['account']['mail']['#default_value'] = 'ops@estudiomanati.com';
  $form['server_settings']['site_default_country']['#default_value'] = 'CR';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'America/Costa_Rica';
}

/**
 * Implements hook_install_tasks().
 */
function manati_install_tasks($install_state) {

  $tasks = array(
    'manati_configure' => array(),
  );
  return $tasks;
}

/**
 * Set up base config.
 */
function manati_configure() {
}
