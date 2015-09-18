<?php
/**
 * @file
 * auge_ftr_blog.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function auge_ftr_blog_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'blog';
  $page->task = 'page';
  $page->admin_title = 'Blog';
  $page->admin_description = '';
  $page->path = 'blog';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Blog',
    'name' => 'main-menu',
    'weight' => '9',
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
  $handler->name = 'page_blog__panel_context_5100630d-b058-4248-8c15-d97e4692191a';
  $handler->task = 'page';
  $handler->subtask = 'blog';
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
    'style' => 'default',
  );
  $display->cache = array();
  $display->title = 'Blog';
  $display->uuid = '59888120-5572-478f-8b72-88a053ced00b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-791cef8a-2496-4c6e-b693-cf0856bf237c';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_list-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '791cef8a-2496-4c6e-b693-cf0856bf237c';
    $display->content['new-791cef8a-2496-4c6e-b693-cf0856bf237c'] = $pane;
    $display->panels['left'][0] = 'new-791cef8a-2496-4c6e-b693-cf0856bf237c';
    $pane = new stdClass();
    $pane->pid = 'new-4554f5b6-e0f4-4d1c-83d6-c5b4a03bbcd7';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4554f5b6-e0f4-4d1c-83d6-c5b4a03bbcd7';
    $display->content['new-4554f5b6-e0f4-4d1c-83d6-c5b4a03bbcd7'] = $pane;
    $display->panels['right'][0] = 'new-4554f5b6-e0f4-4d1c-83d6-c5b4a03bbcd7';
    $pane = new stdClass();
    $pane->pid = 'new-dbf8f73a-1550-440e-9e56-0719ad6330ba';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'proximas_actividades-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dbf8f73a-1550-440e-9e56-0719ad6330ba';
    $display->content['new-dbf8f73a-1550-440e-9e56-0719ad6330ba'] = $pane;
    $display->panels['right'][1] = 'new-dbf8f73a-1550-440e-9e56-0719ad6330ba';
    $pane = new stdClass();
    $pane->pid = 'new-361bfc15-c3ce-48f5-9316-0309361851dc';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'involucrese_view-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '361bfc15-c3ce-48f5-9316-0309361851dc';
    $display->content['new-361bfc15-c3ce-48f5-9316-0309361851dc'] = $pane;
    $display->panels['right'][2] = 'new-361bfc15-c3ce-48f5-9316-0309361851dc';
    $pane = new stdClass();
    $pane->pid = 'new-afa2764b-4eee-4650-9a1f-596f5a95b06d';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Blog Title',
      'title' => '',
      'body' => '<h1>Blog</h1>
<p>Información útil y práctica sobre lo que hacemos, aprendemos y logramos</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'afa2764b-4eee-4650-9a1f-596f5a95b06d';
    $display->content['new-afa2764b-4eee-4650-9a1f-596f5a95b06d'] = $pane;
    $display->panels['top'][0] = 'new-afa2764b-4eee-4650-9a1f-596f5a95b06d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['blog'] = $page;

  return $pages;

}
