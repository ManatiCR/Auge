<?php
/**
 * @file
 * auge_quicktabs.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function auge_quicktabs_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'personel_tabs_spanish';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Personel Tabs Spanish';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'personnel_view',
      'display' => 'panel_pane_5',
      'args' => '',
      'title' => 'Team',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'personnel_view',
      'display' => 'panel_pane_6',
      'args' => '',
      'title' => 'Board of advisors',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'personnel_view',
      'display' => 'panel_pane_7',
      'args' => '',
      'title' => 'Mentors',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'personnel_view',
      'display' => 'panel_pane_8',
      'args' => '',
      'title' => 'Advisors',
      'weight' => '-97',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Advisors');
  t('Board of advisors');
  t('Mentors');
  t('Personel Tabs Spanish');
  t('Team');

  $export['personel_tabs_spanish'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'personnel_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Personnel tabs';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'personnel_view',
      'display' => 'panel_pane_1',
      'args' => '',
      'title' => 'Team',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'personnel_view',
      'display' => 'panel_pane_2',
      'args' => '',
      'title' => 'Board of advisors',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'personnel_view',
      'display' => 'panel_pane_3',
      'args' => '',
      'title' => 'Mentors',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'personnel_view',
      'display' => 'panel_pane_4',
      'args' => '',
      'title' => 'Advisors',
      'weight' => '-97',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Advisors');
  t('Board of advisors');
  t('Mentors');
  t('Personnel tabs');
  t('Team');

  $export['personnel_tabs'] = $quicktabs;

  return $export;
}
