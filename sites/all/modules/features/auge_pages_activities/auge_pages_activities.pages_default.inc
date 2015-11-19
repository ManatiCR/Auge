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
    'css_id' => 'panel-activities',
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
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '702e08d7-5a4f-4d75-bf4f-7a00fae9994c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-660ad346-3ea5-4eaa-97eb-bcd77b6e0b9c';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'proximas_actividades-panel_pane_2';
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
    $pane->uuid = '660ad346-3ea5-4eaa-97eb-bcd77b6e0b9c';
    $display->content['new-660ad346-3ea5-4eaa-97eb-bcd77b6e0b9c'] = $pane;
    $display->panels['content'][0] = 'new-660ad346-3ea5-4eaa-97eb-bcd77b6e0b9c';
    $pane = new stdClass();
    $pane->pid = 'new-ee3a4cd8-9a7b-4878-ab06-7e260124409a';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_list-panel_pane_1';
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
    $pane->uuid = 'ee3a4cd8-9a7b-4878-ab06-7e260124409a';
    $display->content['new-ee3a4cd8-9a7b-4878-ab06-7e260124409a'] = $pane;
    $display->panels['sidebar'][0] = 'new-ee3a4cd8-9a7b-4878-ab06-7e260124409a';
    $pane = new stdClass();
    $pane->pid = 'new-56ea6bdd-ae51-4a7f-a95b-6fd91e264cb0';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '56ea6bdd-ae51-4a7f-a95b-6fd91e264cb0';
    $display->content['new-56ea6bdd-ae51-4a7f-a95b-6fd91e264cb0'] = $pane;
    $display->panels['sidebar'][1] = 'new-56ea6bdd-ae51-4a7f-a95b-6fd91e264cb0';
    $pane = new stdClass();
    $pane->pid = 'new-c312957f-7d61-4393-8b2b-99e8aa204ab8';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Activities',
      'body' => '<p>Events, trainings and important dates.</p>',
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
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c312957f-7d61-4393-8b2b-99e8aa204ab8';
    $display->content['new-c312957f-7d61-4393-8b2b-99e8aa204ab8'] = $pane;
    $display->panels['top'][0] = 'new-c312957f-7d61-4393-8b2b-99e8aa204ab8';
    $pane = new stdClass();
    $pane->pid = 'new-01131ada-e12b-4760-8587-afd1d81a0ad6';
    $pane->panel = 'top';
    $pane->type = 'custom_title_tag';
    $pane->subtype = 'custom_title_tag';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'buttons' => NULL,
      'custom_page_title_pattern' => 'Activities',
      'form_build_id' => 'form-76SkzdNr2dKvRF6cg5i201EluiJbxRhimJGu_PpvuLk',
      'form_token' => 'dWAZYIJYSyah0F52cDXNd7xmZg_7tn9XM1bmmuAhH04',
      'form_id' => 'panels_custom_title_tag_edit_form',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '01131ada-e12b-4760-8587-afd1d81a0ad6';
    $display->content['new-01131ada-e12b-4760-8587-afd1d81a0ad6'] = $pane;
    $display->panels['top'][1] = 'new-01131ada-e12b-4760-8587-afd1d81a0ad6';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_activities__panel_context_09591250-f694-41fe-b705-cfd52b9989e7';
  $handler->task = 'page';
  $handler->subtask = 'activities';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Actividades',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'panel-activities',
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
  );
  $display->cache = array();
  $display->title = 'Actividades';
  $display->uuid = '702e08d7-5a4f-4d75-bf4f-7a00fae9994c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f9b3b8e8-8670-4b5c-82d5-31c0bd1a41b5';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'proximas_actividades-panel_pane_8';
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
    $pane->uuid = 'f9b3b8e8-8670-4b5c-82d5-31c0bd1a41b5';
    $display->content['new-f9b3b8e8-8670-4b5c-82d5-31c0bd1a41b5'] = $pane;
    $display->panels['content'][0] = 'new-f9b3b8e8-8670-4b5c-82d5-31c0bd1a41b5';
    $pane = new stdClass();
    $pane->pid = 'new-43a9471a-93fd-49b7-a936-2bb114fbd345';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '43a9471a-93fd-49b7-a936-2bb114fbd345';
    $display->content['new-43a9471a-93fd-49b7-a936-2bb114fbd345'] = $pane;
    $display->panels['sidebar'][0] = 'new-43a9471a-93fd-49b7-a936-2bb114fbd345';
    $pane = new stdClass();
    $pane->pid = 'new-b45ab054-0f7c-4606-914a-12b8b9c18faf';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b45ab054-0f7c-4606-914a-12b8b9c18faf';
    $display->content['new-b45ab054-0f7c-4606-914a-12b8b9c18faf'] = $pane;
    $display->panels['sidebar'][1] = 'new-b45ab054-0f7c-4606-914a-12b8b9c18faf';
    $pane = new stdClass();
    $pane->pid = 'new-178679c6-acf1-4bc0-b8a7-604ef2e992a9';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Actividades',
      'body' => '<p>Eventos, capacitaciones, fechas importantes.</p>',
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
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '178679c6-acf1-4bc0-b8a7-604ef2e992a9';
    $display->content['new-178679c6-acf1-4bc0-b8a7-604ef2e992a9'] = $pane;
    $display->panels['top'][0] = 'new-178679c6-acf1-4bc0-b8a7-604ef2e992a9';
    $pane = new stdClass();
    $pane->pid = 'new-b8c03608-e452-4265-b600-04501a368e3e';
    $pane->panel = 'top';
    $pane->type = 'custom_title_tag';
    $pane->subtype = 'custom_title_tag';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'buttons' => NULL,
      'custom_page_title_pattern' => 'Actividades | Auge',
      'form_build_id' => 'form-EVaDBwA-ZCk1OY__EIho2DEe5it2JRcMvzSBmJHKe3g',
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
    $pane->uuid = 'b8c03608-e452-4265-b600-04501a368e3e';
    $display->content['new-b8c03608-e452-4265-b600-04501a368e3e'] = $pane;
    $display->panels['top'][1] = 'new-b8c03608-e452-4265-b600-04501a368e3e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['activities'] = $page;

  return $pages;

}
