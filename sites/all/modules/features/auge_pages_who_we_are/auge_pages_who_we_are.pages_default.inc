<?php
/**
 * @file
 * auge_pages_who_we_are.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function auge_pages_who_we_are_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'who_we_are';
  $page->task = 'page';
  $page->admin_title = 'Who we are';
  $page->admin_description = '';
  $page->path = 'whoweare';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Who we are',
    'name' => 'main-menu',
    'weight' => '7',
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
  $handler->name = 'page_who_we_are__panel_context_9cc3327d-9ec8-4d79-82dc-0fccc13a8c01';
  $handler->task = 'page';
  $handler->subtask = 'who_we_are';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Who we are',
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
      'logic' => 'and',
    ),
  );
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
  $display->title = 'Who we are';
  $display->uuid = 'ab227898-1bfe-4566-83e8-43052f501418';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c85cdcb0-97e8-47ca-9251-bb60964451e5';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Esta pagina debe estar en ingles.</p><p>Somos la Agencia Universitaria para la Gestión del Emprendimento de la Universidad de Costa Rica. Nacimos en noviembre del 2012 como una Unidad especializada en la creación y aceleración de empresas y entidades intensivas en conocimiento, adscrita a la Vicerrectoría de Investigación, operando con el apoyo financiero y logístico de FUNDEVI En nuestra comunidad emprendedora, brindamos capacitación, promovemos el emprendimiento dentro de la Universidad, e impulsamos proyectos innovadores y organizaciones dinámicas para contribuir con el desarrollo inclusivo y sostenible. Buscamos ser el elemento dinamizador del ecosistema de emprendimiento e innovación de Costa Rica y la Región. Nos comprometemos a elevar las posibilidades de éxito de emprendimientos por oportunidad, que sean creativos, dinámicos y sostenibles y lo hacemos, mediante una gestión práctica e innovadora, fundamentada en la colaboración, el acompañamiento y las alianzas.</p><p>Misión</p><p>Somos una comunidad emprendedora que incuba proyectos innovadores e impulsa organizaciones dinámicas para contribuir con un desarrollo inclusivo y sostenible.</p><p>Visión</p><p>Ser el elemento dinamizador del ecosistema de emprendimiento e innovación de Costa Rica y la región.</p><p>Valores</p><p>Nos apasionamos con enfoque. Sistematizamos para aprender del proceso. Construimos equipo para potenciar capacidades. Somos flexibles e impulsamos el cambio. Colaboramos para crecer.</p>',
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
    $pane->uuid = 'c85cdcb0-97e8-47ca-9251-bb60964451e5';
    $display->content['new-c85cdcb0-97e8-47ca-9251-bb60964451e5'] = $pane;
    $display->panels['middle'][0] = 'new-c85cdcb0-97e8-47ca-9251-bb60964451e5';
    $pane = new stdClass();
    $pane->pid = 'new-207ee171-8db2-42c5-b3df-8fedf706cd52';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'personnel_view-panel_pane_1';
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
    $pane->uuid = '207ee171-8db2-42c5-b3df-8fedf706cd52';
    $display->content['new-207ee171-8db2-42c5-b3df-8fedf706cd52'] = $pane;
    $display->panels['middle'][1] = 'new-207ee171-8db2-42c5-b3df-8fedf706cd52';
    $pane = new stdClass();
    $pane->pid = 'new-0d20cb70-ffc9-4c42-889f-baeea03b5a97';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'personnel_view-panel_pane_2';
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
    $pane->uuid = '0d20cb70-ffc9-4c42-889f-baeea03b5a97';
    $display->content['new-0d20cb70-ffc9-4c42-889f-baeea03b5a97'] = $pane;
    $display->panels['middle'][2] = 'new-0d20cb70-ffc9-4c42-889f-baeea03b5a97';
    $pane = new stdClass();
    $pane->pid = 'new-3c0be0b8-5e3b-4f44-896c-9153ffef4910';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'personnel_view-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3c0be0b8-5e3b-4f44-896c-9153ffef4910';
    $display->content['new-3c0be0b8-5e3b-4f44-896c-9153ffef4910'] = $pane;
    $display->panels['middle'][3] = 'new-3c0be0b8-5e3b-4f44-896c-9153ffef4910';
    $pane = new stdClass();
    $pane->pid = 'new-283ce5d6-9bcd-41b8-8493-41b4b5c9aec6';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'personnel_view-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '283ce5d6-9bcd-41b8-8493-41b4b5c9aec6';
    $display->content['new-283ce5d6-9bcd-41b8-8493-41b4b5c9aec6'] = $pane;
    $display->panels['middle'][4] = 'new-283ce5d6-9bcd-41b8-8493-41b4b5c9aec6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_who_we_are__panel_context_8cfd7b59-6080-40d1-a99f-c56b13297977';
  $handler->task = 'page';
  $handler->subtask = 'who_we_are';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Quienes somos',
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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '¿Quienes somos?';
  $display->uuid = 'ab227898-1bfe-4566-83e8-43052f501418';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c85cdcb0-97e8-47ca-9251-bb60964451e5';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Esta debe ser la pag en español.</p><p>Somos la Agencia Universitaria para la Gestión del Emprendimento de la Universidad de Costa Rica. Nacimos en noviembre del 2012 como una Unidad especializada en la creación y aceleración de empresas y entidades intensivas en conocimiento, adscrita a la Vicerrectoría de Investigación, operando con el apoyo financiero y logístico de FUNDEVI En nuestra comunidad emprendedora, brindamos capacitación, promovemos el emprendimiento dentro de la Universidad, e impulsamos proyectos innovadores y organizaciones dinámicas para contribuir con el desarrollo inclusivo y sostenible. Buscamos ser el elemento dinamizador del ecosistema de emprendimiento e innovación de Costa Rica y la Región. Nos comprometemos a elevar las posibilidades de éxito de emprendimientos por oportunidad, que sean creativos, dinámicos y sostenibles y lo hacemos, mediante una gestión práctica e innovadora, fundamentada en la colaboración, el acompañamiento y las alianzas.</p><p>Misión</p><p>Somos una comunidad emprendedora que incuba proyectos innovadores e impulsa organizaciones dinámicas para contribuir con un desarrollo inclusivo y sostenible.</p><p>Visión</p><p>Ser el elemento dinamizador del ecosistema de emprendimiento e innovación de Costa Rica y la región.</p><p>Valores</p><p>Nos apasionamos con enfoque. Sistematizamos para aprender del proceso. Construimos equipo para potenciar capacidades. Somos flexibles e impulsamos el cambio. Colaboramos para crecer.</p>',
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
    $pane->uuid = 'c85cdcb0-97e8-47ca-9251-bb60964451e5';
    $display->content['new-c85cdcb0-97e8-47ca-9251-bb60964451e5'] = $pane;
    $display->panels['middle'][0] = 'new-c85cdcb0-97e8-47ca-9251-bb60964451e5';
    $pane = new stdClass();
    $pane->pid = 'new-207ee171-8db2-42c5-b3df-8fedf706cd52';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'personnel_view-panel_pane_1';
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
    $pane->uuid = '207ee171-8db2-42c5-b3df-8fedf706cd52';
    $display->content['new-207ee171-8db2-42c5-b3df-8fedf706cd52'] = $pane;
    $display->panels['middle'][1] = 'new-207ee171-8db2-42c5-b3df-8fedf706cd52';
    $pane = new stdClass();
    $pane->pid = 'new-0d20cb70-ffc9-4c42-889f-baeea03b5a97';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'personnel_view-panel_pane_2';
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
    $pane->uuid = '0d20cb70-ffc9-4c42-889f-baeea03b5a97';
    $display->content['new-0d20cb70-ffc9-4c42-889f-baeea03b5a97'] = $pane;
    $display->panels['middle'][2] = 'new-0d20cb70-ffc9-4c42-889f-baeea03b5a97';
    $pane = new stdClass();
    $pane->pid = 'new-3c0be0b8-5e3b-4f44-896c-9153ffef4910';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'personnel_view-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3c0be0b8-5e3b-4f44-896c-9153ffef4910';
    $display->content['new-3c0be0b8-5e3b-4f44-896c-9153ffef4910'] = $pane;
    $display->panels['middle'][3] = 'new-3c0be0b8-5e3b-4f44-896c-9153ffef4910';
    $pane = new stdClass();
    $pane->pid = 'new-283ce5d6-9bcd-41b8-8493-41b4b5c9aec6';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'personnel_view-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '283ce5d6-9bcd-41b8-8493-41b4b5c9aec6';
    $display->content['new-283ce5d6-9bcd-41b8-8493-41b4b5c9aec6'] = $pane;
    $display->panels['middle'][4] = 'new-283ce5d6-9bcd-41b8-8493-41b4b5c9aec6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['who_we_are'] = $page;

  return $pages;

}
