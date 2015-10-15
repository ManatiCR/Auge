<?php
/**
 * @file
 * auge_pages_blog.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function auge_pages_blog_default_page_manager_pages() {
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
    'title' => 'Blog',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'en' => 'en',
              'default' => 0,
              'es' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
    ),
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
    $pane->pid = 'new-d91006e7-f770-4c9c-abb1-a83edd3a5511';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'categories-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd91006e7-f770-4c9c-abb1-a83edd3a5511';
    $display->content['new-d91006e7-f770-4c9c-abb1-a83edd3a5511'] = $pane;
    $display->panels['right'][0] = 'new-d91006e7-f770-4c9c-abb1-a83edd3a5511';
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
    $pane->pid = 'new-a7071731-9db5-468f-9bf0-b0ac1ce4a107';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-get-involved';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a7071731-9db5-468f-9bf0-b0ac1ce4a107';
    $display->content['new-a7071731-9db5-468f-9bf0-b0ac1ce4a107'] = $pane;
    $display->panels['right'][2] = 'new-a7071731-9db5-468f-9bf0-b0ac1ce4a107';
    $pane = new stdClass();
    $pane->pid = 'new-afa2764b-4eee-4650-9a1f-596f5a95b06d';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Blog Title',
      'title' => 'Blog',
      'body' => '<h1>Useful information about what we do, learn and achieve.&nbsp;</h1>',
      'format' => 'manati_texto_formato',
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
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_blog__panel_context_5d4de22f-0768-4c70-9f59-0af4ccac6aa4';
  $handler->task = 'page';
  $handler->subtask = 'blog';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Blog en español',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'es' => 'es',
              'default' => 0,
              'en' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
    $pane->pid = 'new-961c2c71-c016-4d04-9b0a-1925cea9aabb';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_list-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '961c2c71-c016-4d04-9b0a-1925cea9aabb';
    $display->content['new-961c2c71-c016-4d04-9b0a-1925cea9aabb'] = $pane;
    $display->panels['left'][0] = 'new-961c2c71-c016-4d04-9b0a-1925cea9aabb';
    $pane = new stdClass();
    $pane->pid = 'new-6c699fe7-e321-435f-9884-919d1b823e31';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'categories-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6c699fe7-e321-435f-9884-919d1b823e31';
    $display->content['new-6c699fe7-e321-435f-9884-919d1b823e31'] = $pane;
    $display->panels['right'][0] = 'new-6c699fe7-e321-435f-9884-919d1b823e31';
    $pane = new stdClass();
    $pane->pid = 'new-eec698e0-8308-4e6f-bbf7-e8554a5083ed';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'proximas_actividades-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'eec698e0-8308-4e6f-bbf7-e8554a5083ed';
    $display->content['new-eec698e0-8308-4e6f-bbf7-e8554a5083ed'] = $pane;
    $display->panels['right'][1] = 'new-eec698e0-8308-4e6f-bbf7-e8554a5083ed';
    $pane = new stdClass();
    $pane->pid = 'new-cdf6f14b-d4c8-4dd7-be65-7c6786d38c2f';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-get-involved';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'cdf6f14b-d4c8-4dd7-be65-7c6786d38c2f';
    $display->content['new-cdf6f14b-d4c8-4dd7-be65-7c6786d38c2f'] = $pane;
    $display->panels['right'][2] = 'new-cdf6f14b-d4c8-4dd7-be65-7c6786d38c2f';
    $pane = new stdClass();
    $pane->pid = 'new-afa2764b-4eee-4650-9a1f-596f5a95b06d';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Blog Title',
      'title' => 'Blog',
      'body' => '<h1>Useful information about what we do, learn and achieve.&nbsp;</h1>',
      'format' => 'manati_texto_formato',
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