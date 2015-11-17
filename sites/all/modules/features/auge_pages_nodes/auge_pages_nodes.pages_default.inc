<?php
/**
 * @file
 * auge_pages_nodes.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function auge_pages_nodes_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__activities';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Activities',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'panel-node-activity',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'activities',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'activity' => 'activity',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_language',
          'settings' => array(
            'language' => array(
              'en' => 'en',
              'current' => 0,
              'default' => 0,
              'no_language' => 0,
              'es' => 0,
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'panels-two-col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'content' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c9762e25-2de8-4d32-ad60-09029b4cb42b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b1e0ba72-3b79-4a2d-9e13-e53f0012ddc3';
    $pane->panel = 'content';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = 'b1e0ba72-3b79-4a2d-9e13-e53f0012ddc3';
    $display->content['new-b1e0ba72-3b79-4a2d-9e13-e53f0012ddc3'] = $pane;
    $display->panels['content'][0] = 'new-b1e0ba72-3b79-4a2d-9e13-e53f0012ddc3';
    $pane = new stdClass();
    $pane->pid = 'new-b48b18dd-8a3e-4f0c-af1a-ee27fc167663';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'categories-panel_pane_1';
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
    $pane->uuid = 'b48b18dd-8a3e-4f0c-af1a-ee27fc167663';
    $display->content['new-b48b18dd-8a3e-4f0c-af1a-ee27fc167663'] = $pane;
    $display->panels['sidebar'][0] = 'new-b48b18dd-8a3e-4f0c-af1a-ee27fc167663';
    $pane = new stdClass();
    $pane->pid = 'new-d69db49d-2994-40b7-a02d-a9d3b039ecc6';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'proximas_actividades-panel_pane_1';
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
    $pane->uuid = 'd69db49d-2994-40b7-a02d-a9d3b039ecc6';
    $display->content['new-d69db49d-2994-40b7-a02d-a9d3b039ecc6'] = $pane;
    $display->panels['sidebar'][1] = 'new-d69db49d-2994-40b7-a02d-a9d3b039ecc6';
    $pane = new stdClass();
    $pane->pid = 'new-eab4aa2e-5e07-4cd5-a35c-85b1f8a2fca4';
    $pane->panel = 'sidebar';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'eab4aa2e-5e07-4cd5-a35c-85b1f8a2fca4';
    $display->content['new-eab4aa2e-5e07-4cd5-a35c-85b1f8a2fca4'] = $pane;
    $display->panels['sidebar'][2] = 'new-eab4aa2e-5e07-4cd5-a35c-85b1f8a2fca4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-b48b18dd-8a3e-4f0c-af1a-ee27fc167663';
  $handler->conf['display'] = $display;
  $export['node_view__activities'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__activities_spanish';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Activities Spanish',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'panel-node-activity',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'activities_spanish',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'activity' => 'activity',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_language',
          'settings' => array(
            'language' => array(
              'es' => 'es',
              'current' => 0,
              'default' => 0,
              'no_language' => 0,
              'en' => 0,
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'panels-two-col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'content' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8a8e5570-323a-4e47-8045-a20af121a197';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ef6f4318-4138-42a0-8d61-4ed50cb5113b';
    $pane->panel = 'content';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = 'ef6f4318-4138-42a0-8d61-4ed50cb5113b';
    $display->content['new-ef6f4318-4138-42a0-8d61-4ed50cb5113b'] = $pane;
    $display->panels['content'][0] = 'new-ef6f4318-4138-42a0-8d61-4ed50cb5113b';
    $pane = new stdClass();
    $pane->pid = 'new-8e29e897-2632-44fc-9ac1-2c81a438e7cd';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'categories-panel_pane_2';
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
    $pane->uuid = '8e29e897-2632-44fc-9ac1-2c81a438e7cd';
    $display->content['new-8e29e897-2632-44fc-9ac1-2c81a438e7cd'] = $pane;
    $display->panels['sidebar'][0] = 'new-8e29e897-2632-44fc-9ac1-2c81a438e7cd';
    $pane = new stdClass();
    $pane->pid = 'new-bdb082a1-8fbd-4e92-9ccd-896a9a264db6';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_list-panel_pane_4';
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
    $pane->uuid = 'bdb082a1-8fbd-4e92-9ccd-896a9a264db6';
    $display->content['new-bdb082a1-8fbd-4e92-9ccd-896a9a264db6'] = $pane;
    $display->panels['sidebar'][1] = 'new-bdb082a1-8fbd-4e92-9ccd-896a9a264db6';
    $pane = new stdClass();
    $pane->pid = 'new-0e928521-d485-42c6-9aba-0d5ce6efc635';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0e928521-d485-42c6-9aba-0d5ce6efc635';
    $display->content['new-0e928521-d485-42c6-9aba-0d5ce6efc635'] = $pane;
    $display->panels['sidebar'][2] = 'new-0e928521-d485-42c6-9aba-0d5ce6efc635';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ef6f4318-4138-42a0-8d61-4ed50cb5113b';
  $handler->conf['display'] = $display;
  $export['node_view__activities_spanish'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__blog_post';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Blog post',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'panel-node-blog',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'blog_post',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'blog_post' => 'blog_post',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_language',
          'settings' => array(
            'language' => array(
              'en' => 'en',
              'current' => 0,
              'default' => 0,
              'no_language' => 0,
              'es' => 0,
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'panels-two-col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'content' => array(
        'separator' => array(
          'active' => 0,
          'element_type' => '',
          'show_css' => 0,
          'element_class' => '',
        ),
      ),
      'sidebar' => NULL,
    ),
    'content' => array(
      'style' => 'semantic_panels',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '53800b75-75fc-42a1-b330-798aab91e7b0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f698284e-ed6d-459e-a9e4-dfa97325b725';
    $pane->panel = 'content';
    $pane->type = 'token';
    $pane->subtype = 'node:title';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
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
    $pane->uuid = 'f698284e-ed6d-459e-a9e4-dfa97325b725';
    $display->content['new-f698284e-ed6d-459e-a9e4-dfa97325b725'] = $pane;
    $display->panels['content'][0] = 'new-f698284e-ed6d-459e-a9e4-dfa97325b725';
    $pane = new stdClass();
    $pane->pid = 'new-fb5d1ede-1edd-44f4-a7c8-11bed9467bb2';
    $pane->panel = 'content';
    $pane->type = 'token';
    $pane->subtype = 'node:created';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fb5d1ede-1edd-44f4-a7c8-11bed9467bb2';
    $display->content['new-fb5d1ede-1edd-44f4-a7c8-11bed9467bb2'] = $pane;
    $display->panels['content'][1] = 'new-fb5d1ede-1edd-44f4-a7c8-11bed9467bb2';
    $pane = new stdClass();
    $pane->pid = 'new-04a27811-a25f-4382-a6f0-a7263aecbc03';
    $pane->panel = 'content';
    $pane->type = 'token';
    $pane->subtype = 'node:field-post-category';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '04a27811-a25f-4382-a6f0-a7263aecbc03';
    $display->content['new-04a27811-a25f-4382-a6f0-a7263aecbc03'] = $pane;
    $display->panels['content'][2] = 'new-04a27811-a25f-4382-a6f0-a7263aecbc03';
    $pane = new stdClass();
    $pane->pid = 'new-f2063254-8dd9-4d5b-8b04-6a1eb518cc98';
    $pane->panel = 'content';
    $pane->type = 'token';
    $pane->subtype = 'node:body';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f2063254-8dd9-4d5b-8b04-6a1eb518cc98';
    $display->content['new-f2063254-8dd9-4d5b-8b04-6a1eb518cc98'] = $pane;
    $display->panels['content'][3] = 'new-f2063254-8dd9-4d5b-8b04-6a1eb518cc98';
    $pane = new stdClass();
    $pane->pid = 'new-b261e70c-ec29-4af2-8d18-af324c88c986';
    $pane->panel = 'content';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 1,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'b261e70c-ec29-4af2-8d18-af324c88c986';
    $display->content['new-b261e70c-ec29-4af2-8d18-af324c88c986'] = $pane;
    $display->panels['content'][4] = 'new-b261e70c-ec29-4af2-8d18-af324c88c986';
    $pane = new stdClass();
    $pane->pid = 'new-afcb8ec9-6c51-4a6f-898d-d7de2c114d9f';
    $pane->panel = 'content';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'afcb8ec9-6c51-4a6f-898d-d7de2c114d9f';
    $display->content['new-afcb8ec9-6c51-4a6f-898d-d7de2c114d9f'] = $pane;
    $display->panels['content'][5] = 'new-afcb8ec9-6c51-4a6f-898d-d7de2c114d9f';
    $pane = new stdClass();
    $pane->pid = 'new-2d168b08-906c-4e78-9f5f-0f5b4001487d';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'categories-panel_pane_1';
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
    $pane->uuid = '2d168b08-906c-4e78-9f5f-0f5b4001487d';
    $display->content['new-2d168b08-906c-4e78-9f5f-0f5b4001487d'] = $pane;
    $display->panels['sidebar'][0] = 'new-2d168b08-906c-4e78-9f5f-0f5b4001487d';
    $pane = new stdClass();
    $pane->pid = 'new-893fc8b6-b3ea-47e1-8801-9b59dda7cba9';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'proximas_actividades-panel_pane_1';
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
    $pane->uuid = '893fc8b6-b3ea-47e1-8801-9b59dda7cba9';
    $display->content['new-893fc8b6-b3ea-47e1-8801-9b59dda7cba9'] = $pane;
    $display->panels['sidebar'][1] = 'new-893fc8b6-b3ea-47e1-8801-9b59dda7cba9';
    $pane = new stdClass();
    $pane->pid = 'new-32a151a8-0d5f-415a-ab40-667d2e2d1ffe';
    $pane->panel = 'sidebar';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '32a151a8-0d5f-415a-ab40-667d2e2d1ffe';
    $display->content['new-32a151a8-0d5f-415a-ab40-667d2e2d1ffe'] = $pane;
    $display->panels['sidebar'][2] = 'new-32a151a8-0d5f-415a-ab40-667d2e2d1ffe';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-f698284e-ed6d-459e-a9e4-dfa97325b725';
  $handler->conf['display'] = $display;
  $export['node_view__blog_post'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__blog_post_spanish';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Blog post Spanish',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'panel-node-blog',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'blog_post_spanish',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'blog_post' => 'blog_post',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_language',
          'settings' => array(
            'language' => array(
              'es' => 'es',
              'current' => 0,
              'default' => 0,
              'no_language' => 0,
              'en' => 0,
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'panels-two-col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'content' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e87df6aa-d3a5-4899-86a8-5d44f9f3729a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9b12468d-77b7-4be0-a2e1-c1cecd11a4e0';
    $pane->panel = 'content';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '9b12468d-77b7-4be0-a2e1-c1cecd11a4e0';
    $display->content['new-9b12468d-77b7-4be0-a2e1-c1cecd11a4e0'] = $pane;
    $display->panels['content'][0] = 'new-9b12468d-77b7-4be0-a2e1-c1cecd11a4e0';
    $pane = new stdClass();
    $pane->pid = 'new-760d355e-bbc3-41a7-a35d-dcfa3ba96d20';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'categories-panel_pane_2';
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
    $pane->uuid = '760d355e-bbc3-41a7-a35d-dcfa3ba96d20';
    $display->content['new-760d355e-bbc3-41a7-a35d-dcfa3ba96d20'] = $pane;
    $display->panels['sidebar'][0] = 'new-760d355e-bbc3-41a7-a35d-dcfa3ba96d20';
    $pane = new stdClass();
    $pane->pid = 'new-4bb68b22-3199-4202-8de8-0d629b7a45f7';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_list-panel_pane_4';
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
    $pane->uuid = '4bb68b22-3199-4202-8de8-0d629b7a45f7';
    $display->content['new-4bb68b22-3199-4202-8de8-0d629b7a45f7'] = $pane;
    $display->panels['sidebar'][1] = 'new-4bb68b22-3199-4202-8de8-0d629b7a45f7';
    $pane = new stdClass();
    $pane->pid = 'new-4ea191ae-fe33-4769-a5ac-0b8794ae35ef';
    $pane->panel = 'sidebar';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4ea191ae-fe33-4769-a5ac-0b8794ae35ef';
    $display->content['new-4ea191ae-fe33-4769-a5ac-0b8794ae35ef'] = $pane;
    $display->panels['sidebar'][2] = 'new-4ea191ae-fe33-4769-a5ac-0b8794ae35ef';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-9b12468d-77b7-4be0-a2e1-c1cecd11a4e0';
  $handler->conf['display'] = $display;
  $export['node_view__blog_post_spanish'] = $handler;

  return $export;
}
