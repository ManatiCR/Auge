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
    'type' => 'none',
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
    'css_id' => 'panel-whoweare',
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
      'text' => NULL,
      'titles' => array(
        'separator' => array(
          'active' => 0,
          'element_type' => '',
          'show_css' => 0,
          'element_class' => '',
        ),
      ),
      'views' => NULL,
      'content' => NULL,
      'content_wide' => NULL,
      'content_bottom' => NULL,
    ),
    'titles' => array(
      'style' => 'semantic_panels',
    ),
  );
  $display->cache = array();
  $display->title = 'Who we are';
  $display->uuid = 'ab227898-1bfe-4566-83e8-43052f501418';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c85cdcb0-97e8-47ca-9251-bb60964451e5';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Quienes somos',
      'body' => '<p>Esta pagina debe estar en ingles.</p><p>Somos la Agencia Universitaria para la Gestión del Emprendimento de la Universidad de Costa Rica. Nacimos en noviembre del 2012 como una Unidad especializada en la creación y aceleración de empresas y entidades intensivas en conocimiento, adscrita a la Vicerrectoría de Investigación, operando con el apoyo financiero y logístico de FUNDEVI En nuestra comunidad emprendedora, brindamos capacitación, promovemos el emprendimiento dentro de la Universidad, e impulsamos proyectos innovadores y organizaciones dinámicas para contribuir con el desarrollo inclusivo y sostenible. Buscamos ser el elemento dinamizador del ecosistema de emprendimiento e innovación de Costa Rica y la Región. Nos comprometemos a elevar las posibilidades de éxito de emprendimientos por oportunidad, que sean creativos, dinámicos y sostenibles y lo hacemos, mediante una gestión práctica e innovadora, fundamentada en la colaboración, el acompañamiento y las alianzas.</p><p>Misión</p><p>Somos una comunidad emprendedora que incuba proyectos innovadores e impulsa organizaciones dinámicas para contribuir con un desarrollo inclusivo y sostenible.</p><p>Visión</p><p>Ser el elemento dinamizador del ecosistema de emprendimiento e innovación de Costa Rica y la región.</p><p>Valores</p><p>Nos apasionamos con enfoque. Sistematizamos para aprender del proceso. Construimos equipo para potenciar capacidades. Somos flexibles e impulsamos el cambio. Colaboramos para crecer.</p>',
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
    $pane->uuid = 'c85cdcb0-97e8-47ca-9251-bb60964451e5';
    $display->content['new-c85cdcb0-97e8-47ca-9251-bb60964451e5'] = $pane;
    $display->panels['content'][0] = 'new-c85cdcb0-97e8-47ca-9251-bb60964451e5';
    $pane = new stdClass();
    $pane->pid = 'new-fdf28350-a982-47f1-ad01-a62874d7410d';
    $pane->panel = 'content';
    $pane->type = 'custom_title_tag';
    $pane->subtype = 'custom_title_tag';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'buttons' => NULL,
      'custom_page_title_pattern' => 'Who we are | Auge',
      'form_build_id' => 'form-nM0jaJdJWr1G9CsG2UjK7y_DnCIpRfZCbXWNZK5LTlg',
      'form_token' => 'dWAZYIJYSyah0F52cDXNd7xmZg_7tn9XM1bmmuAhH04',
      'form_id' => 'panels_custom_title_tag_edit_form',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fdf28350-a982-47f1-ad01-a62874d7410d';
    $display->content['new-fdf28350-a982-47f1-ad01-a62874d7410d'] = $pane;
    $display->panels['content'][1] = 'new-fdf28350-a982-47f1-ad01-a62874d7410d';
    $pane = new stdClass();
    $pane->pid = 'new-ea615227-e6ae-4ca5-97c3-f1a8d5ef1d87';
    $pane->panel = 'content_wide';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-personnel_tabs';
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
    $pane->uuid = 'ea615227-e6ae-4ca5-97c3-f1a8d5ef1d87';
    $display->content['new-ea615227-e6ae-4ca5-97c3-f1a8d5ef1d87'] = $pane;
    $display->panels['content_wide'][0] = 'new-ea615227-e6ae-4ca5-97c3-f1a8d5ef1d87';
  $display->hide_title = PANELS_TITLE_NONE;
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
    'css_id' => 'panel-whoweare',
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
  $display->title = '';
  $display->uuid = 'ab227898-1bfe-4566-83e8-43052f501418';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c85cdcb0-97e8-47ca-9251-bb60964451e5';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '¿Quiénes somos?',
      'body' => '<p>Somos la Agencia Universitaria para la Gestión del Emprendimento de la <u><a target="_blank" href="http://ucr.ac.cr">Universidad de Costa Rica</a></u>. Nacimos en noviembre del 2012 como una Unidad especializada en la creación y aceleración de empresas y entidades intensivas en conocimiento, adscrita a la <u><a target="_blank" href="http://vinv.ucr.ac.cr/">Vicerrectoría de Investigación</a></u>, operando con el apoyo financiero y logístico de <a href="http://fundacionucr.ac.cr"><u>Fundación UCR</u></a>.</p><p>&nbsp;</p><p>En nuestra comunidad emprendedora, brindamos capacitación, promovemos el emprendimiento dentro de la Universidad, e impulsamos proyectos innovadores y organizaciones dinámicas para contribuir con el desarrollo inclusivo y sostenible. Buscamos ser el elemento dinamizador del ecosistema de emprendimiento e innovación de Costa Rica y la Región. Nos comprometemos a elevar las posibilidades de éxito de emprendimientos por oportunidad, que sean creativos, dinámicos y sostenibles y lo hacemos, mediante una gestión práctica e innovadora, fundamentada en la colaboración, el acompañamiento y las alianzas.</p><p>Atendemos tanto a población de la comunidad universitaria como externa, asumiendo el compromiso de democratizar el acceso al conocimiento para aportar al nacimiento y/o desarrollo de más y mejores empresas,&nbsp;con o sin fines de lucro, que aporten al desarrollo social y económico del país.</p><p><strong>Misión</strong></p><p>Somos una comunidad emprendedora que incuba proyectos innovadores e impulsa organizaciones dinámicas para contribuir con un desarrollo inclusivo y sostenible.</p><p>&nbsp;</p><p><strong>Visión</strong></p><p>Ser el elemento dinamizador del ecosistema de emprendimiento e innovación de Costa Rica y la región.</p><p>&nbsp;</p><p><strong>Valores</strong></p><ul><li>Nos apasionamos con enfoque.</li><li>Sistematizamos para aprender del proceso.</li><li>Construimos equipo para potenciar capacidades.</li><li>Somos flexibles e impulsamos el cambio.</li><li>Colaboramos para crecer.</li></ul>',
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
    $pane->uuid = 'c85cdcb0-97e8-47ca-9251-bb60964451e5';
    $display->content['new-c85cdcb0-97e8-47ca-9251-bb60964451e5'] = $pane;
    $display->panels['content'][0] = 'new-c85cdcb0-97e8-47ca-9251-bb60964451e5';
    $pane = new stdClass();
    $pane->pid = 'new-d25f1ca9-6c74-46ce-b591-89aaf3789b45';
    $pane->panel = 'content';
    $pane->type = 'custom_title_tag';
    $pane->subtype = 'custom_title_tag';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'buttons' => NULL,
      'custom_page_title_pattern' => 'Quienes somos | Auge',
      'form_build_id' => 'form-hx4e9_Dw9Wh0BjHexqe1g2qZPHwO42xNsTR9NpIRu48',
      'form_token' => 'dWAZYIJYSyah0F52cDXNd7xmZg_7tn9XM1bmmuAhH04',
      'form_id' => 'panels_custom_title_tag_edit_form',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd25f1ca9-6c74-46ce-b591-89aaf3789b45';
    $display->content['new-d25f1ca9-6c74-46ce-b591-89aaf3789b45'] = $pane;
    $display->panels['content'][1] = 'new-d25f1ca9-6c74-46ce-b591-89aaf3789b45';
    $pane = new stdClass();
    $pane->pid = 'new-2e4a01c0-098e-4974-bab4-e6d60a607e63';
    $pane->panel = 'content_wide';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-personel_tabs_spanish';
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
    $pane->uuid = '2e4a01c0-098e-4974-bab4-e6d60a607e63';
    $display->content['new-2e4a01c0-098e-4974-bab4-e6d60a607e63'] = $pane;
    $display->panels['content_wide'][0] = 'new-2e4a01c0-098e-4974-bab4-e6d60a607e63';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages[''] = $page;

  return $pages;

}
