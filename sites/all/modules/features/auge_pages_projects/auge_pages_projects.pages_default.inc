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
  $page->path = 'ventures';
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
    'title' => 'Projects',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'panel-projects',
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
  $display->layout = 'panels-one-col-wmargin';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'content' => NULL,
      'content_wide' => NULL,
      'content_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Projects';
  $display->uuid = 'a13628f3-32b1-4ae4-8f0a-8075bcfef097';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2ed97582-2404-4aef-ba09-e4be475310e4';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Projects',
      'body' => '<p>This should be in English.</p><p>This are some of the projects that have grown with&nbsp;</p>',
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
          'class_enable' => 0,
          'class' => '',
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
    $pane->uuid = '2ed97582-2404-4aef-ba09-e4be475310e4';
    $display->content['new-2ed97582-2404-4aef-ba09-e4be475310e4'] = $pane;
    $display->panels['content'][0] = 'new-2ed97582-2404-4aef-ba09-e4be475310e4';
    $pane = new stdClass();
    $pane->pid = 'new-6c4bdf83-3d58-48bf-9bcb-b29fadffdff6';
    $pane->panel = 'content';
    $pane->type = 'custom_title_tag';
    $pane->subtype = 'custom_title_tag';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'buttons' => NULL,
      'custom_page_title_pattern' => 'Projects | Auge',
      'form_build_id' => 'form-jen1pIT_FbNBG4rfMKAJ5pWdBO84oLebwEgYqRzm4VE',
      'form_token' => 'dWAZYIJYSyah0F52cDXNd7xmZg_7tn9XM1bmmuAhH04',
      'form_id' => 'panels_custom_title_tag_edit_form',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6c4bdf83-3d58-48bf-9bcb-b29fadffdff6';
    $display->content['new-6c4bdf83-3d58-48bf-9bcb-b29fadffdff6'] = $pane;
    $display->panels['content'][1] = 'new-6c4bdf83-3d58-48bf-9bcb-b29fadffdff6';
    $pane = new stdClass();
    $pane->pid = 'new-cb0634db-d457-4c17-a905-9190aadcb4be';
    $pane->panel = 'content_wide';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects-panel_pane_6';
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
    $pane->uuid = 'cb0634db-d457-4c17-a905-9190aadcb4be';
    $display->content['new-cb0634db-d457-4c17-a905-9190aadcb4be'] = $pane;
    $display->panels['content_wide'][0] = 'new-cb0634db-d457-4c17-a905-9190aadcb4be';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_projects__panel_context_33fb2e35-46df-445c-9685-41838d056765';
  $handler->task = 'page';
  $handler->subtask = 'projects';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Emprendimientos',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'panel-projects',
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
  $display->layout = 'panels-one-col-wmargin';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'content' => NULL,
      'content_wide' => NULL,
      'content_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Proyectos';
  $display->uuid = 'a13628f3-32b1-4ae4-8f0a-8075bcfef097';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2ed97582-2404-4aef-ba09-e4be475310e4';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Emprendimientos',
      'body' => '<p>Estas son algunos de los emprendimientos que incubamos:</p>',
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
          'class_enable' => 0,
          'class' => '',
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
    $pane->uuid = '2ed97582-2404-4aef-ba09-e4be475310e4';
    $display->content['new-2ed97582-2404-4aef-ba09-e4be475310e4'] = $pane;
    $display->panels['content'][0] = 'new-2ed97582-2404-4aef-ba09-e4be475310e4';
    $pane = new stdClass();
    $pane->pid = 'new-f9ad5223-535c-4eb3-83e8-9e76f0c906c1';
    $pane->panel = 'content';
    $pane->type = 'custom_title_tag';
    $pane->subtype = 'custom_title_tag';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'buttons' => NULL,
      'custom_page_title_pattern' => 'Proyectos | Auge',
      'form_build_id' => 'form-ZHc8ycaOFDmf-v23D7Q6leiAwqSrSA9cjNiCBSj0j00',
      'form_token' => '5l-6dgRkIOgk0DQZA9ubA4ippuyoseUVz-b31XpCw0w',
      'form_id' => 'panels_custom_title_tag_edit_form',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f9ad5223-535c-4eb3-83e8-9e76f0c906c1';
    $display->content['new-f9ad5223-535c-4eb3-83e8-9e76f0c906c1'] = $pane;
    $display->panels['content'][1] = 'new-f9ad5223-535c-4eb3-83e8-9e76f0c906c1';
    $pane = new stdClass();
    $pane->pid = 'new-f169a14f-8180-4bf2-ae8c-cf37a0368f9e';
    $pane->panel = 'content_wide';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects-panel_pane_6';
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
    $pane->uuid = 'f169a14f-8180-4bf2-ae8c-cf37a0368f9e';
    $display->content['new-f169a14f-8180-4bf2-ae8c-cf37a0368f9e'] = $pane;
    $display->panels['content_wide'][0] = 'new-f169a14f-8180-4bf2-ae8c-cf37a0368f9e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['projects'] = $page;

  return $pages;

}
