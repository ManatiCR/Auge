<?php
/**
 * @file
 * auge_ftr_blocks.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function auge_ftr_blocks_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'contacto';
  $page->task = 'page';
  $page->admin_title = 'Contact';
  $page->admin_description = '';
  $page->path = 'contact-page';
  $page->access = array(
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
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Contact',
    'name' => 'main-menu',
    'weight' => '8',
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
  $handler->name = 'page_contacto__panel_context_6244bc1f-965b-4cb4-a262-2b265117c1d4';
  $handler->task = 'page';
  $handler->subtask = 'contacto';
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
    'access' => array(
      'plugins' => array(),
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
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '745e3e50-b53d-4cab-9c3e-da6cd75a61d9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3caaf1ab-ce13-44b6-93b9-d97fdeb236d4';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3caaf1ab-ce13-44b6-93b9-d97fdeb236d4';
    $display->content['new-3caaf1ab-ce13-44b6-93b9-d97fdeb236d4'] = $pane;
    $display->panels['left'][0] = 'new-3caaf1ab-ce13-44b6-93b9-d97fdeb236d4';
    $pane = new stdClass();
    $pane->pid = 'new-103084ea-6ad0-45fa-9336-9c037d5a378c';
    $pane->panel = 'right';
    $pane->type = 'contact';
    $pane->subtype = 'contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '103084ea-6ad0-45fa-9336-9c037d5a378c';
    $display->content['new-103084ea-6ad0-45fa-9336-9c037d5a378c'] = $pane;
    $display->panels['right'][0] = 'new-103084ea-6ad0-45fa-9336-9c037d5a378c';
    $pane = new stdClass();
    $pane->pid = 'new-a54eac87-92ff-4601-bdcf-dcc44b839161';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<iframe src="https://www.google.com/maps/embed?pb=!1m14!1m12!1m3!1d868.2108627400402!2d-84.05403399934785!3d9.934084786659676!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!5e0!3m2!1sen!2scr!4v1442440079667" width="800" height="400" frameborder="0" style="border:0" allowfullscreen></iframe>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a54eac87-92ff-4601-bdcf-dcc44b839161';
    $display->content['new-a54eac87-92ff-4601-bdcf-dcc44b839161'] = $pane;
    $display->panels['top'][0] = 'new-a54eac87-92ff-4601-bdcf-dcc44b839161';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contacto'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'pagina_contacto';
  $page->task = 'page';
  $page->admin_title = 'Contacto';
  $page->admin_description = '';
  $page->path = 'contacto';
  $page->access = array(
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
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Contacto',
    'name' => 'main-menu',
    'weight' => '8',
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
  $handler->name = 'page_pagina_contacto__panel_context_1f053fd6-7aab-4b39-91fa-622be35a3316';
  $handler->task = 'page';
  $handler->subtask = 'pagina_contacto';
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
    'access' => array(
      'plugins' => array(),
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
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '745e3e50-b53d-4cab-9c3e-da6cd75a61d9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6baa137f-c564-46c5-8787-2cce01c21868';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'block-4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Bloque de Contacto.',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6baa137f-c564-46c5-8787-2cce01c21868';
    $display->content['new-6baa137f-c564-46c5-8787-2cce01c21868'] = $pane;
    $display->panels['left'][0] = 'new-6baa137f-c564-46c5-8787-2cce01c21868';
    $pane = new stdClass();
    $pane->pid = 'new-103084ea-6ad0-45fa-9336-9c037d5a378c';
    $pane->panel = 'right';
    $pane->type = 'contact';
    $pane->subtype = 'contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '103084ea-6ad0-45fa-9336-9c037d5a378c';
    $display->content['new-103084ea-6ad0-45fa-9336-9c037d5a378c'] = $pane;
    $display->panels['right'][0] = 'new-103084ea-6ad0-45fa-9336-9c037d5a378c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['pagina_contacto'] = $page;

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
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['who_we_are'] = $page;

  return $pages;

}
