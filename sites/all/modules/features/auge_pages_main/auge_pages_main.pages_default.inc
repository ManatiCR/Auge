<?php
/**
 * @file
 * auge_pages_main.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function auge_pages_main_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'main';
  $page->task = 'page';
  $page->admin_title = 'Main';
  $page->admin_description = 'Main page of the site';
  $page->path = 'home';
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
  $handler->name = 'page_main__panel_context_adb68a92-c80e-49b0-a21f-f21c6e0f9363';
  $handler->task = 'page';
  $handler->subtask = 'main';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Home',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'panel-front-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
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
  $display->layout = 'panels-one-col-fullwidth';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'content' => array(
        'separator' => array(
          'active' => 1,
          'element_type' => 'div',
          'show_css' => 1,
          'element_class' => 'baby-pandas-bitches',
        ),
      ),
    ),
    'content' => array(
      'style' => 'semantic_panels',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4e5f7cfd-287b-4dc6-8c79-1a60c0dcbfc7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a0314d1a-3282-41c4-b311-ca2e28fd2ee2';
    $pane->panel = 'content';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '578',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
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
    $pane->uuid = 'a0314d1a-3282-41c4-b311-ca2e28fd2ee2';
    $display->content['new-a0314d1a-3282-41c4-b311-ca2e28fd2ee2'] = $pane;
    $display->panels['content'][0] = 'new-a0314d1a-3282-41c4-b311-ca2e28fd2ee2';
    $pane = new stdClass();
    $pane->pid = 'new-570ec310-58e2-4a70-bfc5-50128800ff15';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Aprender',
      'body' => '<p>¿Tiene una idea? &nbsp;¡Nosotros le ayudamos a validarla y a hacerla realidadl!</p><a href="/en/learn" class="front-page-button">Aprenda con AUGE</a><div class="panel-front-page-boxes-learn-image"></div>',
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
          'class' => 'panel-front-page-boxes panel-front-page-boxes-learn',
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
    $pane->uuid = '570ec310-58e2-4a70-bfc5-50128800ff15';
    $display->content['new-570ec310-58e2-4a70-bfc5-50128800ff15'] = $pane;
    $display->panels['content'][1] = 'new-570ec310-58e2-4a70-bfc5-50128800ff15';
    $pane = new stdClass();
    $pane->pid = 'new-485314f2-ba95-4d20-a989-2734e7cf49b9';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Emprender',
      'body' => '<p>¿Necesita desarrollar y probar su Producto Mínimo Viable? ¡Ingrese a nuestro proceso de incubación!</p><a href="/en/entrepreneur">Incube su emprendimiento en AUGE</a><div class="panel-front-page-boxes-entrepreneur-image"></div>',
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
          'class' => 'panel-front-page-boxes panel-front-page-boxes-entrepreneur',
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
    $pane->uuid = '485314f2-ba95-4d20-a989-2734e7cf49b9';
    $display->content['new-485314f2-ba95-4d20-a989-2734e7cf49b9'] = $pane;
    $display->panels['content'][2] = 'new-485314f2-ba95-4d20-a989-2734e7cf49b9';
    $pane = new stdClass();
    $pane->pid = 'new-3cfb8f53-ac00-4f46-9293-1f7e146efdbe';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Acompañar',
      'body' => '<p>Durante todo el proceso en AUGE, empresarios y académicos experimentados orientan a los equipos emprendedores.</p><a href="/en/mentor">Conozca a nuestra red de mentoría y asesoría</a><div class="panel-front-page-boxes-mentor-image"></div>',
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
          'class' => 'panel-front-page-boxes panel-front-page-boxes-mentor',
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
    $pane->uuid = '3cfb8f53-ac00-4f46-9293-1f7e146efdbe';
    $display->content['new-3cfb8f53-ac00-4f46-9293-1f7e146efdbe'] = $pane;
    $display->panels['content'][3] = 'new-3cfb8f53-ac00-4f46-9293-1f7e146efdbe';
    $pane = new stdClass();
    $pane->pid = 'new-154950ff-e8cb-4792-baab-573fa74dfc3c';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Invertir',
      'body' => '<p>Una emprendimiento prometedor requiere merece capital para desarrollar su potencial.</p><a href="/en/invest">Invierta en los emprendimientos AUGE o ayúdenos a financiar nuestras actividades</a><div class="panel-front-page-boxes-invest-image"></div>',
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
          'class' => 'panel-front-page-boxes panel-front-page-boxes-invest',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '154950ff-e8cb-4792-baab-573fa74dfc3c';
    $display->content['new-154950ff-e8cb-4792-baab-573fa74dfc3c'] = $pane;
    $display->panels['content'][4] = 'new-154950ff-e8cb-4792-baab-573fa74dfc3c';
    $pane = new stdClass();
    $pane->pid = 'new-b61defc4-8fec-4d04-b538-781dd7446cd6';
    $pane->panel = 'content';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '579',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
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
    $pane->uuid = 'b61defc4-8fec-4d04-b538-781dd7446cd6';
    $display->content['new-b61defc4-8fec-4d04-b538-781dd7446cd6'] = $pane;
    $display->panels['content'][5] = 'new-b61defc4-8fec-4d04-b538-781dd7446cd6';
    $pane = new stdClass();
    $pane->pid = 'new-c31881bd-7a22-4917-892d-fa7a300887f3';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
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
          'type' => '',
          'class_enable' => 1,
          'class' => 'panel-front-page-boxes-projects',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'c31881bd-7a22-4917-892d-fa7a300887f3';
    $display->content['new-c31881bd-7a22-4917-892d-fa7a300887f3'] = $pane;
    $display->panels['content'][6] = 'new-c31881bd-7a22-4917-892d-fa7a300887f3';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_main__panel_context_34314da4-9cde-40e8-b969-65386e665f71';
  $handler->task = 'page';
  $handler->subtask = 'main';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Home Spanish',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'panel-front-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'panels-one-col-fullwidth';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'content' => array(
        'separator' => array(
          'active' => 1,
          'element_type' => 'div',
          'show_css' => 1,
          'element_class' => '',
        ),
      ),
    ),
    'content' => array(
      'style' => 'semantic_panels',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4e5f7cfd-287b-4dc6-8c79-1a60c0dcbfc7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a0314d1a-3282-41c4-b311-ca2e28fd2ee2';
    $pane->panel = 'content';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '578',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'front-page-top',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a0314d1a-3282-41c4-b311-ca2e28fd2ee2';
    $display->content['new-a0314d1a-3282-41c4-b311-ca2e28fd2ee2'] = $pane;
    $display->panels['content'][0] = 'new-a0314d1a-3282-41c4-b311-ca2e28fd2ee2';
    $pane = new stdClass();
    $pane->pid = 'new-570ec310-58e2-4a70-bfc5-50128800ff15';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Aprender',
      'body' => '<p>¿Tiene una idea? &nbsp;¡Nosotros le ayudamos a validarla y a hacerla realidadl!</p><a href="/es/aprender" class="front-page-button">Aprenda con AUGE</a><div class="panel-front-page-boxes-learn-image"></div>',
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
          'class' => 'panel-front-page-boxes panel-front-page-boxes-learn',
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
    $pane->uuid = '570ec310-58e2-4a70-bfc5-50128800ff15';
    $display->content['new-570ec310-58e2-4a70-bfc5-50128800ff15'] = $pane;
    $display->panels['content'][1] = 'new-570ec310-58e2-4a70-bfc5-50128800ff15';
    $pane = new stdClass();
    $pane->pid = 'new-485314f2-ba95-4d20-a989-2734e7cf49b9';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Incubarse',
      'body' => '<p>¿Decidieron dedicarse a su emprendimiento? ¿Tienen un producto o servicio validado y el equipo para gestionar una Empresa Mínima Viable? ¡Ingresen a nuestro proceso de incubación en comunidad!</p><a href="/es/incubarse">Incube su emprendimiento en AUGE</a><div class="panel-front-page-boxes-entrepreneur-image"></div>',
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
          'class' => 'panel-front-page-boxes panel-front-page-boxes-entrepreneur',
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
    $pane->uuid = '485314f2-ba95-4d20-a989-2734e7cf49b9';
    $display->content['new-485314f2-ba95-4d20-a989-2734e7cf49b9'] = $pane;
    $display->panels['content'][2] = 'new-485314f2-ba95-4d20-a989-2734e7cf49b9';
    $pane = new stdClass();
    $pane->pid = 'new-3cfb8f53-ac00-4f46-9293-1f7e146efdbe';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Acompañar',
      'body' => '<p>¿Tiene usted conocimientos y experiencias para apoyar a nuestros equipos emprendedores? ¡Únase al equipo Warp!</p><a href="/es/acompanar">Conozca más</a><div class="panel-front-page-boxes-mentor-image"></div>',
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
          'class' => 'panel-front-page-boxes panel-front-page-boxes-mentor',
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
    $pane->uuid = '3cfb8f53-ac00-4f46-9293-1f7e146efdbe';
    $display->content['new-3cfb8f53-ac00-4f46-9293-1f7e146efdbe'] = $pane;
    $display->panels['content'][3] = 'new-3cfb8f53-ac00-4f46-9293-1f7e146efdbe';
    $pane = new stdClass();
    $pane->pid = 'new-154950ff-e8cb-4792-baab-573fa74dfc3c';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Impulsar',
      'body' => '<p>¿Quiere participar e impulsar emprendimientos prometedores para que desarrollen todo su potencial? ¡Aporte a nuestras iniciativas!</p>
<a href="/es/impulsar">Conozca nuestro programa de fondos</a>
<div class="panel-front-page-boxes-invest-image"></div>',
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
          'class' => 'panel-front-page-boxes panel-front-page-boxes-invest',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '154950ff-e8cb-4792-baab-573fa74dfc3c';
    $display->content['new-154950ff-e8cb-4792-baab-573fa74dfc3c'] = $pane;
    $display->panels['content'][4] = 'new-154950ff-e8cb-4792-baab-573fa74dfc3c';
    $pane = new stdClass();
    $pane->pid = 'new-b61defc4-8fec-4d04-b538-781dd7446cd6';
    $pane->panel = 'content';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '579',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'front-page-bottom',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'b61defc4-8fec-4d04-b538-781dd7446cd6';
    $display->content['new-b61defc4-8fec-4d04-b538-781dd7446cd6'] = $pane;
    $display->panels['content'][5] = 'new-b61defc4-8fec-4d04-b538-781dd7446cd6';
    $pane = new stdClass();
    $pane->pid = 'new-c31881bd-7a22-4917-892d-fa7a300887f3';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
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
          'type' => '',
          'class_enable' => 1,
          'class' => 'panel-front-page-boxes-projects',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'c31881bd-7a22-4917-892d-fa7a300887f3';
    $display->content['new-c31881bd-7a22-4917-892d-fa7a300887f3'] = $pane;
    $display->panels['content'][6] = 'new-c31881bd-7a22-4917-892d-fa7a300887f3';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages[''] = $page;

  return $pages;

}
