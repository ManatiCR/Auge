<?php
/**
 * @file
 * auge_who_are_multilingual.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function auge_who_are_multilingual_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'who_we_are';
  $page->task = 'page';
  $page->admin_title = 'Who we are';
  $page->admin_description = '';
  $page->path = 'whoweare';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Who we are',
    'name' => 'main-menu',
    'weight' => '7',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_who_we_are__panel_context_9cc3327d-9ec8-4d79-82dc-0fccc13a8c01';
  $handler->task = 'page';
  $handler->subtask = 'who_we_are';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ab227898-1bfe-4566-83e8-43052f501418';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-782f78c5-9ac4-4c40-bfa0-5fcb1d91f8b6';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'block-6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '%title',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '782f78c5-9ac4-4c40-bfa0-5fcb1d91f8b6';
    $display->content['new-782f78c5-9ac4-4c40-bfa0-5fcb1d91f8b6'] = $pane;
    $display->panels['middle'][0] = 'new-782f78c5-9ac4-4c40-bfa0-5fcb1d91f8b6';
    $pane = new stdClass();
    $pane->pid = 'new-207ee171-8db2-42c5-b3df-8fedf706cd52';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'personnel_view-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '207ee171-8db2-42c5-b3df-8fedf706cd52';
    $display->content['new-207ee171-8db2-42c5-b3df-8fedf706cd52'] = $pane;
    $display->panels['middle'][1] = 'new-207ee171-8db2-42c5-b3df-8fedf706cd52';
    $pane = new stdClass();
    $pane->pid = 'new-0d20cb70-ffc9-4c42-889f-baeea03b5a97';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'personnel_view-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0d20cb70-ffc9-4c42-889f-baeea03b5a97';
    $display->content['new-0d20cb70-ffc9-4c42-889f-baeea03b5a97'] = $pane;
    $display->panels['middle'][2] = 'new-0d20cb70-ffc9-4c42-889f-baeea03b5a97';
    $pane = new stdClass();
    $pane->pid = 'new-3c0be0b8-5e3b-4f44-896c-9153ffef4910';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'personnel_view-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3c0be0b8-5e3b-4f44-896c-9153ffef4910';
    $display->content['new-3c0be0b8-5e3b-4f44-896c-9153ffef4910'] = $pane;
    $display->panels['middle'][3] = 'new-3c0be0b8-5e3b-4f44-896c-9153ffef4910';
    $pane = new stdClass();
    $pane->pid = 'new-283ce5d6-9bcd-41b8-8493-41b4b5c9aec6';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'personnel_view-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '283ce5d6-9bcd-41b8-8493-41b4b5c9aec6';
    $display->content['new-283ce5d6-9bcd-41b8-8493-41b4b5c9aec6'] = $pane;
    $display->panels['middle'][4] = 'new-283ce5d6-9bcd-41b8-8493-41b4b5c9aec6';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['who_we_are'] = $page;

  return $pages;

}
