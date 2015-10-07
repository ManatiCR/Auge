<?php
/**
 * @file
 * auge_pages_projects.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function auge_pages_projects_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'projects';
  $page->task = 'page';
  $page->admin_title = 'Projects';
  $page->admin_description = '';
  $page->path = 'projects';
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
  $handler->name = 'page_projects__panel_context_a2ec582f-3464-4ddd-bb19-d06b4e734fae';
  $handler->task = 'page';
  $handler->subtask = 'projects';
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
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a13628f3-32b1-4ae4-8f0a-8075bcfef097';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2ed97582-2404-4aef-ba09-e4be475310e4';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Projects',
      'body' => '<p>This are some of the projects that have grown with&nbsp;</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2ed97582-2404-4aef-ba09-e4be475310e4';
    $display->content['new-2ed97582-2404-4aef-ba09-e4be475310e4'] = $pane;
    $display->panels['center'][0] = 'new-2ed97582-2404-4aef-ba09-e4be475310e4';
    $pane = new stdClass();
    $pane->pid = 'new-24784c6d-d8f4-4f82-87cb-5a3aa991a1fe';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Projects made:</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '24784c6d-d8f4-4f82-87cb-5a3aa991a1fe';
    $display->content['new-24784c6d-d8f4-4f82-87cb-5a3aa991a1fe'] = $pane;
    $display->panels['center'][1] = 'new-24784c6d-d8f4-4f82-87cb-5a3aa991a1fe';
    $pane = new stdClass();
    $pane->pid = 'new-42d2564e-0522-4175-9359-5fd62c1ab326';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '42d2564e-0522-4175-9359-5fd62c1ab326';
    $display->content['new-42d2564e-0522-4175-9359-5fd62c1ab326'] = $pane;
    $display->panels['center'][2] = 'new-42d2564e-0522-4175-9359-5fd62c1ab326';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-42d2564e-0522-4175-9359-5fd62c1ab326';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['projects'] = $page;

  return $pages;

}
