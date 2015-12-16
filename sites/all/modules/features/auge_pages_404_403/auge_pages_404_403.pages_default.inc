<?php
/**
 * @file
 * auge_pages_404_403.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function auge_pages_404_403_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'page_404';
  $page->task = 'page';
  $page->admin_title = 'Page 404';
  $page->admin_description = '';
  $page->path = 'noencontrada';
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
  $handler->name = 'page_page_404__panel_context_a7b0330b-1d9f-45aa-b513-54e76497ae58';
  $handler->task = 'page';
  $handler->subtask = 'page_404';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'page-404',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'panels-one-col-wmargin';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content' => NULL,
      'content_wide' => NULL,
      'content_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f8672095-0b70-4ee8-b909-660259418e6c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4d3ea151-553a-46bb-bba0-c9302e3bddf6';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '    <h1 class="error-title">
      ¡Disculpe por las molestias! La página que solicita no existe
    </h1>
    <h2>
      404 Página no encontrada
    </h2>
    <div class="error-reaasons">
      <p>La razón podría ser:</p>
      <ul>
        <li>
          La página ha caducado o ha sido removida.
        </li>
        <li>
          La URL no es correcta
        </li>
      </ul>
      <p class="">Por favor compruebe que la dirección de la página está escrita correctamente.</p>
    <p>O ir a la <a href="/es">Página principal</a></p>',
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
    $pane->uuid = '4d3ea151-553a-46bb-bba0-c9302e3bddf6';
    $display->content['new-4d3ea151-553a-46bb-bba0-c9302e3bddf6'] = $pane;
    $display->panels['content'][0] = 'new-4d3ea151-553a-46bb-bba0-c9302e3bddf6';
    $pane = new stdClass();
    $pane->pid = 'new-44e0154a-efe5-4e14-8e0b-7dae4af7d83a';
    $pane->panel = 'content';
    $pane->type = 'custom_title_tag';
    $pane->subtype = 'custom_title_tag';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'buttons' => NULL,
      'custom_page_title_pattern' => '404 | Auge',
      'form_build_id' => 'form-FD4c_EljuIdNsHOjNEhlNoLJJWXwY8-Ht6FqoZ6pKdA',
      'form_token' => 'KHXJQSKhGjZTmWmHqkehHEMYjFT1B80qknX0-kIcsNA',
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
    $pane->uuid = '44e0154a-efe5-4e14-8e0b-7dae4af7d83a';
    $display->content['new-44e0154a-efe5-4e14-8e0b-7dae4af7d83a'] = $pane;
    $display->panels['content'][1] = 'new-44e0154a-efe5-4e14-8e0b-7dae4af7d83a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4d3ea151-553a-46bb-bba0-c9302e3bddf6';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['page_404'] = $page;

  return $pages;

}
