<?php
/**
 * @file
 * auge_contexts.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function auge_contexts_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'clone_of_contact';
  $mini->category = '';
  $mini->admin_title = 'Contact Spanish';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->title = 'Contacto';
  $display->uuid = 'ea378fcb-609e-4068-b8d0-735e697ccdb3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e13dd834-a66c-4a8e-a716-561abae8c871';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-social-links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'e13dd834-a66c-4a8e-a716-561abae8c871';
    $display->content['new-e13dd834-a66c-4a8e-a716-561abae8c871'] = $pane;
    $display->panels['middle'][0] = 'new-e13dd834-a66c-4a8e-a716-561abae8c871';
    $pane = new stdClass();
    $pane->pid = 'new-2b653891-0aa9-45d4-8419-d87cbbb22647';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'auge_custom_blocks-contact_information_spanish';
    $pane->shown = FALSE;
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
    $pane->uuid = '2b653891-0aa9-45d4-8419-d87cbbb22647';
    $display->content['new-2b653891-0aa9-45d4-8419-d87cbbb22647'] = $pane;
    $display->panels['middle'][1] = 'new-2b653891-0aa9-45d4-8419-d87cbbb22647';
    $pane = new stdClass();
    $pane->pid = 'new-bcc42936-d3f2-4825-8efb-57c9794c343f';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>​Campus Rodrigo Facio, UCR.</p><p>Casa emprendedora María Teresa Obregón, 100 metros este y 100 norte de la Fuente de la Hispanidad, San Pedro, San José.</p><p>Teléfono:</p><p>+506 2511-1334</p><p><a href="/contacto">Contáctenos</a></p>',
      'format' => 'full_html',
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
    $pane->uuid = 'bcc42936-d3f2-4825-8efb-57c9794c343f';
    $display->content['new-bcc42936-d3f2-4825-8efb-57c9794c343f'] = $pane;
    $display->panels['middle'][2] = 'new-bcc42936-d3f2-4825-8efb-57c9794c343f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['clone_of_contact'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'contact';
  $mini->category = '';
  $mini->admin_title = 'Contact English';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->title = 'Contact';
  $display->uuid = 'ea378fcb-609e-4068-b8d0-735e697ccdb3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e13dd834-a66c-4a8e-a716-561abae8c871';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-social-links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'e13dd834-a66c-4a8e-a716-561abae8c871';
    $display->content['new-e13dd834-a66c-4a8e-a716-561abae8c871'] = $pane;
    $display->panels['middle'][0] = 'new-e13dd834-a66c-4a8e-a716-561abae8c871';
    $pane = new stdClass();
    $pane->pid = 'new-9ff572bb-ee3f-492b-b49d-f508ca22468d';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'auge_custom_blocks-contact_information';
    $pane->shown = FALSE;
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
    $pane->uuid = '9ff572bb-ee3f-492b-b49d-f508ca22468d';
    $display->content['new-9ff572bb-ee3f-492b-b49d-f508ca22468d'] = $pane;
    $display->panels['middle'][1] = 'new-9ff572bb-ee3f-492b-b49d-f508ca22468d';
    $pane = new stdClass();
    $pane->pid = 'new-fb1defbf-b16a-4a5f-b923-81c8f628d1c0';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>​Campus Rodrigo Facio, UCR.</p><p>"Casa emprendedora María Teresa Obregón", 100 meters east and 100 north from the "Fuente de la Hispanidad", San Pedro, San José.</p><p>Phone:</p><p>+506 2511-1334</p><a href="/contacto">Contact us</a>',
      'format' => 'full_html',
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
    $pane->uuid = 'fb1defbf-b16a-4a5f-b923-81c8f628d1c0';
    $display->content['new-fb1defbf-b16a-4a5f-b923-81c8f628d1c0'] = $pane;
    $display->panels['middle'][2] = 'new-fb1defbf-b16a-4a5f-b923-81c8f628d1c0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['contact'] = $mini;

  return $export;
}
