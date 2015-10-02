<?php
/**
 * @file
 * auge_pages_activities.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function auge_pages_activities_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'activities';
  $page->task = 'page';
  $page->admin_title = 'Activities';
  $page->admin_description = '';
  $page->path = 'activities';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_activities__panel_context_0b3a1477-910a-4c14-b6ff-570875c7d225';
  $handler->task = 'page';
  $handler->subtask = 'activities';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Activities',
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
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '702e08d7-5a4f-4d75-bf4f-7a00fae9994c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-660ad346-3ea5-4eaa-97eb-bcd77b6e0b9c';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'proximas_actividades-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '660ad346-3ea5-4eaa-97eb-bcd77b6e0b9c';
    $display->content['new-660ad346-3ea5-4eaa-97eb-bcd77b6e0b9c'] = $pane;
    $display->panels['left'][0] = 'new-660ad346-3ea5-4eaa-97eb-bcd77b6e0b9c';
    $pane = new stdClass();
    $pane->pid = 'new-ee3a4cd8-9a7b-4878-ab06-7e260124409a';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_list-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ee3a4cd8-9a7b-4878-ab06-7e260124409a';
    $display->content['new-ee3a4cd8-9a7b-4878-ab06-7e260124409a'] = $pane;
    $display->panels['right'][0] = 'new-ee3a4cd8-9a7b-4878-ab06-7e260124409a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['activities'] = $page;

  return $pages;

}
