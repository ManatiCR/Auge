<?php
/**
 * @file
 * auge_pages_blog.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function auge_pages_blog_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__blog_post';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
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
    $pane->shown = TRUE;
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

  return $export;
}

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
    'type' => 'none',
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
  $display->layout = 'panels-two-col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'separator' => array(
          'active' => 0,
          'element_type' => '',
          'show_css' => 0,
          'element_class' => '',
        ),
      ),
      'top' => array(
        'separator' => array(
          'active' => 0,
          'element_type' => '',
          'show_css' => 0,
          'element_class' => '',
        ),
      ),
      'left' => array(
        'separator' => array(
          'active' => 0,
          'element_type' => '',
          'show_css' => 0,
          'element_class' => '',
        ),
      ),
      'right' => array(
        'separator' => array(
          'active' => 0,
          'element_type' => '',
          'show_css' => 0,
          'element_class' => '',
        ),
      ),
      'bottom' => NULL,
      'content' => NULL,
      'sidebar' => NULL,
    ),
    'style' => 'semantic_panels',
    'top' => array(
      'style' => 'semantic_panels',
    ),
    'bottom' => array(
      'style' => 'naked',
    ),
    'left' => array(
      'style' => 'semantic_panels',
    ),
    'right' => array(
      'style' => 'semantic_panels',
    ),
  );
  $display->cache = array();
  $display->title = 'Blog';
  $display->uuid = '59888120-5572-478f-8b72-88a053ced00b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-791cef8a-2496-4c6e-b693-cf0856bf237c';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_list-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'blog-page-main-content',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'div',
          'class_enable' => 0,
          'class' => 'blog-page-main-content-wrapper',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '791cef8a-2496-4c6e-b693-cf0856bf237c';
    $display->content['new-791cef8a-2496-4c6e-b693-cf0856bf237c'] = $pane;
    $display->panels['content'][0] = 'new-791cef8a-2496-4c6e-b693-cf0856bf237c';
    $pane = new stdClass();
    $pane->pid = 'new-d91006e7-f770-4c9c-abb1-a83edd3a5511';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'categories-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => '',
          'class_enable' => 1,
          'class' => 'sidebar-title',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'categories-sidebar-wrapper',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd91006e7-f770-4c9c-abb1-a83edd3a5511';
    $display->content['new-d91006e7-f770-4c9c-abb1-a83edd3a5511'] = $pane;
    $display->panels['sidebar'][0] = 'new-d91006e7-f770-4c9c-abb1-a83edd3a5511';
    $pane = new stdClass();
    $pane->pid = 'new-dbf8f73a-1550-440e-9e56-0719ad6330ba';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'proximas_actividades-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => '',
          'class_enable' => 1,
          'class' => 'sidebar-title',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'activities-sidebar-wrapper',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dbf8f73a-1550-440e-9e56-0719ad6330ba';
    $display->content['new-dbf8f73a-1550-440e-9e56-0719ad6330ba'] = $pane;
    $display->panels['sidebar'][1] = 'new-dbf8f73a-1550-440e-9e56-0719ad6330ba';
    $pane = new stdClass();
    $pane->pid = 'new-a7071731-9db5-468f-9bf0-b0ac1ce4a107';
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
      'settings' => array(
        'element_title' => array(
          'type' => '',
          'class_enable' => 1,
          'class' => 'sidebar-title',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => '',
          'class_enable' => 1,
          'class' => 'getinvolved-sidebar-wrapper',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a7071731-9db5-468f-9bf0-b0ac1ce4a107';
    $display->content['new-a7071731-9db5-468f-9bf0-b0ac1ce4a107'] = $pane;
    $display->panels['sidebar'][2] = 'new-a7071731-9db5-468f-9bf0-b0ac1ce4a107';
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
      'body' => '<p>Useful information about what we do, learn and achieve.&nbsp;</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => 'h1',
          'class_enable' => 1,
          'class' => 'page-title',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => 'h3',
          'class_enable' => 1,
          'class' => 'page-description',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'page-header-wrapper',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
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
  $display->layout = 'panels-two-col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'content' => NULL,
      'sidebar' => NULL,
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
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_list-panel_pane_2';
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
    $pane->uuid = '961c2c71-c016-4d04-9b0a-1925cea9aabb';
    $display->content['new-961c2c71-c016-4d04-9b0a-1925cea9aabb'] = $pane;
    $display->panels['content'][0] = 'new-961c2c71-c016-4d04-9b0a-1925cea9aabb';
    $pane = new stdClass();
    $pane->pid = 'new-6c699fe7-e321-435f-9884-919d1b823e31';
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
    $pane->uuid = '6c699fe7-e321-435f-9884-919d1b823e31';
    $display->content['new-6c699fe7-e321-435f-9884-919d1b823e31'] = $pane;
    $display->panels['sidebar'][0] = 'new-6c699fe7-e321-435f-9884-919d1b823e31';
    $pane = new stdClass();
    $pane->pid = 'new-eec698e0-8308-4e6f-bbf7-e8554a5083ed';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'proximas_actividades-panel_pane_7';
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
    $pane->uuid = 'eec698e0-8308-4e6f-bbf7-e8554a5083ed';
    $display->content['new-eec698e0-8308-4e6f-bbf7-e8554a5083ed'] = $pane;
    $display->panels['sidebar'][1] = 'new-eec698e0-8308-4e6f-bbf7-e8554a5083ed';
    $pane = new stdClass();
    $pane->pid = 'new-cdf6f14b-d4c8-4dd7-be65-7c6786d38c2f';
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
    $pane->uuid = 'cdf6f14b-d4c8-4dd7-be65-7c6786d38c2f';
    $display->content['new-cdf6f14b-d4c8-4dd7-be65-7c6786d38c2f'] = $pane;
    $display->panels['sidebar'][2] = 'new-cdf6f14b-d4c8-4dd7-be65-7c6786d38c2f';
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
      'body' => '<p>Useful information about what we do, learn and achieve.&nbsp;</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => 'h1',
          'class_enable' => 1,
          'class' => 'page-title',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => 'h3',
          'class_enable' => 1,
          'class' => 'page-description',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'page-header-wrapper',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
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
