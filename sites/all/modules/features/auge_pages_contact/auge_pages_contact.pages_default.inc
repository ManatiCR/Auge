<?php
/**
 * @file
 * auge_pages_contact.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function auge_pages_contact_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_contact_form_example__panel_context_667e5647-0592-4701-bee9-02e481c0f18b';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'contact_form_example';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Contact',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
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
  $display->uuid = '6a7b1a9c-367d-40f7-9445-04c521f5bd23';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1a3c2c38-5df5-43bb-be5b-a3d9479ba2c7';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Contacto',
      'body' => '<p><strong>​Campus Rodrigo Facio, UCR.</strong></p><p>"Casa emprendedora María Teresa Obregón", 100 meters east and 100 north from the "Fuente de la Hispanidad", San Pedro, San José.</p><p><strong>Phone:</strong></p><p>+506 2511-1334</p><p><strong>Contact:</strong></p><p><a href="mailto:luisalonso@augeucr.com">luisalonso@augeucr.com</a></p>',
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
    $pane->uuid = '1a3c2c38-5df5-43bb-be5b-a3d9479ba2c7';
    $display->content['new-1a3c2c38-5df5-43bb-be5b-a3d9479ba2c7'] = $pane;
    $display->panels['left'][0] = 'new-1a3c2c38-5df5-43bb-be5b-a3d9479ba2c7';
    $pane = new stdClass();
    $pane->pid = 'new-a9285c9a-b7ab-41d5-8ff0-9f53e634a325';
    $pane->panel = 'right';
    $pane->type = 'pm_existing_pages';
    $pane->subtype = 'pm_existing_pages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      0 => 'task_id',
      'task_id' => 'contact_form_example',
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
    $pane->uuid = 'a9285c9a-b7ab-41d5-8ff0-9f53e634a325';
    $display->content['new-a9285c9a-b7ab-41d5-8ff0-9f53e634a325'] = $pane;
    $display->panels['right'][0] = 'new-a9285c9a-b7ab-41d5-8ff0-9f53e634a325';
    $pane = new stdClass();
    $pane->pid = 'new-b773e9da-64fc-4ce2-abb9-625fa57ac4b6';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b773e9da-64fc-4ce2-abb9-625fa57ac4b6';
    $display->content['new-b773e9da-64fc-4ce2-abb9-625fa57ac4b6'] = $pane;
    $display->panels['top'][0] = 'new-b773e9da-64fc-4ce2-abb9-625fa57ac4b6';
    $pane = new stdClass();
    $pane->pid = 'new-699dc935-e310-438c-ac24-b92ddee9ec58';
    $pane->panel = 'top';
    $pane->type = 'custom_title_tag';
    $pane->subtype = 'custom_title_tag';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'buttons' => NULL,
      'custom_page_title_pattern' => 'Contact | Auge',
      'form_build_id' => 'form-nU2kXnAvgzz2y88SV6RPfh76W7pVqUTOVacvgvdh8Ic',
      'form_token' => 'dWAZYIJYSyah0F52cDXNd7xmZg_7tn9XM1bmmuAhH04',
      'form_id' => 'panels_custom_title_tag_edit_form',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '699dc935-e310-438c-ac24-b92ddee9ec58';
    $display->content['new-699dc935-e310-438c-ac24-b92ddee9ec58'] = $pane;
    $display->panels['top'][1] = 'new-699dc935-e310-438c-ac24-b92ddee9ec58';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_contact_form_example__panel_context_667e5647-0592-4701-bee9-02e481c0f18b'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_contact_form_example__panel_context_c14043ba-c684-4238-b34d-4ccb3e41f7d5';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'contact_form_example';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Contacto',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
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
  $display->uuid = '6a7b1a9c-367d-40f7-9445-04c521f5bd23';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1a3c2c38-5df5-43bb-be5b-a3d9479ba2c7';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p><strong>​Campus Rodrigo Facio, UCR.</strong></p><p>Casa emprendedora María Teresa Obregón, 100 metros este y 125 norte de la Fuente de la Hispanidad, San Pedro de Montes de Oca, San José.</p><p><strong>Teléfono:</strong></p><p>+506 2511-1334</p><p><strong>Contactenos:</strong></p><p><a href="mailto:luisalonso@augeucr.com">info@augeucr.com</a></p><p>&nbsp;</p>

<a href="https://www.facebook.com/augeucr" class="facebook-icon header-facebook-icon header-icons">Facebook</a><a href="https://twitter.com/augeucr" class="twitter-icon header-icons">Twitter</a><a href="https://www.linkedin.com/company/10397558" class="linkedin-icon header-icons">LinkedIn</a>',
      'format' => 'full_html',
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
    $pane->uuid = '1a3c2c38-5df5-43bb-be5b-a3d9479ba2c7';
    $display->content['new-1a3c2c38-5df5-43bb-be5b-a3d9479ba2c7'] = $pane;
    $display->panels['left'][0] = 'new-1a3c2c38-5df5-43bb-be5b-a3d9479ba2c7';
    $pane = new stdClass();
    $pane->pid = 'new-a9285c9a-b7ab-41d5-8ff0-9f53e634a325';
    $pane->panel = 'right';
    $pane->type = 'pm_existing_pages';
    $pane->subtype = 'pm_existing_pages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      0 => 'task_id',
      'task_id' => 'contact_form_example',
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
    $pane->uuid = 'a9285c9a-b7ab-41d5-8ff0-9f53e634a325';
    $display->content['new-a9285c9a-b7ab-41d5-8ff0-9f53e634a325'] = $pane;
    $display->panels['right'][0] = 'new-a9285c9a-b7ab-41d5-8ff0-9f53e634a325';
    $pane = new stdClass();
    $pane->pid = 'new-b773e9da-64fc-4ce2-abb9-625fa57ac4b6';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mlpanels' => array(
        'und' => array(
          'admin_title' => '',
          'title' => '',
          'body' => '<iframe src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d3929.9980972587323!2d-84.05623558520637!3d9.934115492896357!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x8fa0e3814bdd8863%3A0x5dd54906ccb903dd!2sCasa+Emprendedora+Mar%C3%ADa+Teresa+Obreg%C3%B3n!5e0!3m2!1ses!2scr!4v1453757697651" width="600" height="450" frameborder="0" style="border:0" allowfullscreen></iframe>',
          'format' => 'full_html',
          'substitute' => TRUE,
        ),
      ),
      'admin_title' => '',
      'title' => '',
      'body' => '<iframe src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d3929.9980972587323!2d-84.05623558520637!3d9.934115492896357!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x8fa0e3814bdd8863%3A0x5dd54906ccb903dd!2sCasa+Emprendedora+Mar%C3%ADa+Teresa+Obreg%C3%B3n!5e0!3m2!1ses!2scr!4v1453757697651" width="600" height="450" frameborder="0" style="border:0" allowfullscreen></iframe>',
      'format' => 'full_html',
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
    $pane->uuid = 'b773e9da-64fc-4ce2-abb9-625fa57ac4b6';
    $display->content['new-b773e9da-64fc-4ce2-abb9-625fa57ac4b6'] = $pane;
    $display->panels['top'][0] = 'new-b773e9da-64fc-4ce2-abb9-625fa57ac4b6';
    $pane = new stdClass();
    $pane->pid = 'new-094601e2-b3fb-440d-bbcc-eb2d369ccb35';
    $pane->panel = 'top';
    $pane->type = 'custom_title_tag';
    $pane->subtype = 'custom_title_tag';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mlpanels' => array(
        'und' => array(
          'buttons' => NULL,
          'custom_page_title_pattern' => 'Contacto | Auge',
          'form_build_id' => 'form-Z6UEsO3pXCEvD_XLK6PAZGqPN_s-YV4F0WvzZvSZoWM',
          'form_token' => '5Ev2Nq2FiI4W-zDuZRLjt9J-JigmgejXorCZznagfPw',
          'form_id' => 'panels_custom_title_tag_edit_form',
        ),
      ),
      'buttons' => NULL,
      'custom_page_title_pattern' => 'Contacto | Auge',
      'form_build_id' => 'form-Z6UEsO3pXCEvD_XLK6PAZGqPN_s-YV4F0WvzZvSZoWM',
      'form_token' => '5Ev2Nq2FiI4W-zDuZRLjt9J-JigmgejXorCZznagfPw',
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
    $pane->uuid = '094601e2-b3fb-440d-bbcc-eb2d369ccb35';
    $display->content['new-094601e2-b3fb-440d-bbcc-eb2d369ccb35'] = $pane;
    $display->panels['top'][1] = 'new-094601e2-b3fb-440d-bbcc-eb2d369ccb35';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_contact_form_example__panel_context_c14043ba-c684-4238-b34d-4ccb3e41f7d5'] = $handler;

  return $export;
}
