<?php
/**
 * @file
 * auge_pages_terms.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function auge_pages_terms_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__taxonomy_terms';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Taxonomy terms Spanish',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'taxonomy-terms',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'taxonomy_terms',
    'access' => array(
      'logic' => 'and',
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
    ),
  );
  $display = new panels_display();
  $display->layout = 'panels-two-col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'sidebar' => array(
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
    ),
    'content' => array(
      'style' => 'semantic_panels',
    ),
    'sidebar' => array(
      'style' => 'semantic_panels',
    ),
  );
  $display->cache = array();
  $display->title = '%term:i18n-name';
  $display->uuid = 'd192047d-eae6-4a53-92cd-7a80bd7e8d53';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-700d6cdc-9e09-43a4-aa4b-799f4293f6bb';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'taxonomies_blog-panel_pane_1';
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
    $pane->uuid = '700d6cdc-9e09-43a4-aa4b-799f4293f6bb';
    $display->content['new-700d6cdc-9e09-43a4-aa4b-799f4293f6bb'] = $pane;
    $display->panels['content'][0] = 'new-700d6cdc-9e09-43a4-aa4b-799f4293f6bb';
    $pane = new stdClass();
    $pane->pid = 'new-a55c37c3-5947-40f0-9976-a5b808140fdd';
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
    $pane->uuid = 'a55c37c3-5947-40f0-9976-a5b808140fdd';
    $display->content['new-a55c37c3-5947-40f0-9976-a5b808140fdd'] = $pane;
    $display->panels['sidebar'][0] = 'new-a55c37c3-5947-40f0-9976-a5b808140fdd';
    $pane = new stdClass();
    $pane->pid = 'new-402a03a4-9c3d-41e3-a716-f52df2d38ed0';
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
    $pane->uuid = '402a03a4-9c3d-41e3-a716-f52df2d38ed0';
    $display->content['new-402a03a4-9c3d-41e3-a716-f52df2d38ed0'] = $pane;
    $display->panels['sidebar'][1] = 'new-402a03a4-9c3d-41e3-a716-f52df2d38ed0';
    $pane = new stdClass();
    $pane->pid = 'new-79d7485e-539b-48db-becf-fab8b90317e2';
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
    $pane->uuid = '79d7485e-539b-48db-becf-fab8b90317e2';
    $display->content['new-79d7485e-539b-48db-becf-fab8b90317e2'] = $pane;
    $display->panels['sidebar'][2] = 'new-79d7485e-539b-48db-becf-fab8b90317e2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__taxonomy_terms'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__taxonomy_terms_english';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Taxonomy terms English',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'taxonomy-terms panel-grid-width',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'taxonomy_terms_english',
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
      'content' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:i18n-name';
  $display->uuid = '0c80614f-24be-47c1-ba55-7a7713ba15cf';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f17ae675-971d-4645-a5bf-fd46c03063a3';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'taxonomies_blog-panel_pane_2';
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
    $pane->uuid = 'f17ae675-971d-4645-a5bf-fd46c03063a3';
    $display->content['new-f17ae675-971d-4645-a5bf-fd46c03063a3'] = $pane;
    $display->panels['content'][0] = 'new-f17ae675-971d-4645-a5bf-fd46c03063a3';
    $pane = new stdClass();
    $pane->pid = 'new-d144f7f8-8117-42bf-bbad-a291c06c0345';
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
    $pane->uuid = 'd144f7f8-8117-42bf-bbad-a291c06c0345';
    $display->content['new-d144f7f8-8117-42bf-bbad-a291c06c0345'] = $pane;
    $display->panels['sidebar'][0] = 'new-d144f7f8-8117-42bf-bbad-a291c06c0345';
    $pane = new stdClass();
    $pane->pid = 'new-58423b58-2de9-43e0-a4f2-cef786f5ea15';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '58423b58-2de9-43e0-a4f2-cef786f5ea15';
    $display->content['new-58423b58-2de9-43e0-a4f2-cef786f5ea15'] = $pane;
    $display->panels['sidebar'][1] = 'new-58423b58-2de9-43e0-a4f2-cef786f5ea15';
    $pane = new stdClass();
    $pane->pid = 'new-50c9d0c2-84bc-46ec-b41a-3deaa0f85da1';
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
    $pane->uuid = '50c9d0c2-84bc-46ec-b41a-3deaa0f85da1';
    $display->content['new-50c9d0c2-84bc-46ec-b41a-3deaa0f85da1'] = $pane;
    $display->panels['sidebar'][2] = 'new-50c9d0c2-84bc-46ec-b41a-3deaa0f85da1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f17ae675-971d-4645-a5bf-fd46c03063a3';
  $handler->conf['display'] = $display;
  $export['term_view__taxonomy_terms_english'] = $handler;

  return $export;
}
