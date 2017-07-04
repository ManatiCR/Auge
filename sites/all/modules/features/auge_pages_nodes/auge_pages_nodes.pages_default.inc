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
  $display->uuid = 'c9762e25-2de8-4d32-ad60-09029b4cb42b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-20254646-5337-46b6-beba-3021bc48ac9e';
    $pane->panel = 'content';
    $pane->type = 'token';
    $pane->subtype = 'node:title';
    $pane->shown = TRUE;
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
      'settings' => array(
        'element_title' => array(
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
          'type' => 'h2',
          'class_enable' => 1,
          'class' => 'activity-main-content-title',
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
    $pane->uuid = '20254646-5337-46b6-beba-3021bc48ac9e';
    $display->content['new-20254646-5337-46b6-beba-3021bc48ac9e'] = $pane;
    $display->panels['content'][0] = 'new-20254646-5337-46b6-beba-3021bc48ac9e';
    $pane = new stdClass();
    $pane->pid = 'new-2dd276f8-6d27-4369-9c10-c3d408902d4b';
    $pane->panel = 'content';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'blog_post_date',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
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
        'element_content' => array(
          'type' => 'span',
          'class_enable' => 1,
          'class' => 'activity-main-content-date ',
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
          'type' => 'span',
          'class_enable' => 1,
          'class' => 'activity-main-content-date-wrapper',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2dd276f8-6d27-4369-9c10-c3d408902d4b';
    $display->content['new-2dd276f8-6d27-4369-9c10-c3d408902d4b'] = $pane;
    $display->panels['content'][1] = 'new-2dd276f8-6d27-4369-9c10-c3d408902d4b';
    $pane = new stdClass();
    $pane->pid = 'new-9a35c8e5-5bb9-428f-a823-869f9ed0e2a4';
    $pane->panel = 'content';
    $pane->type = 'token';
    $pane->subtype = 'node:field-involucrese';
    $pane->shown = TRUE;
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
      'settings' => array(
        'element_title' => array(
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
        'element_content' => array(
          'type' => 'span',
          'class_enable' => 1,
          'class' => 'activity-main-content-category',
          'attributes' => array(),
          'link_enabled' => 1,
          'link' => array(
            'path' => '[node:field_get_involved_category]',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'span',
          'class_enable' => 1,
          'class' => 'activity-main-content-category-wrapper',
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
    $pane->uuid = '9a35c8e5-5bb9-428f-a823-869f9ed0e2a4';
    $display->content['new-9a35c8e5-5bb9-428f-a823-869f9ed0e2a4'] = $pane;
    $display->panels['content'][2] = 'new-9a35c8e5-5bb9-428f-a823-869f9ed0e2a4';
    $pane = new stdClass();
    $pane->pid = 'new-0aa618f0-0cc2-465d-b8b2-ca403244ab6c';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_activity_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'blog_view_image',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
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
        'element_content' => array(
          'type' => '',
          'class_enable' => 1,
          'class' => 'activity-main-content-image',
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
          'class' => 'activity-main-content-image',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0aa618f0-0cc2-465d-b8b2-ca403244ab6c';
    $display->content['new-0aa618f0-0cc2-465d-b8b2-ca403244ab6c'] = $pane;
    $display->panels['content'][3] = 'new-0aa618f0-0cc2-465d-b8b2-ca403244ab6c';
    $pane = new stdClass();
    $pane->pid = 'new-6251bd58-91d8-46a0-bd1e-c4a88a97d927';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '6251bd58-91d8-46a0-bd1e-c4a88a97d927';
    $display->content['new-6251bd58-91d8-46a0-bd1e-c4a88a97d927'] = $pane;
    $display->panels['content'][4] = 'new-6251bd58-91d8-46a0-bd1e-c4a88a97d927';
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
    $pane = new stdClass();
    $pane->pid = 'new-c74d33ab-b0cb-4607-8a21-277fbee65ecd';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'crumbs-breadcrumb';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c74d33ab-b0cb-4607-8a21-277fbee65ecd';
    $display->content['new-c74d33ab-b0cb-4607-8a21-277fbee65ecd'] = $pane;
    $display->panels['top'][0] = 'new-c74d33ab-b0cb-4607-8a21-277fbee65ecd';
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
      'top' => array(
        'separator' => array(
          'active' => 0,
          'element_type' => '',
          'show_css' => 0,
          'element_class' => '',
        ),
      ),
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
    'top' => array(
      'style' => 'semantic_panels',
    ),
    'content' => array(
      'style' => 'semantic_panels',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8a8e5570-323a-4e47-8045-a20af121a197';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-46065778-b7e1-4a5a-99f3-2406699e3a17';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'crumbs-breadcrumb';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '46065778-b7e1-4a5a-99f3-2406699e3a17';
    $display->content['new-46065778-b7e1-4a5a-99f3-2406699e3a17'] = $pane;
    $display->panels['content'][0] = 'new-46065778-b7e1-4a5a-99f3-2406699e3a17';
    $pane = new stdClass();
    $pane->pid = 'new-0fb23fd4-151c-40d3-b853-ad1af58219a1';
    $pane->panel = 'content';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'blog_post_date',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
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
        'element_content' => array(
          'type' => 'span',
          'class_enable' => 1,
          'class' => 'activity-main-content-date ',
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
          'type' => 'span',
          'class_enable' => 1,
          'class' => 'activity-main-content-date-wrapper',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0fb23fd4-151c-40d3-b853-ad1af58219a1';
    $display->content['new-0fb23fd4-151c-40d3-b853-ad1af58219a1'] = $pane;
    $display->panels['content'][1] = 'new-0fb23fd4-151c-40d3-b853-ad1af58219a1';
    $pane = new stdClass();
    $pane->pid = 'new-707f9afd-0cc5-4fff-9d9c-c2b55d1300a8';
    $pane->panel = 'content';
    $pane->type = 'token';
    $pane->subtype = 'node:field-involucrese';
    $pane->shown = TRUE;
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
      'settings' => array(
        'element_title' => array(
          'type' => 'span',
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
          'type' => 'span',
          'class_enable' => 1,
          'class' => 'activity-main-content-category',
          'attributes' => array(),
          'link_enabled' => 1,
          'link' => array(
            'path' => '[node:field_get_involved_category]',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'span',
          'class_enable' => 1,
          'class' => 'activity-main-content-category-wrapper',
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
    $pane->uuid = '707f9afd-0cc5-4fff-9d9c-c2b55d1300a8';
    $display->content['new-707f9afd-0cc5-4fff-9d9c-c2b55d1300a8'] = $pane;
    $display->panels['content'][2] = 'new-707f9afd-0cc5-4fff-9d9c-c2b55d1300a8';
    $pane = new stdClass();
    $pane->pid = 'new-f617df9f-0b15-4d07-aeaf-692257c535ca';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_activity_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'blog_view_image',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
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
        'element_content' => array(
          'type' => '',
          'class_enable' => 1,
          'class' => 'activity-main-content-image',
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
          'class' => 'activity-main-content-image',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f617df9f-0b15-4d07-aeaf-692257c535ca';
    $display->content['new-f617df9f-0b15-4d07-aeaf-692257c535ca'] = $pane;
    $display->panels['content'][3] = 'new-f617df9f-0b15-4d07-aeaf-692257c535ca';
    $pane = new stdClass();
    $pane->pid = 'new-2ee5f532-0967-4d5a-ba64-fabdf53a71ce';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '2ee5f532-0967-4d5a-ba64-fabdf53a71ce';
    $display->content['new-2ee5f532-0967-4d5a-ba64-fabdf53a71ce'] = $pane;
    $display->panels['content'][4] = 'new-2ee5f532-0967-4d5a-ba64-fabdf53a71ce';
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
    $pane->pid = 'new-e3c6fe85-52a3-4d7a-924d-586e3265aa65';
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
    $pane->uuid = 'e3c6fe85-52a3-4d7a-924d-586e3265aa65';
    $display->content['new-e3c6fe85-52a3-4d7a-924d-586e3265aa65'] = $pane;
    $display->panels['sidebar'][2] = 'new-e3c6fe85-52a3-4d7a-924d-586e3265aa65';
    $pane = new stdClass();
    $pane->pid = 'new-2b2dd7bf-a6c4-40d4-8c93-88aa0b548561';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href=/actividades class="activities-power-link">Ver todas las actividades</a>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2b2dd7bf-a6c4-40d4-8c93-88aa0b548561';
    $display->content['new-2b2dd7bf-a6c4-40d4-8c93-88aa0b548561'] = $pane;
    $display->panels['top'][0] = 'new-2b2dd7bf-a6c4-40d4-8c93-88aa0b548561';
    $pane = new stdClass();
    $pane->pid = 'new-37422736-90f9-4182-a94d-ff500e31cbec';
    $pane->panel = 'top';
    $pane->type = 'token';
    $pane->subtype = 'node:title';
    $pane->shown = TRUE;
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
      'settings' => array(
        'element_title' => array(
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
          'type' => 'h2',
          'class_enable' => 1,
          'class' => 'activity-main-content-title',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '37422736-90f9-4182-a94d-ff500e31cbec';
    $display->content['new-37422736-90f9-4182-a94d-ff500e31cbec'] = $pane;
    $display->panels['top'][1] = 'new-37422736-90f9-4182-a94d-ff500e31cbec';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
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
      'default' => array(
        'separator' => array(
          'active' => 0,
          'element_type' => '',
          'show_css' => 0,
          'element_class' => '',
        ),
      ),
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
    'style' => 'semantic_panels',
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
    $pane->shown = TRUE;
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
      'settings' => array(
        'element_title' => array(
          'type' => 'h2',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 1,
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
          'type' => 'h2',
          'class_enable' => 1,
          'class' => 'blog-post-main-content-title',
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
    $pane->uuid = 'f698284e-ed6d-459e-a9e4-dfa97325b725';
    $display->content['new-f698284e-ed6d-459e-a9e4-dfa97325b725'] = $pane;
    $display->panels['content'][0] = 'new-f698284e-ed6d-459e-a9e4-dfa97325b725';
    $pane = new stdClass();
    $pane->pid = 'new-747916c8-a3d3-4670-8381-bc613d448307';
    $pane->panel = 'content';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'blog_post_date',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
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
        'element_content' => array(
          'type' => 'span',
          'class_enable' => 1,
          'class' => 'blog-post-main-content-date',
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
          'type' => 'span',
          'class_enable' => 1,
          'class' => 'blog-post-main-content-date-wrapper',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'node-blog-date',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '747916c8-a3d3-4670-8381-bc613d448307';
    $display->content['new-747916c8-a3d3-4670-8381-bc613d448307'] = $pane;
    $display->panels['content'][1] = 'new-747916c8-a3d3-4670-8381-bc613d448307';
    $pane = new stdClass();
    $pane->pid = 'new-04a27811-a25f-4382-a6f0-a7263aecbc03';
    $pane->panel = 'content';
    $pane->type = 'token';
    $pane->subtype = 'node:field-post-category';
    $pane->shown = TRUE;
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
      'settings' => array(
        'element_title' => array(
          'type' => 'span',
          'class_enable' => 0,
          'class' => 'blog-post-main-content-category',
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
          'type' => 'span',
          'class_enable' => 1,
          'class' => 'blog-post-main-content-category',
          'attributes' => array(),
          'link_enabled' => 1,
          'link' => array(
            'path' => '[node:field_post_category]',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'span',
          'class_enable' => 1,
          'class' => 'blog-post-main-content-category-wrapper',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'node-blog-category',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '04a27811-a25f-4382-a6f0-a7263aecbc03';
    $display->content['new-04a27811-a25f-4382-a6f0-a7263aecbc03'] = $pane;
    $display->panels['content'][2] = 'new-04a27811-a25f-4382-a6f0-a7263aecbc03';
    $pane = new stdClass();
    $pane->pid = 'new-51b495c5-d413-48fa-9cbc-f26e6dd43b62';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_blog_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'blog_view_image',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
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
        'element_content' => array(
          'type' => '',
          'class_enable' => 1,
          'class' => 'blog-post-main-content-image',
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
          'class' => 'blog-post-main-content-image',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '51b495c5-d413-48fa-9cbc-f26e6dd43b62';
    $display->content['new-51b495c5-d413-48fa-9cbc-f26e6dd43b62'] = $pane;
    $display->panels['content'][3] = 'new-51b495c5-d413-48fa-9cbc-f26e6dd43b62';
    $pane = new stdClass();
    $pane->pid = 'new-270480e1-2091-499d-9691-100888f76e1f';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '270480e1-2091-499d-9691-100888f76e1f';
    $display->content['new-270480e1-2091-499d-9691-100888f76e1f'] = $pane;
    $display->panels['content'][4] = 'new-270480e1-2091-499d-9691-100888f76e1f';
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
    $pane = new stdClass();
    $pane->pid = 'new-a9e74874-80f9-4a91-84fe-16ce817ba84a';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'crumbs-breadcrumb';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a9e74874-80f9-4a91-84fe-16ce817ba84a';
    $display->content['new-a9e74874-80f9-4a91-84fe-16ce817ba84a'] = $pane;
    $display->panels['top'][0] = 'new-a9e74874-80f9-4a91-84fe-16ce817ba84a';
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
  $display->uuid = 'e87df6aa-d3a5-4899-86a8-5d44f9f3729a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-93ebdbd0-d938-4b8b-8690-890c3686b1a5';
    $pane->panel = 'content';
    $pane->type = 'token';
    $pane->subtype = 'node:title';
    $pane->shown = TRUE;
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
      'settings' => array(
        'element_title' => array(
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
          'type' => 'h2',
          'class_enable' => 1,
          'class' => 'blog-post-main-content-title',
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
    $pane->uuid = '93ebdbd0-d938-4b8b-8690-890c3686b1a5';
    $display->content['new-93ebdbd0-d938-4b8b-8690-890c3686b1a5'] = $pane;
    $display->panels['content'][0] = 'new-93ebdbd0-d938-4b8b-8690-890c3686b1a5';
    $pane = new stdClass();
    $pane->pid = 'new-9eb52103-a258-4cb9-82d3-29204306e54c';
    $pane->panel = 'content';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'blog_post_date',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
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
        'element_content' => array(
          'type' => 'span',
          'class_enable' => 1,
          'class' => 'blog-post-main-content-date',
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
          'type' => 'span',
          'class_enable' => 1,
          'class' => 'blog-post-main-content-date-wrapper',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9eb52103-a258-4cb9-82d3-29204306e54c';
    $display->content['new-9eb52103-a258-4cb9-82d3-29204306e54c'] = $pane;
    $display->panels['content'][1] = 'new-9eb52103-a258-4cb9-82d3-29204306e54c';
    $pane = new stdClass();
    $pane->pid = 'new-e684ba05-b376-4127-9327-0a8a1a1d2f6d';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_post_category';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mlpanels' => array(
        'und' => array(
          'label' => 'title',
          'formatter' => 'i18n_taxonomy_term_reference_link',
          'delta_limit' => 0,
          'delta_offset' => '0',
          'delta_reversed' => FALSE,
          'formatter_settings' => array(),
          'context' => 'argument_entity_id:node_1',
          'override_title' => 0,
          'override_title_text' => '',
          'override_title_heading' => 'h2',
        ),
        'es' => array(
          'label' => 'title',
          'formatter' => 'i18n_taxonomy_term_reference_link',
          'delta_limit' => 0,
          'delta_offset' => '0',
          'delta_reversed' => FALSE,
          'formatter_settings' => array(),
          'context' => 'argument_entity_id:node_1',
          'override_title' => 0,
          'override_title_text' => '',
          'override_title_heading' => 'h2',
        ),
      ),
      'label' => 'title',
      'formatter' => 'i18n_taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
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
        'element_content' => array(
          'type' => '',
          'class_enable' => 1,
          'class' => 'blog-post-main-content-category',
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
          'class' => 'blog-post-main-content-category-wrapper',
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
    $pane->uuid = 'e684ba05-b376-4127-9327-0a8a1a1d2f6d';
    $display->content['new-e684ba05-b376-4127-9327-0a8a1a1d2f6d'] = $pane;
    $display->panels['content'][2] = 'new-e684ba05-b376-4127-9327-0a8a1a1d2f6d';
    $pane = new stdClass();
    $pane->pid = 'new-3b9e5fd7-9920-4880-a974-1081cae27024';
    $pane->panel = 'content';
    $pane->type = 'token';
    $pane->subtype = 'node:field-post-category';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'mlpanels' => array(
        'und' => array(
          'sanitize' => 1,
          'context' => 'argument_entity_id:node_1',
          'override_title' => 1,
          'override_title_text' => '',
          'override_title_heading' => 'h2',
        ),
      ),
      'sanitize' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => 'span',
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
          'type' => 'span',
          'class_enable' => 1,
          'class' => 'blog-post-main-content-category',
          'attributes' => array(),
          'link_enabled' => 1,
          'link' => array(
            'path' => '[node:source:field-get-involved-category:url]',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'span',
          'class_enable' => 1,
          'class' => 'blog-post-main-content-category-wrapper',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3b9e5fd7-9920-4880-a974-1081cae27024';
    $display->content['new-3b9e5fd7-9920-4880-a974-1081cae27024'] = $pane;
    $display->panels['content'][3] = 'new-3b9e5fd7-9920-4880-a974-1081cae27024';
    $pane = new stdClass();
    $pane->pid = 'new-32f5c8a0-07b0-4c9d-b2e3-45a1ef83979b';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_blog_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'blog_view_image',
        'image_link' => '',
      ),
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '32f5c8a0-07b0-4c9d-b2e3-45a1ef83979b';
    $display->content['new-32f5c8a0-07b0-4c9d-b2e3-45a1ef83979b'] = $pane;
    $display->panels['content'][4] = 'new-32f5c8a0-07b0-4c9d-b2e3-45a1ef83979b';
    $pane = new stdClass();
    $pane->pid = 'new-bb7fbe57-f462-4453-807e-53cc8311b517';
    $pane->panel = 'content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'bb7fbe57-f462-4453-807e-53cc8311b517';
    $display->content['new-bb7fbe57-f462-4453-807e-53cc8311b517'] = $pane;
    $display->panels['content'][5] = 'new-bb7fbe57-f462-4453-807e-53cc8311b517';
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
    $pane = new stdClass();
    $pane->pid = 'new-ff852acc-2934-4578-bac5-21c6e667d0e7';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'crumbs-breadcrumb';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ff852acc-2934-4578-bac5-21c6e667d0e7';
    $display->content['new-ff852acc-2934-4578-bac5-21c6e667d0e7'] = $pane;
    $display->panels['top'][0] = 'new-ff852acc-2934-4578-bac5-21c6e667d0e7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__blog_post_spanish'] = $handler;

  return $export;
}
