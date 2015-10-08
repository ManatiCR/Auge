<?php
/**
 * @file
 * auge_pages_get_involved.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function auge_pages_get_involved_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'entrepreneurship';
  $page->task = 'page';
  $page->admin_title = 'Entrepreneur';
  $page->admin_description = '';
  $page->path = 'entrepreneur';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Learn',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Get involved',
      'name' => 'main-menu',
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
  $handler->name = 'page_entrepreneurship__panel_context_d01f354d-b632-4848-8cf6-979c74624975';
  $handler->task = 'page';
  $handler->subtask = 'entrepreneurship';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Entrepreneur',
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
      'logic' => 'and',
    ),
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
  $display->title = 'Entrepreneur';
  $display->uuid = '4dc07dfb-1b81-4bc1-8f75-f9b9f9196f66';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Learn title',
      'title' => '',
      'body' => '<p>This should be in english.</p><p>You&nbsp;have the idea, and we help you developed it!</p>',
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
    $pane->uuid = 'c373420a-adfe-4144-8a5b-661dc64d46b5';
    $display->content['new-c373420a-adfe-4144-8a5b-661dc64d46b5'] = $pane;
    $display->panels['middle'][0] = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane = new stdClass();
    $pane->pid = 'new-67283836-c6df-4e69-9ec6-48f6b2dc0582';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'proximas_actividades-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '67283836-c6df-4e69-9ec6-48f6b2dc0582';
    $display->content['new-67283836-c6df-4e69-9ec6-48f6b2dc0582'] = $pane;
    $display->panels['middle'][1] = 'new-67283836-c6df-4e69-9ec6-48f6b2dc0582';
    $pane = new stdClass();
    $pane->pid = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Plura mihi bona sunt, inclinet, amari petere vellent. Curabitur blandit tempus ardua ridiculus sed magna. Paullum deliquit, ponderibus modulisque suis ratio utitur. Curabitur blandit tempus ardua ridiculus sed magna. Cum ceteris in veneratione tui montes, nascetur mus. A communi observantia non est recedendum.</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6e211677-d73b-434c-a067-83d6f9fe5522';
    $display->content['new-6e211677-d73b-434c-a067-83d6f9fe5522'] = $pane;
    $display->panels['middle'][2] = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane = new stdClass();
    $pane->pid = 'new-3ef6b268-7bd9-4d0c-8d7a-5b426fefec22';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Etiam habebis sem dicantur magna mollis euismod. Non equidem invideo, miror magis posuere velit aliquet. Non equidem invideo, miror magis posuere velit aliquet. Quam diu etiam furor iste tuus nos eludet? Magna pars studiorum, prodita quaerimus.</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3ef6b268-7bd9-4d0c-8d7a-5b426fefec22';
    $display->content['new-3ef6b268-7bd9-4d0c-8d7a-5b426fefec22'] = $pane;
    $display->panels['middle'][3] = 'new-3ef6b268-7bd9-4d0c-8d7a-5b426fefec22';
    $pane = new stdClass();
    $pane->pid = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href=#>Register my idea</a>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'a2719e64-c746-4d77-9532-7b332a01cc7e';
    $display->content['new-a2719e64-c746-4d77-9532-7b332a01cc7e'] = $pane;
    $display->panels['middle'][4] = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
    $pane = new stdClass();
    $pane->pid = 'new-950eed80-b218-4496-98e1-948d3a95b13f';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'stages-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '950eed80-b218-4496-98e1-948d3a95b13f';
    $display->content['new-950eed80-b218-4496-98e1-948d3a95b13f'] = $pane;
    $display->panels['middle'][5] = 'new-950eed80-b218-4496-98e1-948d3a95b13f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_entrepreneurship__panel_context_a50e56d1-cf87-4baa-b37a-58dd82049d6c';
  $handler->task = 'page';
  $handler->subtask = 'entrepreneurship';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Emprender',
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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Emprender';
  $display->uuid = '4dc07dfb-1b81-4bc1-8f75-f9b9f9196f66';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Learn title',
      'title' => '',
      'body' => '<p>Esto debe ir en Español.</p><p>You&nbsp;have the idea, and we help you developed it!</p>',
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
    $pane->uuid = 'c373420a-adfe-4144-8a5b-661dc64d46b5';
    $display->content['new-c373420a-adfe-4144-8a5b-661dc64d46b5'] = $pane;
    $display->panels['middle'][0] = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane = new stdClass();
    $pane->pid = 'new-5e76aa37-01fd-400e-bd36-b7a037a524cf';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'proximas_actividades-panel_pane_10';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5e76aa37-01fd-400e-bd36-b7a037a524cf';
    $display->content['new-5e76aa37-01fd-400e-bd36-b7a037a524cf'] = $pane;
    $display->panels['middle'][1] = 'new-5e76aa37-01fd-400e-bd36-b7a037a524cf';
    $pane = new stdClass();
    $pane->pid = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Plura mihi bona sunt, inclinet, amari petere vellent. Curabitur blandit tempus ardua ridiculus sed magna. Paullum deliquit, ponderibus modulisque suis ratio utitur. Curabitur blandit tempus ardua ridiculus sed magna. Cum ceteris in veneratione tui montes, nascetur mus. A communi observantia non est recedendum.</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6e211677-d73b-434c-a067-83d6f9fe5522';
    $display->content['new-6e211677-d73b-434c-a067-83d6f9fe5522'] = $pane;
    $display->panels['middle'][2] = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane = new stdClass();
    $pane->pid = 'new-3ef6b268-7bd9-4d0c-8d7a-5b426fefec22';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Etiam habebis sem dicantur magna mollis euismod. Non equidem invideo, miror magis posuere velit aliquet. Non equidem invideo, miror magis posuere velit aliquet. Quam diu etiam furor iste tuus nos eludet? Magna pars studiorum, prodita quaerimus.</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3ef6b268-7bd9-4d0c-8d7a-5b426fefec22';
    $display->content['new-3ef6b268-7bd9-4d0c-8d7a-5b426fefec22'] = $pane;
    $display->panels['middle'][3] = 'new-3ef6b268-7bd9-4d0c-8d7a-5b426fefec22';
    $pane = new stdClass();
    $pane->pid = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href=#>Register my idea</a>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'a2719e64-c746-4d77-9532-7b332a01cc7e';
    $display->content['new-a2719e64-c746-4d77-9532-7b332a01cc7e'] = $pane;
    $display->panels['middle'][4] = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
    $pane = new stdClass();
    $pane->pid = 'new-950eed80-b218-4496-98e1-948d3a95b13f';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'stages-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '950eed80-b218-4496-98e1-948d3a95b13f';
    $display->content['new-950eed80-b218-4496-98e1-948d3a95b13f'] = $pane;
    $display->panels['middle'][5] = 'new-950eed80-b218-4496-98e1-948d3a95b13f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['entrepreneurship'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'invest';
  $page->task = 'page';
  $page->admin_title = 'Invest';
  $page->admin_description = '';
  $page->path = 'invest';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Learn',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Get involved',
      'name' => 'main-menu',
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
  $handler->name = 'page_invest__panel_context_0aff9f73-4d22-4e89-8c41-62311d42ddbf';
  $handler->task = 'page';
  $handler->subtask = 'invest';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Invest',
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
      'logic' => 'and',
    ),
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
  $display->title = 'Invest';
  $display->uuid = '4dc07dfb-1b81-4bc1-8f75-f9b9f9196f66';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Learn title',
      'title' => '',
      'body' => '<p>This should be in english.</p><p>You&nbsp;have the idea, and we help you developed it!</p>',
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
    $pane->uuid = 'c373420a-adfe-4144-8a5b-661dc64d46b5';
    $display->content['new-c373420a-adfe-4144-8a5b-661dc64d46b5'] = $pane;
    $display->panels['middle'][0] = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane = new stdClass();
    $pane->pid = 'new-dac50e2c-e561-42dc-9a80-63f07b7b15be';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'proximas_actividades-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dac50e2c-e561-42dc-9a80-63f07b7b15be';
    $display->content['new-dac50e2c-e561-42dc-9a80-63f07b7b15be'] = $pane;
    $display->panels['middle'][1] = 'new-dac50e2c-e561-42dc-9a80-63f07b7b15be';
    $pane = new stdClass();
    $pane->pid = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Plura mihi bona sunt, inclinet, amari petere vellent. Curabitur blandit tempus ardua ridiculus sed magna. Paullum deliquit, ponderibus modulisque suis ratio utitur. Curabitur blandit tempus ardua ridiculus sed magna. Cum ceteris in veneratione tui montes, nascetur mus. A communi observantia non est recedendum.</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6e211677-d73b-434c-a067-83d6f9fe5522';
    $display->content['new-6e211677-d73b-434c-a067-83d6f9fe5522'] = $pane;
    $display->panels['middle'][2] = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane = new stdClass();
    $pane->pid = 'new-3ef6b268-7bd9-4d0c-8d7a-5b426fefec22';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Etiam habebis sem dicantur magna mollis euismod. Non equidem invideo, miror magis posuere velit aliquet. Non equidem invideo, miror magis posuere velit aliquet. Quam diu etiam furor iste tuus nos eludet? Magna pars studiorum, prodita quaerimus.</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3ef6b268-7bd9-4d0c-8d7a-5b426fefec22';
    $display->content['new-3ef6b268-7bd9-4d0c-8d7a-5b426fefec22'] = $pane;
    $display->panels['middle'][3] = 'new-3ef6b268-7bd9-4d0c-8d7a-5b426fefec22';
    $pane = new stdClass();
    $pane->pid = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href=#>Register my idea</a>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'a2719e64-c746-4d77-9532-7b332a01cc7e';
    $display->content['new-a2719e64-c746-4d77-9532-7b332a01cc7e'] = $pane;
    $display->panels['middle'][4] = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
    $pane = new stdClass();
    $pane->pid = 'new-327fd9ab-06ac-4922-b166-ab4cf9e51a22';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'stages-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '327fd9ab-06ac-4922-b166-ab4cf9e51a22';
    $display->content['new-327fd9ab-06ac-4922-b166-ab4cf9e51a22'] = $pane;
    $display->panels['middle'][5] = 'new-327fd9ab-06ac-4922-b166-ab4cf9e51a22';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_invest__panel_context_75e1bcef-4fe3-4916-86e6-caf0d247f481';
  $handler->task = 'page';
  $handler->subtask = 'invest';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Invertir',
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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Invertir';
  $display->uuid = '4dc07dfb-1b81-4bc1-8f75-f9b9f9196f66';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Learn title',
      'title' => '',
      'body' => '<p>Esto debe ir en Español.</p><p>You&nbsp;have the idea, and we help you developed it!</p>',
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
    $pane->uuid = 'c373420a-adfe-4144-8a5b-661dc64d46b5';
    $display->content['new-c373420a-adfe-4144-8a5b-661dc64d46b5'] = $pane;
    $display->panels['middle'][0] = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane = new stdClass();
    $pane->pid = 'new-dac50e2c-e561-42dc-9a80-63f07b7b15be';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'proximas_actividades-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dac50e2c-e561-42dc-9a80-63f07b7b15be';
    $display->content['new-dac50e2c-e561-42dc-9a80-63f07b7b15be'] = $pane;
    $display->panels['middle'][1] = 'new-dac50e2c-e561-42dc-9a80-63f07b7b15be';
    $pane = new stdClass();
    $pane->pid = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Plura mihi bona sunt, inclinet, amari petere vellent. Curabitur blandit tempus ardua ridiculus sed magna. Paullum deliquit, ponderibus modulisque suis ratio utitur. Curabitur blandit tempus ardua ridiculus sed magna. Cum ceteris in veneratione tui montes, nascetur mus. A communi observantia non est recedendum.</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6e211677-d73b-434c-a067-83d6f9fe5522';
    $display->content['new-6e211677-d73b-434c-a067-83d6f9fe5522'] = $pane;
    $display->panels['middle'][2] = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane = new stdClass();
    $pane->pid = 'new-3ef6b268-7bd9-4d0c-8d7a-5b426fefec22';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Etiam habebis sem dicantur magna mollis euismod. Non equidem invideo, miror magis posuere velit aliquet. Non equidem invideo, miror magis posuere velit aliquet. Quam diu etiam furor iste tuus nos eludet? Magna pars studiorum, prodita quaerimus.</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3ef6b268-7bd9-4d0c-8d7a-5b426fefec22';
    $display->content['new-3ef6b268-7bd9-4d0c-8d7a-5b426fefec22'] = $pane;
    $display->panels['middle'][3] = 'new-3ef6b268-7bd9-4d0c-8d7a-5b426fefec22';
    $pane = new stdClass();
    $pane->pid = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href=#>Register my idea</a>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'a2719e64-c746-4d77-9532-7b332a01cc7e';
    $display->content['new-a2719e64-c746-4d77-9532-7b332a01cc7e'] = $pane;
    $display->panels['middle'][4] = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
    $pane = new stdClass();
    $pane->pid = 'new-327fd9ab-06ac-4922-b166-ab4cf9e51a22';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'stages-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '327fd9ab-06ac-4922-b166-ab4cf9e51a22';
    $display->content['new-327fd9ab-06ac-4922-b166-ab4cf9e51a22'] = $pane;
    $display->panels['middle'][5] = 'new-327fd9ab-06ac-4922-b166-ab4cf9e51a22';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['invest'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'learn';
  $page->task = 'page';
  $page->admin_title = 'Learn';
  $page->admin_description = '';
  $page->path = 'learn';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Learn',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Get involved',
      'name' => 'main-menu',
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
  $handler->name = 'page_learn__panel_context_fa3ce6f0-c310-440c-a704-7f0d8ab4cfc2';
  $handler->task = 'page';
  $handler->subtask = 'learn';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Learn',
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
      'logic' => 'and',
    ),
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
  $display->title = 'Learn';
  $display->uuid = '4dc07dfb-1b81-4bc1-8f75-f9b9f9196f66';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Learn title',
      'title' => '',
      'body' => '<p>This should be in English.</p><p>You&nbsp;have the idea, and we help you developed it!</p>',
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
    $pane->uuid = 'c373420a-adfe-4144-8a5b-661dc64d46b5';
    $display->content['new-c373420a-adfe-4144-8a5b-661dc64d46b5'] = $pane;
    $display->panels['middle'][0] = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane = new stdClass();
    $pane->pid = 'new-98f40f9a-8e8b-4b08-b65b-f8ad41f871ee';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'proximas_actividades-panel_pane_9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '98f40f9a-8e8b-4b08-b65b-f8ad41f871ee';
    $display->content['new-98f40f9a-8e8b-4b08-b65b-f8ad41f871ee'] = $pane;
    $display->panels['middle'][1] = 'new-98f40f9a-8e8b-4b08-b65b-f8ad41f871ee';
    $pane = new stdClass();
    $pane->pid = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Plura mihi bona sunt, inclinet, amari petere vellent. Curabitur blandit tempus ardua ridiculus sed magna. Paullum deliquit, ponderibus modulisque suis ratio utitur. Curabitur blandit tempus ardua ridiculus sed magna. Cum ceteris in veneratione tui montes, nascetur mus. A communi observantia non est recedendum.</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6e211677-d73b-434c-a067-83d6f9fe5522';
    $display->content['new-6e211677-d73b-434c-a067-83d6f9fe5522'] = $pane;
    $display->panels['middle'][2] = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane = new stdClass();
    $pane->pid = 'new-3ef6b268-7bd9-4d0c-8d7a-5b426fefec22';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Etiam habebis sem dicantur magna mollis euismod. Non equidem invideo, miror magis posuere velit aliquet. Non equidem invideo, miror magis posuere velit aliquet. Quam diu etiam furor iste tuus nos eludet? Magna pars studiorum, prodita quaerimus.</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3ef6b268-7bd9-4d0c-8d7a-5b426fefec22';
    $display->content['new-3ef6b268-7bd9-4d0c-8d7a-5b426fefec22'] = $pane;
    $display->panels['middle'][3] = 'new-3ef6b268-7bd9-4d0c-8d7a-5b426fefec22';
    $pane = new stdClass();
    $pane->pid = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href=#>Register my idea</a>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'a2719e64-c746-4d77-9532-7b332a01cc7e';
    $display->content['new-a2719e64-c746-4d77-9532-7b332a01cc7e'] = $pane;
    $display->panels['middle'][4] = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
    $pane = new stdClass();
    $pane->pid = 'new-3dd963fb-8e81-4b6f-ab80-318167d42ed7';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'stages-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '3dd963fb-8e81-4b6f-ab80-318167d42ed7';
    $display->content['new-3dd963fb-8e81-4b6f-ab80-318167d42ed7'] = $pane;
    $display->panels['middle'][5] = 'new-3dd963fb-8e81-4b6f-ab80-318167d42ed7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_learn__panel_context_10e407e5-ec3b-430e-b3d1-7208157434ff';
  $handler->task = 'page';
  $handler->subtask = 'learn';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Aprender',
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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Aprender';
  $display->uuid = '4dc07dfb-1b81-4bc1-8f75-f9b9f9196f66';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Learn title',
      'title' => '',
      'body' => '<p>Esto debe estar en español.</p><p>You&nbsp;have the idea, and we help you developed it!</p>',
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
    $pane->uuid = 'c373420a-adfe-4144-8a5b-661dc64d46b5';
    $display->content['new-c373420a-adfe-4144-8a5b-661dc64d46b5'] = $pane;
    $display->panels['middle'][0] = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane = new stdClass();
    $pane->pid = 'new-fdc4abd7-101e-4fce-b8ea-3571c64b9460';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'proximas_actividades-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fdc4abd7-101e-4fce-b8ea-3571c64b9460';
    $display->content['new-fdc4abd7-101e-4fce-b8ea-3571c64b9460'] = $pane;
    $display->panels['middle'][1] = 'new-fdc4abd7-101e-4fce-b8ea-3571c64b9460';
    $pane = new stdClass();
    $pane->pid = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Plura mihi bona sunt, inclinet, amari petere vellent. Curabitur blandit tempus ardua ridiculus sed magna. Paullum deliquit, ponderibus modulisque suis ratio utitur. Curabitur blandit tempus ardua ridiculus sed magna. Cum ceteris in veneratione tui montes, nascetur mus. A communi observantia non est recedendum.</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6e211677-d73b-434c-a067-83d6f9fe5522';
    $display->content['new-6e211677-d73b-434c-a067-83d6f9fe5522'] = $pane;
    $display->panels['middle'][2] = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane = new stdClass();
    $pane->pid = 'new-3ef6b268-7bd9-4d0c-8d7a-5b426fefec22';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Etiam habebis sem dicantur magna mollis euismod. Non equidem invideo, miror magis posuere velit aliquet. Non equidem invideo, miror magis posuere velit aliquet. Quam diu etiam furor iste tuus nos eludet? Magna pars studiorum, prodita quaerimus.</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3ef6b268-7bd9-4d0c-8d7a-5b426fefec22';
    $display->content['new-3ef6b268-7bd9-4d0c-8d7a-5b426fefec22'] = $pane;
    $display->panels['middle'][3] = 'new-3ef6b268-7bd9-4d0c-8d7a-5b426fefec22';
    $pane = new stdClass();
    $pane->pid = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href=#>Register my idea</a>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'a2719e64-c746-4d77-9532-7b332a01cc7e';
    $display->content['new-a2719e64-c746-4d77-9532-7b332a01cc7e'] = $pane;
    $display->panels['middle'][4] = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
    $pane = new stdClass();
    $pane->pid = 'new-3dd963fb-8e81-4b6f-ab80-318167d42ed7';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'stages-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '3dd963fb-8e81-4b6f-ab80-318167d42ed7';
    $display->content['new-3dd963fb-8e81-4b6f-ab80-318167d42ed7'] = $pane;
    $display->panels['middle'][5] = 'new-3dd963fb-8e81-4b6f-ab80-318167d42ed7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['learn'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'mentor';
  $page->task = 'page';
  $page->admin_title = 'Mentor';
  $page->admin_description = '';
  $page->path = 'mentor';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Learn',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Get involved',
      'name' => 'main-menu',
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
  $handler->name = 'page_mentor__panel_context_c4a93905-4e75-4d4e-b74d-b500ac683563';
  $handler->task = 'page';
  $handler->subtask = 'mentor';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Mentor',
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
      'logic' => 'and',
    ),
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
  $display->title = 'Mentor';
  $display->uuid = '4dc07dfb-1b81-4bc1-8f75-f9b9f9196f66';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Mentor title',
      'title' => '',
      'body' => '<p>This should be in English.</p><p>You&nbsp;have the idea, and we help you developed it!</p>',
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
    $pane->uuid = 'c373420a-adfe-4144-8a5b-661dc64d46b5';
    $display->content['new-c373420a-adfe-4144-8a5b-661dc64d46b5'] = $pane;
    $display->panels['middle'][0] = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane = new stdClass();
    $pane->pid = 'new-b72a93a6-20e4-4699-9521-4558a9764c6b';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'proximas_actividades-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b72a93a6-20e4-4699-9521-4558a9764c6b';
    $display->content['new-b72a93a6-20e4-4699-9521-4558a9764c6b'] = $pane;
    $display->panels['middle'][1] = 'new-b72a93a6-20e4-4699-9521-4558a9764c6b';
    $pane = new stdClass();
    $pane->pid = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Plura mihi bona sunt, inclinet, amari petere vellent. Curabitur blandit tempus ardua ridiculus sed magna. Paullum deliquit, ponderibus modulisque suis ratio utitur. Curabitur blandit tempus ardua ridiculus sed magna. Cum ceteris in veneratione tui montes, nascetur mus. A communi observantia non est recedendum.</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6e211677-d73b-434c-a067-83d6f9fe5522';
    $display->content['new-6e211677-d73b-434c-a067-83d6f9fe5522'] = $pane;
    $display->panels['middle'][2] = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane = new stdClass();
    $pane->pid = 'new-3ef6b268-7bd9-4d0c-8d7a-5b426fefec22';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Etiam habebis sem dicantur magna mollis euismod. Non equidem invideo, miror magis posuere velit aliquet. Non equidem invideo, miror magis posuere velit aliquet. Quam diu etiam furor iste tuus nos eludet? Magna pars studiorum, prodita quaerimus.</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3ef6b268-7bd9-4d0c-8d7a-5b426fefec22';
    $display->content['new-3ef6b268-7bd9-4d0c-8d7a-5b426fefec22'] = $pane;
    $display->panels['middle'][3] = 'new-3ef6b268-7bd9-4d0c-8d7a-5b426fefec22';
    $pane = new stdClass();
    $pane->pid = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href=#>Register my idea</a>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'a2719e64-c746-4d77-9532-7b332a01cc7e';
    $display->content['new-a2719e64-c746-4d77-9532-7b332a01cc7e'] = $pane;
    $display->panels['middle'][4] = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
    $pane = new stdClass();
    $pane->pid = 'new-2b43453f-86aa-4c62-b052-f970e6f7bb49';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'stages-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '2b43453f-86aa-4c62-b052-f970e6f7bb49';
    $display->content['new-2b43453f-86aa-4c62-b052-f970e6f7bb49'] = $pane;
    $display->panels['middle'][5] = 'new-2b43453f-86aa-4c62-b052-f970e6f7bb49';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_mentor__panel_context_302035a8-d7f4-48de-9964-59ff72977a5c';
  $handler->task = 'page';
  $handler->subtask = 'mentor';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Acompañar',
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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Acompañar';
  $display->uuid = '4dc07dfb-1b81-4bc1-8f75-f9b9f9196f66';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Mentor title',
      'title' => '',
      'body' => '<p>Este debe ir en Español.</p><p>You&nbsp;have the idea, and we help you developed it!</p>',
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
    $pane->uuid = 'c373420a-adfe-4144-8a5b-661dc64d46b5';
    $display->content['new-c373420a-adfe-4144-8a5b-661dc64d46b5'] = $pane;
    $display->panels['middle'][0] = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane = new stdClass();
    $pane->pid = 'new-60a7d04f-1f5c-4ce3-8a9f-612989156bbd';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'proximas_actividades-panel_pane_11';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '60a7d04f-1f5c-4ce3-8a9f-612989156bbd';
    $display->content['new-60a7d04f-1f5c-4ce3-8a9f-612989156bbd'] = $pane;
    $display->panels['middle'][1] = 'new-60a7d04f-1f5c-4ce3-8a9f-612989156bbd';
    $pane = new stdClass();
    $pane->pid = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Plura mihi bona sunt, inclinet, amari petere vellent. Curabitur blandit tempus ardua ridiculus sed magna. Paullum deliquit, ponderibus modulisque suis ratio utitur. Curabitur blandit tempus ardua ridiculus sed magna. Cum ceteris in veneratione tui montes, nascetur mus. A communi observantia non est recedendum.</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6e211677-d73b-434c-a067-83d6f9fe5522';
    $display->content['new-6e211677-d73b-434c-a067-83d6f9fe5522'] = $pane;
    $display->panels['middle'][2] = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane = new stdClass();
    $pane->pid = 'new-3ef6b268-7bd9-4d0c-8d7a-5b426fefec22';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Etiam habebis sem dicantur magna mollis euismod. Non equidem invideo, miror magis posuere velit aliquet. Non equidem invideo, miror magis posuere velit aliquet. Quam diu etiam furor iste tuus nos eludet? Magna pars studiorum, prodita quaerimus.</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3ef6b268-7bd9-4d0c-8d7a-5b426fefec22';
    $display->content['new-3ef6b268-7bd9-4d0c-8d7a-5b426fefec22'] = $pane;
    $display->panels['middle'][3] = 'new-3ef6b268-7bd9-4d0c-8d7a-5b426fefec22';
    $pane = new stdClass();
    $pane->pid = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href=#>Register my idea</a>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'a2719e64-c746-4d77-9532-7b332a01cc7e';
    $display->content['new-a2719e64-c746-4d77-9532-7b332a01cc7e'] = $pane;
    $display->panels['middle'][4] = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
    $pane = new stdClass();
    $pane->pid = 'new-2b43453f-86aa-4c62-b052-f970e6f7bb49';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'stages-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '2b43453f-86aa-4c62-b052-f970e6f7bb49';
    $display->content['new-2b43453f-86aa-4c62-b052-f970e6f7bb49'] = $pane;
    $display->panels['middle'][5] = 'new-2b43453f-86aa-4c62-b052-f970e6f7bb49';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['mentor'] = $page;

  return $pages;

}
