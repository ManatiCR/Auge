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
    'css_id' => 'panel-entrepreneur',
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
      'middle' => NULL,
      'content' => NULL,
      'content_wide' => NULL,
      'content_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Entrepreneur';
  $display->uuid = '4dc07dfb-1b81-4bc1-8f75-f9b9f9196f66';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Learn title',
      'title' => 'Emprender',
      'body' => '<p>¿Ya se decidió? ¿Tiene un Producto Mínimo Viable, un plan y el equipo para echarse al agua? ¡Ingrese a nuestro proceso de incubación en comunidad!</p>',
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
    $pane->uuid = 'c373420a-adfe-4144-8a5b-661dc64d46b5';
    $display->content['new-c373420a-adfe-4144-8a5b-661dc64d46b5'] = $pane;
    $display->panels['content'][0] = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane = new stdClass();
    $pane->pid = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Una vez que se ha identificado un modelo de negocio y se han realizado pruebas con un Producto Mínimo Viable, los equipos pueden solicitar ingreso al proceso de incubación. Este proceso incluye las fases verde y roja y para ingresar, se requiere la validación resultante del proceso de aprender, o aprobar un proceso de evaluación de requisitos. Una vez que se solicita el ingreso, todos los equipos emprendedores pasan por una valoración en dos pasos, con una triada de especialistas y nuestro Consejo Consultivo en pleno.</p><p>Estos son algunos de los proyectos que se emprenden con nosotros:</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6e211677-d73b-434c-a067-83d6f9fe5522';
    $display->content['new-6e211677-d73b-434c-a067-83d6f9fe5522'] = $pane;
    $display->panels['content'][1] = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane = new stdClass();
    $pane->pid = 'new-b7269cce-2d40-4f2c-a1f9-69bf52b53c12';
    $pane->panel = 'content';
    $pane->type = 'custom_title_tag';
    $pane->subtype = 'custom_title_tag';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'buttons' => NULL,
      'custom_page_title_pattern' => 'Entrepreneur | Auge',
      'form_build_id' => 'form-K5GzZSbHwFKq3oSSNq0Zxaq0MRTB4WbZxidqPw2Kjek',
      'form_token' => 'dWAZYIJYSyah0F52cDXNd7xmZg_7tn9XM1bmmuAhH04',
      'form_id' => 'panels_custom_title_tag_edit_form',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b7269cce-2d40-4f2c-a1f9-69bf52b53c12';
    $display->content['new-b7269cce-2d40-4f2c-a1f9-69bf52b53c12'] = $pane;
    $display->panels['content'][2] = 'new-b7269cce-2d40-4f2c-a1f9-69bf52b53c12';
    $pane = new stdClass();
    $pane->pid = 'new-3ef6b268-7bd9-4d0c-8d7a-5b426fefec22';
    $pane->panel = 'content_bottom';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3ef6b268-7bd9-4d0c-8d7a-5b426fefec22';
    $display->content['new-3ef6b268-7bd9-4d0c-8d7a-5b426fefec22'] = $pane;
    $display->panels['content_bottom'][0] = 'new-3ef6b268-7bd9-4d0c-8d7a-5b426fefec22';
    $pane = new stdClass();
    $pane->pid = 'new-950eed80-b218-4496-98e1-948d3a95b13f';
    $pane->panel = 'content_bottom';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '950eed80-b218-4496-98e1-948d3a95b13f';
    $display->content['new-950eed80-b218-4496-98e1-948d3a95b13f'] = $pane;
    $display->panels['content_bottom'][1] = 'new-950eed80-b218-4496-98e1-948d3a95b13f';
    $pane = new stdClass();
    $pane->pid = 'new-67283836-c6df-4e69-9ec6-48f6b2dc0582';
    $pane->panel = 'content_bottom';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '67283836-c6df-4e69-9ec6-48f6b2dc0582';
    $display->content['new-67283836-c6df-4e69-9ec6-48f6b2dc0582'] = $pane;
    $display->panels['content_bottom'][2] = 'new-67283836-c6df-4e69-9ec6-48f6b2dc0582';
    $pane = new stdClass();
    $pane->pid = 'new-361f370b-31c7-4271-a138-137dbde42663';
    $pane->panel = 'content_wide';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects-panel_pane_3';
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
    $pane->uuid = '361f370b-31c7-4271-a138-137dbde42663';
    $display->content['new-361f370b-31c7-4271-a138-137dbde42663'] = $pane;
    $display->panels['content_wide'][0] = 'new-361f370b-31c7-4271-a138-137dbde42663';
    $pane = new stdClass();
    $pane->pid = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
    $pane->panel = 'content_wide';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'register-idea-link',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a2719e64-c746-4d77-9532-7b332a01cc7e';
    $display->content['new-a2719e64-c746-4d77-9532-7b332a01cc7e'] = $pane;
    $display->panels['content_wide'][1] = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_entrepreneurship__panel_context_76649191-6374-4b4e-a60d-af6dc5f8e4d1';
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
    'css_id' => 'panel-entrepreneur',
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
      'middle' => NULL,
      'content' => NULL,
      'content_wide' => NULL,
      'content_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Entrepreneur';
  $display->uuid = '4dc07dfb-1b81-4bc1-8f75-f9b9f9196f66';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Learn title',
      'title' => 'Emprender',
      'body' => '<p>¿Ya se decidió? ¿Tiene un Producto Mínimo Viable, un plan y el equipo para echarse al agua? ¡Ingrese a nuestro proceso de incubación en comunidad!</p>',
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
    $pane->uuid = 'c373420a-adfe-4144-8a5b-661dc64d46b5';
    $display->content['new-c373420a-adfe-4144-8a5b-661dc64d46b5'] = $pane;
    $display->panels['content'][0] = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane = new stdClass();
    $pane->pid = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Una vez que se ha identificado un modelo de negocio y se han realizado pruebas con un Producto Mínimo Viable, los equipos pueden solicitar ingreso al proceso de incubación. Este proceso incluye las fases verde y roja y para ingresar, se requiere la validación resultante del proceso de aprender, o aprobar un proceso de evaluación de requisitos. Una vez que se solicita el ingreso, todos los equipos emprendedores pasan por una valoración en dos pasos, con una triada de especialistas y nuestro Consejo Consultivo en pleno.</p><p>Estos son algunos de los proyectos que se emprenden con nosotros:</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6e211677-d73b-434c-a067-83d6f9fe5522';
    $display->content['new-6e211677-d73b-434c-a067-83d6f9fe5522'] = $pane;
    $display->panels['content'][1] = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane = new stdClass();
    $pane->pid = 'new-788d65e3-ad78-4096-89b7-41635adeda5e';
    $pane->panel = 'content';
    $pane->type = 'custom_title_tag';
    $pane->subtype = 'custom_title_tag';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'buttons' => NULL,
      'custom_page_title_pattern' => 'Emprender | Auge',
      'form_build_id' => 'form-pnSkXBB26KAQKCoZCJPS64geh1u5rbCO09h7Ry1GAnA',
      'form_token' => 'dWAZYIJYSyah0F52cDXNd7xmZg_7tn9XM1bmmuAhH04',
      'form_id' => 'panels_custom_title_tag_edit_form',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '788d65e3-ad78-4096-89b7-41635adeda5e';
    $display->content['new-788d65e3-ad78-4096-89b7-41635adeda5e'] = $pane;
    $display->panels['content'][2] = 'new-788d65e3-ad78-4096-89b7-41635adeda5e';
    $pane = new stdClass();
    $pane->pid = 'new-8ba5f4d2-b30b-4d0d-a3a8-46e786644145';
    $pane->panel = 'content_bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'stages-panel_pane_6';
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
    $pane->uuid = '8ba5f4d2-b30b-4d0d-a3a8-46e786644145';
    $display->content['new-8ba5f4d2-b30b-4d0d-a3a8-46e786644145'] = $pane;
    $display->panels['content_bottom'][0] = 'new-8ba5f4d2-b30b-4d0d-a3a8-46e786644145';
    $pane = new stdClass();
    $pane->pid = 'new-cb1f9810-d02a-4d0b-8dcb-2fee953cca33';
    $pane->panel = 'content_bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'proximas_actividades-panel_pane_10';
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
    $pane->uuid = 'cb1f9810-d02a-4d0b-8dcb-2fee953cca33';
    $display->content['new-cb1f9810-d02a-4d0b-8dcb-2fee953cca33'] = $pane;
    $display->panels['content_bottom'][1] = 'new-cb1f9810-d02a-4d0b-8dcb-2fee953cca33';
    $pane = new stdClass();
    $pane->pid = 'new-361f370b-31c7-4271-a138-137dbde42663';
    $pane->panel = 'content_wide';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects-panel_pane_3';
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
    $pane->uuid = '361f370b-31c7-4271-a138-137dbde42663';
    $display->content['new-361f370b-31c7-4271-a138-137dbde42663'] = $pane;
    $display->panels['content_wide'][0] = 'new-361f370b-31c7-4271-a138-137dbde42663';
    $pane = new stdClass();
    $pane->pid = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
    $pane->panel = 'content_wide';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'register-idea-link',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a2719e64-c746-4d77-9532-7b332a01cc7e';
    $display->content['new-a2719e64-c746-4d77-9532-7b332a01cc7e'] = $pane;
    $display->panels['content_wide'][1] = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
  $display->hide_title = PANELS_TITLE_NONE;
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
    'css_id' => 'panel-invest',
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
      'middle' => NULL,
      'content' => NULL,
      'content_wide' => NULL,
      'content_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Invest';
  $display->uuid = '4dc07dfb-1b81-4bc1-8f75-f9b9f9196f66';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Learn title',
      'title' => 'Impulsar',
      'body' => '<p>Un emprendimiento prometedor necesita ser impulsado para desarrollar su potencial.</p>',
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
    $pane->uuid = 'c373420a-adfe-4144-8a5b-661dc64d46b5';
    $display->content['new-c373420a-adfe-4144-8a5b-661dc64d46b5'] = $pane;
    $display->panels['content'][0] = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane = new stdClass();
    $pane->pid = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>El proceso AUGE le permite a los emprendedores demostrar las bondades de su iniciativa, a partir de los resultados que van obteniendo en tanto descubren, crean, innovan y crecen. Si le interesa invertir en alguno de los proyectos y desea que facilitemos el proceso, no dude en contactarnos.</p><p>Estos son algunos de los proyectos en los que usted puede invertir:</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6e211677-d73b-434c-a067-83d6f9fe5522';
    $display->content['new-6e211677-d73b-434c-a067-83d6f9fe5522'] = $pane;
    $display->panels['content'][1] = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane = new stdClass();
    $pane->pid = 'new-65ce66ce-45d8-4580-ae86-16d17c717c06';
    $pane->panel = 'content';
    $pane->type = 'custom_title_tag';
    $pane->subtype = 'custom_title_tag';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'buttons' => NULL,
      'custom_page_title_pattern' => 'Invest | Auge',
      'form_build_id' => 'form-1kJksKCtEehLiBAF-QJT-bJoHfdIN5_1FMdhihn26Rs',
      'form_token' => 'dWAZYIJYSyah0F52cDXNd7xmZg_7tn9XM1bmmuAhH04',
      'form_id' => 'panels_custom_title_tag_edit_form',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '65ce66ce-45d8-4580-ae86-16d17c717c06';
    $display->content['new-65ce66ce-45d8-4580-ae86-16d17c717c06'] = $pane;
    $display->panels['content'][2] = 'new-65ce66ce-45d8-4580-ae86-16d17c717c06';
    $pane = new stdClass();
    $pane->pid = 'new-44b1e53c-4e41-4bc5-8bc3-ec1db8ed39b6';
    $pane->panel = 'content_bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
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
    $pane->uuid = '44b1e53c-4e41-4bc5-8bc3-ec1db8ed39b6';
    $display->content['new-44b1e53c-4e41-4bc5-8bc3-ec1db8ed39b6'] = $pane;
    $display->panels['content_bottom'][0] = 'new-44b1e53c-4e41-4bc5-8bc3-ec1db8ed39b6';
    $pane = new stdClass();
    $pane->pid = 'new-327fd9ab-06ac-4922-b166-ab4cf9e51a22';
    $pane->panel = 'content_bottom';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '327fd9ab-06ac-4922-b166-ab4cf9e51a22';
    $display->content['new-327fd9ab-06ac-4922-b166-ab4cf9e51a22'] = $pane;
    $display->panels['content_bottom'][1] = 'new-327fd9ab-06ac-4922-b166-ab4cf9e51a22';
    $pane = new stdClass();
    $pane->pid = 'new-dac50e2c-e561-42dc-9a80-63f07b7b15be';
    $pane->panel = 'content_bottom';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'dac50e2c-e561-42dc-9a80-63f07b7b15be';
    $display->content['new-dac50e2c-e561-42dc-9a80-63f07b7b15be'] = $pane;
    $display->panels['content_bottom'][2] = 'new-dac50e2c-e561-42dc-9a80-63f07b7b15be';
    $pane = new stdClass();
    $pane->pid = 'new-f7640502-0c04-4470-847d-16a7be294823';
    $pane->panel = 'content_wide';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects-panel_pane_5';
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
    $pane->uuid = 'f7640502-0c04-4470-847d-16a7be294823';
    $display->content['new-f7640502-0c04-4470-847d-16a7be294823'] = $pane;
    $display->panels['content_wide'][0] = 'new-f7640502-0c04-4470-847d-16a7be294823';
    $pane = new stdClass();
    $pane->pid = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
    $pane->panel = 'content_wide';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'register-idea-link',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a2719e64-c746-4d77-9532-7b332a01cc7e';
    $display->content['new-a2719e64-c746-4d77-9532-7b332a01cc7e'] = $pane;
    $display->panels['content_wide'][1] = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_invest__panel_context_59046c9a-bbfa-4057-b736-c6d9f1ba298b';
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
    'css_id' => 'panel-invest',
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
      'middle' => NULL,
      'content' => NULL,
      'content_wide' => NULL,
      'content_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Invest';
  $display->uuid = '4dc07dfb-1b81-4bc1-8f75-f9b9f9196f66';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Learn title',
      'title' => 'Impulsar',
      'body' => '<p>Un emprendimiento prometedor necesita ser impulsado para desarrollar su potencial.</p>',
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
    $pane->uuid = 'c373420a-adfe-4144-8a5b-661dc64d46b5';
    $display->content['new-c373420a-adfe-4144-8a5b-661dc64d46b5'] = $pane;
    $display->panels['content'][0] = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane = new stdClass();
    $pane->pid = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>La generación de una cultura de emprendimiento es clave para el desarrollo económico y social de los países y en nuestro proceso de incubación en comunidad, hemos logrado generar las condiciones para elevar las posibilidades de éxito de emprendimientos por oportunidad que sean creativos, dinámicos y sostenibles. Usted puede ser parte de estos resultados:</p><ul><li>Apoyando financieramente nuestras actividades, mediante nuestro fondo colaborativo.</li><li>Invirtiendo directamente en alguno de los proyectos que incubamos.</li></ul><p>&nbsp;</p><p>Estos son algunos de los proyectos que usted puede apoyar:</p><p>&nbsp;</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6e211677-d73b-434c-a067-83d6f9fe5522';
    $display->content['new-6e211677-d73b-434c-a067-83d6f9fe5522'] = $pane;
    $display->panels['content'][1] = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane = new stdClass();
    $pane->pid = 'new-560ca83e-e589-43c0-963e-8d220bb434a9';
    $pane->panel = 'content';
    $pane->type = 'custom_title_tag';
    $pane->subtype = 'custom_title_tag';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'buttons' => NULL,
      'custom_page_title_pattern' => 'Impulsar | Auge',
      'form_build_id' => 'form-D8WM_eAuF9xbuhQtG0kV8QwFGbf4qhwNySXhwNPYsEM',
      'form_token' => 'dWAZYIJYSyah0F52cDXNd7xmZg_7tn9XM1bmmuAhH04',
      'form_id' => 'panels_custom_title_tag_edit_form',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '560ca83e-e589-43c0-963e-8d220bb434a9';
    $display->content['new-560ca83e-e589-43c0-963e-8d220bb434a9'] = $pane;
    $display->panels['content'][2] = 'new-560ca83e-e589-43c0-963e-8d220bb434a9';
    $pane = new stdClass();
    $pane->pid = 'new-9da39fbf-7648-4dcf-b933-cdf9dee6d7bf';
    $pane->panel = 'content_bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
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
    $pane->uuid = '9da39fbf-7648-4dcf-b933-cdf9dee6d7bf';
    $display->content['new-9da39fbf-7648-4dcf-b933-cdf9dee6d7bf'] = $pane;
    $display->panels['content_bottom'][0] = 'new-9da39fbf-7648-4dcf-b933-cdf9dee6d7bf';
    $pane = new stdClass();
    $pane->pid = 'new-df22c0ab-8c54-4c5d-91f1-1f22e2b15298';
    $pane->panel = 'content_bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'stages-panel_pane_8';
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
    $pane->uuid = 'df22c0ab-8c54-4c5d-91f1-1f22e2b15298';
    $display->content['new-df22c0ab-8c54-4c5d-91f1-1f22e2b15298'] = $pane;
    $display->panels['content_bottom'][1] = 'new-df22c0ab-8c54-4c5d-91f1-1f22e2b15298';
    $pane = new stdClass();
    $pane->pid = 'new-14aa5c1d-9ffa-4f10-8007-2a0161bc238b';
    $pane->panel = 'content_bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'proximas_actividades-panel_pane_12';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '14aa5c1d-9ffa-4f10-8007-2a0161bc238b';
    $display->content['new-14aa5c1d-9ffa-4f10-8007-2a0161bc238b'] = $pane;
    $display->panels['content_bottom'][2] = 'new-14aa5c1d-9ffa-4f10-8007-2a0161bc238b';
    $pane = new stdClass();
    $pane->pid = 'new-f7640502-0c04-4470-847d-16a7be294823';
    $pane->panel = 'content_wide';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects-panel_pane_5';
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
    $pane->uuid = 'f7640502-0c04-4470-847d-16a7be294823';
    $display->content['new-f7640502-0c04-4470-847d-16a7be294823'] = $pane;
    $display->panels['content_wide'][0] = 'new-f7640502-0c04-4470-847d-16a7be294823';
    $pane = new stdClass();
    $pane->pid = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
    $pane->panel = 'content_wide';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'register-idea-link',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a2719e64-c746-4d77-9532-7b332a01cc7e';
    $display->content['new-a2719e64-c746-4d77-9532-7b332a01cc7e'] = $pane;
    $display->panels['content_wide'][1] = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
  $display->hide_title = PANELS_TITLE_NONE;
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
    'css_id' => 'panel-learn',
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
      'middle' => NULL,
      'content' => NULL,
      'content_wide' => NULL,
      'content_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Learn';
  $display->uuid = '4dc07dfb-1b81-4bc1-8f75-f9b9f9196f66';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Learn title',
      'title' => 'Aprender',
      'body' => '<p>¿Tiene una idea? &nbsp;¡Nosotros le ayudamos a validarla y a hacerla realidad!</p>',
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
    $pane->uuid = 'c373420a-adfe-4144-8a5b-661dc64d46b5';
    $display->content['new-c373420a-adfe-4144-8a5b-661dc64d46b5'] = $pane;
    $display->panels['content'][0] = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane = new stdClass();
    $pane->pid = 'new-b95250c8-9aff-49a5-a3d8-546cc47fe32e';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>La correcta identificación del problema o necesidad que se quiere atender, es la base de todo. Las fases azul y amarilla apoyan a todas aquellas personas que tienen una propuesta de solución en mente y necesitan clarificar si ésta responde adecuadamente a lo que se pretende resolver y si es posible hacerla realidad. Para lograrlo, trabajamos con herramientas contextualizadas y efectivas.&nbsp;</p><p>La inmersión en el problema o necesidad que se quiere resolver eleva las posibilidades de éxito de cualquier emprendimiento. En nuestras fases azul y amarilla usted descubrirá la esencia del problema y definirá una solución creativa, ajustada a sus motivaciones y capacidades. También puede aprender y experimentar rápidamente en nuestros FlashLab y Sprint.</p><p>Estos son algunos de los proyectos que han aprendido con nosotros:</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b95250c8-9aff-49a5-a3d8-546cc47fe32e';
    $display->content['new-b95250c8-9aff-49a5-a3d8-546cc47fe32e'] = $pane;
    $display->panels['content'][1] = 'new-b95250c8-9aff-49a5-a3d8-546cc47fe32e';
    $pane = new stdClass();
    $pane->pid = 'new-2c5e3a57-c475-4282-baae-8eb000fadb5b';
    $pane->panel = 'content';
    $pane->type = 'custom_title_tag';
    $pane->subtype = 'custom_title_tag';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'buttons' => NULL,
      'custom_page_title_pattern' => 'Learn | Auge',
      'form_build_id' => 'form-xbMw7de4Kch1rpWbGl_KjMoGrNq-g6i87SC37r7Y44c',
      'form_token' => 'dWAZYIJYSyah0F52cDXNd7xmZg_7tn9XM1bmmuAhH04',
      'form_id' => 'panels_custom_title_tag_edit_form',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2c5e3a57-c475-4282-baae-8eb000fadb5b';
    $display->content['new-2c5e3a57-c475-4282-baae-8eb000fadb5b'] = $pane;
    $display->panels['content'][2] = 'new-2c5e3a57-c475-4282-baae-8eb000fadb5b';
    $pane = new stdClass();
    $pane->pid = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane->panel = 'content_bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Otros servicios</p><p>FlashLab:</p><p>Cursos rápidos, prácticos y experimentales diseñados para emprendedores y &nbsp;colaboradores de empresas o instituciones que quieren desarrollar emprendimientos corporativos o un spin-off. &nbsp;Los Labs son sesiones de 4 horas con un espacio para experimentar y se imparten según demanda. Si desea asistir a uno de nuestros FlashLabs, vea nuestro calendario o comuníquese con nosotros.</p><p>Sprint Auge:</p><p>Competencia de co-creación, diversa, práctica y &nbsp;enfocada que busca desarrollar conocimientos y fomentar habilidades en torno al emprendimiento y la innovación. Como base, se proponen soluciones para un reto planteado por una empresa y organización que patrocina la actividad, utilizando la metodología de Design Thinking &nbsp;como estructura.</p><p>Laboratorio de fabricación para acelerar prototipado:</p><p>La Inventoría es el proyecto con el que nace la Fundación Costa Rica Innova, organización que se incuba en AUGE con el apoyo de FUNDEVI. Mediante una alianza con sus creadores, AUGE ofrece el servicio de acelerar prototipos por medio de la colaboración de activadores del movimiento maker, además de herramientas como impresoras 3D, arduinos, cortadora láser entre otros. Leer más.</p>',
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
    $pane->uuid = '6e211677-d73b-434c-a067-83d6f9fe5522';
    $display->content['new-6e211677-d73b-434c-a067-83d6f9fe5522'] = $pane;
    $display->panels['content_bottom'][0] = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane = new stdClass();
    $pane->pid = 'new-3dd963fb-8e81-4b6f-ab80-318167d42ed7';
    $pane->panel = 'content_bottom';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3dd963fb-8e81-4b6f-ab80-318167d42ed7';
    $display->content['new-3dd963fb-8e81-4b6f-ab80-318167d42ed7'] = $pane;
    $display->panels['content_bottom'][1] = 'new-3dd963fb-8e81-4b6f-ab80-318167d42ed7';
    $pane = new stdClass();
    $pane->pid = 'new-98f40f9a-8e8b-4b08-b65b-f8ad41f871ee';
    $pane->panel = 'content_bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'proximas_actividades-panel_pane_9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '98f40f9a-8e8b-4b08-b65b-f8ad41f871ee';
    $display->content['new-98f40f9a-8e8b-4b08-b65b-f8ad41f871ee'] = $pane;
    $display->panels['content_bottom'][2] = 'new-98f40f9a-8e8b-4b08-b65b-f8ad41f871ee';
    $pane = new stdClass();
    $pane->pid = 'new-aa20a8fc-72fc-4d1b-a08a-a43d3a57c863';
    $pane->panel = 'content_wide';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects-panel_pane_2';
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
    $pane->uuid = 'aa20a8fc-72fc-4d1b-a08a-a43d3a57c863';
    $display->content['new-aa20a8fc-72fc-4d1b-a08a-a43d3a57c863'] = $pane;
    $display->panels['content_wide'][0] = 'new-aa20a8fc-72fc-4d1b-a08a-a43d3a57c863';
    $pane = new stdClass();
    $pane->pid = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
    $pane->panel = 'content_wide';
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
          'class' => 'register-idea-link',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a2719e64-c746-4d77-9532-7b332a01cc7e';
    $display->content['new-a2719e64-c746-4d77-9532-7b332a01cc7e'] = $pane;
    $display->panels['content_wide'][1] = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_learn__panel_context_012ac6e9-fd33-4d91-9700-20dbd6b6b640';
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
    'css_id' => 'panel-learn',
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
      'middle' => NULL,
      'content' => NULL,
      'content_wide' => NULL,
      'content_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Learn';
  $display->uuid = '4dc07dfb-1b81-4bc1-8f75-f9b9f9196f66';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Learn title',
      'title' => 'Aprender',
      'body' => '<p>¿Tiene una idea? &nbsp;¡Nosotros le ayudamos a validarla y a hacerla realidad!</p>',
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
    $pane->uuid = 'c373420a-adfe-4144-8a5b-661dc64d46b5';
    $display->content['new-c373420a-adfe-4144-8a5b-661dc64d46b5'] = $pane;
    $display->panels['content'][0] = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane = new stdClass();
    $pane->pid = 'new-b95250c8-9aff-49a5-a3d8-546cc47fe32e';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>La inmersión en el problema o necesidad que se quiere resolver eleva las posibilidades de éxito de cualquier emprendimiento. En nuestras fases azul y amarilla usted descubrirá la esencia del problema y definirá una solución creativa, ajustada a sus motivaciones y capacidades. También puede aprender y experimentar rápidamente en nuestros FlashLab y Sprint.</p><p>Estos son algunos de los proyectos que han aprendido con nosotros:</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b95250c8-9aff-49a5-a3d8-546cc47fe32e';
    $display->content['new-b95250c8-9aff-49a5-a3d8-546cc47fe32e'] = $pane;
    $display->panels['content'][1] = 'new-b95250c8-9aff-49a5-a3d8-546cc47fe32e';
    $pane = new stdClass();
    $pane->pid = 'new-a91fea8f-5226-48a0-a158-9d0c94695b96';
    $pane->panel = 'content';
    $pane->type = 'custom_title_tag';
    $pane->subtype = 'custom_title_tag';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'buttons' => NULL,
      'custom_page_title_pattern' => 'Aprender | Auge',
      'form_build_id' => 'form-6ggREdhLE5Gu48pvyxFz9wr115jnDYsqgyesDsnzekA',
      'form_token' => 'dWAZYIJYSyah0F52cDXNd7xmZg_7tn9XM1bmmuAhH04',
      'form_id' => 'panels_custom_title_tag_edit_form',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a91fea8f-5226-48a0-a158-9d0c94695b96';
    $display->content['new-a91fea8f-5226-48a0-a158-9d0c94695b96'] = $pane;
    $display->panels['content'][2] = 'new-a91fea8f-5226-48a0-a158-9d0c94695b96';
    $pane = new stdClass();
    $pane->pid = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane->panel = 'content_bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p><strong>Otros servicios</strong></p><p><strong>FlashLab:</strong></p><p>Cursos rápidos, prácticos y experimentales diseñados para emprendedores y &nbsp;colaboradores de empresas o instituciones que quieren desarrollar emprendimientos corporativos o un spin-off. &nbsp;Los Labs son sesiones de 4 horas con un espacio para experimentar y se imparten según demanda. Si desea asistir a uno de nuestros FlashLabs, vea nuestro calendario o comuníquese con nosotros.</p><p>&nbsp;</p><p><strong>Sprint Auge:</strong></p><p>Competencia de co-creación, diversa, práctica y &nbsp;enfocada que busca desarrollar conocimientos y fomentar habilidades en torno al emprendimiento y la innovación. Como base, se proponen soluciones para un reto planteado por una empresa y organización que patrocina la actividad, utilizando la metodología de Design Thinking &nbsp;como estructura.</p><p>&nbsp;</p><p><strong>Laboratorio de fabricación para acelerar prototipado:</strong></p><p><em>La Inventoría</em> es el proyecto con el que nace la Fundación Costa Rica Innova, organización que se incuba en AUGE con el apoyo de FUNDEVI. Mediante una alianza con sus creadores, AUGE ofrece el servicio de acelerar prototipos por medio de la colaboración de activadores del movimiento maker, además de herramientas como impresoras 3D, arduinos, cortadora láser entre otros. <a target="_blank" href="https://www.facebook.com/inventoria/?fref=ts">Leer más</a>.</p>',
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
    $pane->uuid = '6e211677-d73b-434c-a067-83d6f9fe5522';
    $display->content['new-6e211677-d73b-434c-a067-83d6f9fe5522'] = $pane;
    $display->panels['content_bottom'][0] = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane = new stdClass();
    $pane->pid = 'new-b810fa0c-9ff7-48c7-81b8-5269ee6dd833';
    $pane->panel = 'content_bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'stages-panel_pane_5';
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
    $pane->uuid = 'b810fa0c-9ff7-48c7-81b8-5269ee6dd833';
    $display->content['new-b810fa0c-9ff7-48c7-81b8-5269ee6dd833'] = $pane;
    $display->panels['content_bottom'][1] = 'new-b810fa0c-9ff7-48c7-81b8-5269ee6dd833';
    $pane = new stdClass();
    $pane->pid = 'new-a56e6d41-a4e0-4f52-9cdb-124955b07871';
    $pane->panel = 'content_bottom';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a56e6d41-a4e0-4f52-9cdb-124955b07871';
    $display->content['new-a56e6d41-a4e0-4f52-9cdb-124955b07871'] = $pane;
    $display->panels['content_bottom'][2] = 'new-a56e6d41-a4e0-4f52-9cdb-124955b07871';
    $pane = new stdClass();
    $pane->pid = 'new-aa20a8fc-72fc-4d1b-a08a-a43d3a57c863';
    $pane->panel = 'content_wide';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects-panel_pane_2';
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
    $pane->uuid = 'aa20a8fc-72fc-4d1b-a08a-a43d3a57c863';
    $display->content['new-aa20a8fc-72fc-4d1b-a08a-a43d3a57c863'] = $pane;
    $display->panels['content_wide'][0] = 'new-aa20a8fc-72fc-4d1b-a08a-a43d3a57c863';
    $pane = new stdClass();
    $pane->pid = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
    $pane->panel = 'content_wide';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'register-idea-link',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a2719e64-c746-4d77-9532-7b332a01cc7e';
    $display->content['new-a2719e64-c746-4d77-9532-7b332a01cc7e'] = $pane;
    $display->panels['content_wide'][1] = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
  $display->hide_title = PANELS_TITLE_NONE;
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
    'css_id' => 'panel-mentor',
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
      'middle' => NULL,
      'content' => NULL,
      'content_wide' => NULL,
      'content_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Mentor';
  $display->uuid = '4dc07dfb-1b81-4bc1-8f75-f9b9f9196f66';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Mentor title',
      'title' => 'Acompañar',
      'body' => '<p>Durante el proceso en AUGE, empresarios, emprendedores y académicos experimentados orientan a los equipos emprendedores.</p>',
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
    $pane->uuid = 'c373420a-adfe-4144-8a5b-661dc64d46b5';
    $display->content['new-c373420a-adfe-4144-8a5b-661dc64d46b5'] = $pane;
    $display->panels['content'][0] = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane = new stdClass();
    $pane->pid = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>¿Desea ser parte de una red de interacción, experiencias y crecimiento orientada a la innovación? Le invitamos a ser parte de nuestro equipo de asesoría y mentoría, para:</p><p>Consolidar el éxito de las iniciativas incubadas en AUGE, mediante la transferencia de conocimientos y consejos de expertos desde sus primeras etapas de desarrollo.<br>Enriquecer el proceso de toma de decisiones tanto para emprendedores como mentores, &nbsp;por medio del intercambio de conocimiento entre los miembros de la red.<br>Fortalecer en el tejido empresarial costarricense valiéndose de la filosofía de la economía colaborativa como medio para el desarrollo inclusivo y sostenible del país.</p><p>¿Le interesa contribuir? (link al formulario)<br>Estos son algunos de nuestros mentores y mentoras:<br>(escogidos)</p><p>Ver todos (lista completa de personas)</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6e211677-d73b-434c-a067-83d6f9fe5522';
    $display->content['new-6e211677-d73b-434c-a067-83d6f9fe5522'] = $pane;
    $display->panels['content'][1] = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane = new stdClass();
    $pane->pid = 'new-ba187ff6-bead-4394-a001-796179d57417';
    $pane->panel = 'content';
    $pane->type = 'custom_title_tag';
    $pane->subtype = 'custom_title_tag';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'buttons' => NULL,
      'custom_page_title_pattern' => 'Mentor | Auge',
      'form_build_id' => 'form-B82OGqVk0-0KG9Rrgu50wMqqEhvbs8o34ibycifj6pk',
      'form_token' => 'dWAZYIJYSyah0F52cDXNd7xmZg_7tn9XM1bmmuAhH04',
      'form_id' => 'panels_custom_title_tag_edit_form',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ba187ff6-bead-4394-a001-796179d57417';
    $display->content['new-ba187ff6-bead-4394-a001-796179d57417'] = $pane;
    $display->panels['content'][2] = 'new-ba187ff6-bead-4394-a001-796179d57417';
    $pane = new stdClass();
    $pane->pid = 'new-8bbc8692-ef04-422e-84bd-4974b0c6e3a1';
    $pane->panel = 'content_bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
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
    $pane->uuid = '8bbc8692-ef04-422e-84bd-4974b0c6e3a1';
    $display->content['new-8bbc8692-ef04-422e-84bd-4974b0c6e3a1'] = $pane;
    $display->panels['content_bottom'][0] = 'new-8bbc8692-ef04-422e-84bd-4974b0c6e3a1';
    $pane = new stdClass();
    $pane->pid = 'new-2b43453f-86aa-4c62-b052-f970e6f7bb49';
    $pane->panel = 'content_bottom';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2b43453f-86aa-4c62-b052-f970e6f7bb49';
    $display->content['new-2b43453f-86aa-4c62-b052-f970e6f7bb49'] = $pane;
    $display->panels['content_bottom'][1] = 'new-2b43453f-86aa-4c62-b052-f970e6f7bb49';
    $pane = new stdClass();
    $pane->pid = 'new-b72a93a6-20e4-4699-9521-4558a9764c6b';
    $pane->panel = 'content_bottom';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b72a93a6-20e4-4699-9521-4558a9764c6b';
    $display->content['new-b72a93a6-20e4-4699-9521-4558a9764c6b'] = $pane;
    $display->panels['content_bottom'][2] = 'new-b72a93a6-20e4-4699-9521-4558a9764c6b';
    $pane = new stdClass();
    $pane->pid = 'new-3f0965ee-a6e0-4b53-b5c7-ea4775546c13';
    $pane->panel = 'content_wide';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects-panel_pane_4';
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
    $pane->uuid = '3f0965ee-a6e0-4b53-b5c7-ea4775546c13';
    $display->content['new-3f0965ee-a6e0-4b53-b5c7-ea4775546c13'] = $pane;
    $display->panels['content_wide'][0] = 'new-3f0965ee-a6e0-4b53-b5c7-ea4775546c13';
    $pane = new stdClass();
    $pane->pid = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
    $pane->panel = 'content_wide';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'register-idea-link',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a2719e64-c746-4d77-9532-7b332a01cc7e';
    $display->content['new-a2719e64-c746-4d77-9532-7b332a01cc7e'] = $pane;
    $display->panels['content_wide'][1] = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_mentor__panel_context_c4ee4fc8-8cd5-4ef0-996d-4294b24738b9';
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
    'css_id' => 'panel-mentor',
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
      'middle' => NULL,
      'content' => NULL,
      'content_wide' => NULL,
      'content_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Mentor';
  $display->uuid = '4dc07dfb-1b81-4bc1-8f75-f9b9f9196f66';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Mentor title',
      'title' => 'Acompañar',
      'body' => '<p>Durante el proceso en AUGE, experimentadas personas empresarias, emprendedoras y del sector académico&nbsp;orientan a los equipos emprendedores.</p>',
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
    $pane->uuid = 'c373420a-adfe-4144-8a5b-661dc64d46b5';
    $display->content['new-c373420a-adfe-4144-8a5b-661dc64d46b5'] = $pane;
    $display->panels['content'][0] = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
    $pane = new stdClass();
    $pane->pid = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>¿Desea ser parte de una red de interacción, experiencias y crecimiento orientada a la innovación? Le invitamos a ser parte de nuestro equipo Warp, para:</p><p>Consolidar el éxito de las iniciativas incubadas en AUGE, mediante la transferencia de conocimientos y consejos de expertos desde sus primeras etapas de desarrollo.<br>Enriquecer el proceso de toma de decisiones tanto para emprendedores como mentores, &nbsp;por medio del intercambio de conocimiento entre los miembros de la red.<br>Fortalecer en el tejido empresarial costarricense valiéndose de la filosofía de la economía colaborativa como medio para el desarrollo inclusivo y sostenible del país.</p><p>¿Le interesa contribuir? (link al formulario)<br>Estos son algunos de nuestros mentores y mentoras:</p><p>Ver todos (lista completa de personas)</p>',
      'format' => 'manati_texto_formato',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6e211677-d73b-434c-a067-83d6f9fe5522';
    $display->content['new-6e211677-d73b-434c-a067-83d6f9fe5522'] = $pane;
    $display->panels['content'][1] = 'new-6e211677-d73b-434c-a067-83d6f9fe5522';
    $pane = new stdClass();
    $pane->pid = 'new-e40175b4-4d52-44b4-bc1f-88fc14085b90';
    $pane->panel = 'content';
    $pane->type = 'custom_title_tag';
    $pane->subtype = 'custom_title_tag';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'buttons' => NULL,
      'custom_page_title_pattern' => 'Acompañar | Auge',
      'form_build_id' => 'form-2xh1EPnsMhW5sObaUOG2iRDmTlsulhiZB6J532dCeYg',
      'form_token' => 'dWAZYIJYSyah0F52cDXNd7xmZg_7tn9XM1bmmuAhH04',
      'form_id' => 'panels_custom_title_tag_edit_form',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e40175b4-4d52-44b4-bc1f-88fc14085b90';
    $display->content['new-e40175b4-4d52-44b4-bc1f-88fc14085b90'] = $pane;
    $display->panels['content'][2] = 'new-e40175b4-4d52-44b4-bc1f-88fc14085b90';
    $pane = new stdClass();
    $pane->pid = 'new-7db68eb3-9e04-46e7-b574-003b590244dc';
    $pane->panel = 'content_bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
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
    $pane->uuid = '7db68eb3-9e04-46e7-b574-003b590244dc';
    $display->content['new-7db68eb3-9e04-46e7-b574-003b590244dc'] = $pane;
    $display->panels['content_bottom'][0] = 'new-7db68eb3-9e04-46e7-b574-003b590244dc';
    $pane = new stdClass();
    $pane->pid = 'new-54a7ccad-b308-4b23-a319-d3b4497211ed';
    $pane->panel = 'content_bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'stages-panel_pane_7';
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
    $pane->uuid = '54a7ccad-b308-4b23-a319-d3b4497211ed';
    $display->content['new-54a7ccad-b308-4b23-a319-d3b4497211ed'] = $pane;
    $display->panels['content_bottom'][1] = 'new-54a7ccad-b308-4b23-a319-d3b4497211ed';
    $pane = new stdClass();
    $pane->pid = 'new-71cbd775-e8d7-44fa-919c-1b675a78cf8b';
    $pane->panel = 'content_bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'proximas_actividades-panel_pane_11';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '71cbd775-e8d7-44fa-919c-1b675a78cf8b';
    $display->content['new-71cbd775-e8d7-44fa-919c-1b675a78cf8b'] = $pane;
    $display->panels['content_bottom'][2] = 'new-71cbd775-e8d7-44fa-919c-1b675a78cf8b';
    $pane = new stdClass();
    $pane->pid = 'new-3f0965ee-a6e0-4b53-b5c7-ea4775546c13';
    $pane->panel = 'content_wide';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects-panel_pane_4';
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
    $pane->uuid = '3f0965ee-a6e0-4b53-b5c7-ea4775546c13';
    $display->content['new-3f0965ee-a6e0-4b53-b5c7-ea4775546c13'] = $pane;
    $display->panels['content_wide'][0] = 'new-3f0965ee-a6e0-4b53-b5c7-ea4775546c13';
    $pane = new stdClass();
    $pane->pid = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
    $pane->panel = 'content_wide';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'register-idea-link',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a2719e64-c746-4d77-9532-7b332a01cc7e';
    $display->content['new-a2719e64-c746-4d77-9532-7b332a01cc7e'] = $pane;
    $display->panels['content_wide'][1] = 'new-a2719e64-c746-4d77-9532-7b332a01cc7e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-c373420a-adfe-4144-8a5b-661dc64d46b5';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['mentor'] = $page;

  return $pages;

}
