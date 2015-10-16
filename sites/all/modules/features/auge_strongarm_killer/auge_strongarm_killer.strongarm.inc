<?php
/**
 * @file
 * auge_strongarm_killer.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function auge_strongarm_killer_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_actividades';
  $strongarm->value = 'edit-menu';
  $export['additional_settings__active_tab_actividades'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_activity';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_activity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_blog_post';
  $strongarm->value = 'edit-menu';
  $export['additional_settings__active_tab_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_front_page_images';
  $strongarm->value = 'edit-menu';
  $export['additional_settings__active_tab_front_page_images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_personnel';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_personnel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_projects';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_projects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_stages';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_stages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_position_fixed';
  $strongarm->value = 0;
  $export['admin_menu_position_fixed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_class_cache_ctools_css';
  $strongarm->value = 'CToolsCssCache';
  $export['cache_class_cache_ctools_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = '1';
  $export['clean_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'context_block_rebuild_needed';
  $strongarm->value = TRUE;
  $export['context_block_rebuild_needed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'context_status';
  $strongarm->value = array(
    'contact_block_translation' => TRUE,
    'contact_block_translation_spanish' => TRUE,
  );
  $export['context_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_key';
  $strongarm->value = 'WOBcBNNBjG6aiNyJn9bvm_rhI7FO2ZbpqdisK68WAZM';
  $export['cron_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_last';
  $strongarm->value = 1445028637;
  $export['cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'css_js_query_string';
  $strongarm->value = 'nwc1df';
  $export['css_js_query_string'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ctools_last_cron';
  $strongarm->value = 1445016925;
  $export['ctools_last_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_api_version';
  $strongarm->value = '7.2';
  $export['date_api_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_db_tz_support';
  $strongarm->value = FALSE;
  $export['date_db_tz_support'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'America/Costa_Rica';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_day_only_no_zero';
  $strongarm->value = 'j';
  $export['date_format_day_only_no_zero'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_default_auge_date';
  $strongarm->value = 'F j, Y';
  $export['date_format_default_auge_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_long';
  $strongarm->value = 'l, F j, Y - H:i';
  $export['date_format_long'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_medium';
  $strongarm->value = 'D, m/d/Y - H:i';
  $export['date_format_medium'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_month_and_year';
  $strongarm->value = 'F Y';
  $export['date_format_month_and_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_new_activity';
  $strongarm->value = 'd F, Y';
  $export['date_format_new_activity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_short';
  $strongarm->value = 'm/d/Y - H:i';
  $export['date_format_short'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_sidebar_date';
  $strongarm->value = 'j M';
  $export['date_format_sidebar_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_year';
  $strongarm->value = 'Y';
  $export['date_format_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_day_format_without_year';
  $strongarm->value = 'l, F j';
  $export['date_views_day_format_without_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_day_format_with_year';
  $strongarm->value = 'l, F j, Y';
  $export['date_views_day_format_with_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_month_format_without_year';
  $strongarm->value = 'F';
  $export['date_views_month_format_without_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_month_format_with_year';
  $strongarm->value = 'F Y';
  $export['date_views_month_format_with_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_week_format_without_year';
  $strongarm->value = 'F j';
  $export['date_views_week_format_without_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_week_format_with_year';
  $strongarm->value = 'F j, Y';
  $export['date_views_week_format_with_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_field_group';
  $strongarm->value = array(
    'group_activity|node|activity|form' => FALSE,
    'group_blog_post|node|blog_post|form' => FALSE,
    'group_personnel|node|personnel|form' => FALSE,
    'group_stages|node|stages|form' => FALSE,
    'group_contact_form|entityform|contact_form|default' => FALSE,
  );
  $export['default_field_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_nodes_main';
  $strongarm->value = '10';
  $export['default_nodes_main'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_page_manager_pages';
  $strongarm->value = array(
    'pagina_contacto' => TRUE,
    'contacto' => TRUE,
  );
  $export['default_page_manager_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_activity';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_activity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_blog_post';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_front_page_images';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_front_page_images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_personnel';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_personnel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_projects';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_projects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_stages';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_stages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_activity';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_activity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_blog_post';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_front_page_images';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_front_page_images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_personnel';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_personnel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_projects';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_projects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_stages';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_stages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_activity';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_activity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_blog_post';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_front_page_images';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_front_page_images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_personnel';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_personnel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_projects';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_projects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_stages';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_stages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_http_request_fails';
  $strongarm->value = FALSE;
  $export['drupal_http_request_fails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_private_key';
  $strongarm->value = 'erLcRnKBuPqknUKUWZ60RxPEL9hHnXbkLRGR2njHnsI';
  $export['drupal_private_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entityreference:base-tables';
  $strongarm->value = array(
    'entityform' => array(
      0 => 'entityform',
      1 => 'entityform_id',
    ),
    'entityform_type' => array(
      0 => 'entityform_type',
      1 => 'id',
    ),
    'i18n_translation' => array(
      0 => 'i18n_translation_set',
      1 => 'tsid',
    ),
    'node' => array(
      0 => 'node',
      1 => 'nid',
    ),
    'file' => array(
      0 => 'file_managed',
      1 => 'fid',
    ),
    'taxonomy_term' => array(
      0 => 'taxonomy_term_data',
      1 => 'tid',
    ),
    'taxonomy_vocabulary' => array(
      0 => 'taxonomy_vocabulary',
      1 => 'vid',
    ),
    'user' => array(
      0 => 'users',
      1 => 'uid',
    ),
    'wysiwyg_profile' => array(
      0 => 'wysiwyg',
      1 => 'format',
    ),
    'rules_config' => array(
      0 => 'rules_config',
      1 => 'id',
    ),
  );
  $export['entityreference:base-tables'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_cache_tables_created';
  $strongarm->value = '';
  $export['entity_cache_tables_created'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_codecache';
  $strongarm->value = array(
    'manati_editortexto' => array(
      'filter' => '11e3715a479d602c3c56376b5ff2640b',
      'wysiwyg' => '737cf29a1c916064aeeed282fec79f39',
      'dependencies' => 'c42946230e013bda7c1c62f0ff53ef2e',
    ),
    'auge_ftr_blog' => array(
      'node' => 'b85fd117e47b6b9f26bcd1bc60cb697a',
      'variable' => 'ee2256021fd12a6c3b66b2c6ace96721',
      'field_base' => '13fbe9438bd5b77aa69a31de01d39eea',
      'field_instance' => '08a044e3f3003c07d48657887628035b',
      'menu_custom' => '2042931cc12c0466aab8fc8a74f2d400',
      'taxonomy' => '22b37d7aae5bd89f1eadb5ff9ee8447c',
      'user_permission' => '8413998fa5c757be78e0cd64df077ffd',
      'dependencies' => '69b4357737c1934db3d4b8dc50d0a5df',
      'image' => '25d9462009c6f1a8a5c38eb112671e98',
      'page_manager_pages' => '33bc04e332d4aa97dedade45c9267862',
      'views_view' => '1c48d2498b21f6dbc031312bae0225b8',
    ),
    'auge_ftr_blocks' => array(
      'field_base' => 'faa87447fda5e3afd9bf20eb8d0a4551',
      'field_instance' => '83264ddb0250080df8e91d9586213aa2',
      'taxonomy' => '2906cde4f4328fe2f9a4c9fa04950225',
      'variable' => '7f5207f12604500ddae4751867502e84',
      'dependencies' => 'd9b5febaa6805056ca5468d1e204fee9',
      'image' => '6e7e4ad3474a354d556bcf74a84811fb',
      'node' => '37a177ce08eb6ff0ca7f453f596582e4',
      'views_view' => 'e77fdcc741ecccc0a6fd7dee4c50f1df',
      'menu_links' => 'a7279bfb0c463ed260eb6155fdc319d3',
      'fe_block_boxes' => FALSE,
      'fe_block_settings' => FALSE,
      'context' => '8e350c0ac6c6c0319c9418c89d20d1c5',
      'page_manager_pages' => 'dd6489580466f5234443f44a132c75f8',
      'user_permission' => '3d723f2df23619afd55a0e7f2ba1e021',
    ),
    'features_extra_test' => array(
      'fe_block_boxes' => '524e9a15fa5eac56fea68c1b1bcd90a0',
      'fe_block_settings' => '600bc0e78dff73c660b729b3430a4e4f',
      'fe_nodequeue' => 'a3d8c4d1ead2dc1fde9c306ed240bfd5',
      'dependencies' => '42feb3df10b18fa560036fe64726d8a5',
    ),
    'auge_who_are_multilingual' => array(
      'fe_block_settings' => FALSE,
      'node' => '387f8e15050e623a8a9e664609b26f09',
      'variable' => '2e98dbc4a6e471870ce10ab49423b3fb',
      'field_base' => 'b0024c727a4d9c7e8517570346c384ce',
      'field_instance' => '07e988496a937068e110c3180dd1eb91',
      'language' => '50f1437cc3307c43d10221de9e9eb258',
      'taxonomy' => 'ed857c8066024947ef5cc1cd43b261f3',
      'user_permission' => 'c7268afc8257310a2086b72f5ee8b4a5',
      'conditional_fields' => '9a2df17020d1efaa8d654c108b43a8f8',
      'dependencies' => 'c452037ade23b52dc76520369e5fdbc8',
      'views_view' => '873ad2ea06f0f4797574aaebb7795dc8',
      'page_manager_pages' => 'f801a76293ace48fb3a0791e5917dd5f',
    ),
    'auge_content_type_activity' => array(
      'node' => '37a177ce08eb6ff0ca7f453f596582e4',
      'variable' => '0e5f2ba88e6797e7add68a346e8069af',
      'field_base' => 'c15c32244e00f1a602375692344ea279',
      'field_instance' => '83264ddb0250080df8e91d9586213aa2',
      'taxonomy' => '2906cde4f4328fe2f9a4c9fa04950225',
      'dependencies' => 'eadde964c41e95fd08cbaf1dc7520dbb',
      'field_group' => '4726918fc2051a9654e66e8052a2444a',
    ),
    'auge_content_type_blog_post' => array(
      'node' => 'b85fd117e47b6b9f26bcd1bc60cb697a',
      'field_base' => '1aebce3accbadf3f6594ff5eab6457d7',
      'field_instance' => '36bdc32944a00417aa3b31c3aa677268',
      'taxonomy' => '22b37d7aae5bd89f1eadb5ff9ee8447c',
      'variable' => '5a1c8624e5f0c41d35508c0277c8fa2e',
      'dependencies' => 'f6434423dbd857eba7a6a6239c8bef28',
      'field_group' => '1e0f010ebaded32635d11840250411e3',
    ),
    'auge_content_type_personnel' => array(
      'node' => '2c7dff16178ce7d4c10c3b576ee55350',
      'field_base' => 'b0024c727a4d9c7e8517570346c384ce',
      'field_instance' => 'afec2f42656fa7035804bd4ae5f7efa1',
      'taxonomy' => 'ed857c8066024947ef5cc1cd43b261f3',
      'variable' => 'd1d7b914ce2f53c75e90de69e9d4ad74',
      'dependencies' => 'f6434423dbd857eba7a6a6239c8bef28',
      'field_group' => '4d25e9ef15399c29a550d9106caa4e74',
    ),
    'auge_common_fieds' => array(
      'field_base' => '4063f29b4b713956ded5369e43f11446',
      'dependencies' => '858f4975a8154b34f8c89c591a8b7ac1',
      'field_group' => '35003e0c40682ddb17b8e5ade41d6be9',
    ),
    'auge_language_settings' => array(
      'language' => '50f1437cc3307c43d10221de9e9eb258',
      'dependencies' => '26da803a3439815a5c0cf87a7752c0bb',
      'user_permission' => '3885e4843b148b1cc7e5f1c6f0b68dfe',
    ),
    'auge_taxonomy_blog_category' => array(
      'taxonomy' => '115aea8ed1f700639b0187e5029824fc',
      'dependencies' => '527d6d95ea1328d369bc2f6a635f9386',
    ),
    'auge_taxonomy_get_involved' => array(
      'taxonomy' => '1ad1b87e16a36295c2db5ae713d06ddc',
      'dependencies' => '527d6d95ea1328d369bc2f6a635f9386',
    ),
    'auge_taxonomy_personnel' => array(
      'taxonomy' => '118cd112ff8d9e24080fb90cf897e74c',
      'dependencies' => '527d6d95ea1328d369bc2f6a635f9386',
    ),
    'auge_image_styles' => array(
      'dependencies' => 'b5cc61d4a303d79dab8a8515c295c0c2',
      'image' => '131974be9c8c3905da639e5703862b97',
    ),
    'auge_content_types_activity' => array(
      'node' => '37a177ce08eb6ff0ca7f453f596582e4',
      'variable' => '0e5f2ba88e6797e7add68a346e8069af',
      'field_instance' => '35751fc9af0beccf05c51f8797221767',
      'dependencies' => 'b0ac15759d58ce54cf586c413b6bfa47',
    ),
    'auge_content_types_blog_post' => array(
      'node' => 'b85fd117e47b6b9f26bcd1bc60cb697a',
      'variable' => '5a1c8624e5f0c41d35508c0277c8fa2e',
      'field_instance' => '36bdc32944a00417aa3b31c3aa677268',
      'dependencies' => '99dfaddeafdf25db79d9fcae614c4e0c',
    ),
    'auge_content_types_personnel' => array(
      'node' => '2c7dff16178ce7d4c10c3b576ee55350',
      'variable' => 'd1d7b914ce2f53c75e90de69e9d4ad74',
      'field_instance' => 'e3d3125d680680689ff6a8081d797cbc',
      'dependencies' => '99dfaddeafdf25db79d9fcae614c4e0c',
    ),
    'auge_content_types_project' => array(
      'node' => 'a6980807d5071032a007a49a8f4dd513',
      'variable' => 'a61e34d3bea57d7b5376507da3aae6f7',
      'field_instance' => '2b8e24df112d844bce363126012a7b03',
      'dependencies' => '29fe37ac09bfae626e6de29a5d3ed31d',
    ),
    'auge_content_types_stages' => array(
      'node' => '3f58d2ee28c52cd7252fc2603361e41a',
      'variable' => '66b2fbc2c14d26885fee5695b1fe1c45',
      'field_instance' => '74620ba04f17e6c1c34e05873c6182a0',
      'dependencies' => 'a571f1d92702f95b64fe28c1e0737b32',
    ),
    'auge_views_activities' => array(
      'dependencies' => '5aa4991c233da0e9f47c4b23836e0c28',
      'views_view' => '8f80301a4875b8a3117d3f3ae0663a9f',
    ),
    'auge_views_blog' => array(
      'dependencies' => '5aa4991c233da0e9f47c4b23836e0c28',
      'views_view' => '2085089acdc4a2f1803d5ea6716bbf92',
    ),
    'auge_views_get_involved' => array(
      'dependencies' => '5aa4991c233da0e9f47c4b23836e0c28',
      'views_view' => '497af0b06f1a8f48ee0a84a39f950077',
    ),
    'auge_views_personnel' => array(
      'dependencies' => '442b6dd19f44404549a1ebdbc0b7f0af',
      'views_view' => '873ad2ea06f0f4797574aaebb7795dc8',
    ),
    'auge_views_stages' => array(
      'dependencies' => '5aa4991c233da0e9f47c4b23836e0c28',
      'views_view' => 'de8614dc878f8374c669edc9a23233aa',
    ),
    'auge_pages_get_involved' => array(
      'dependencies' => 'bcc02e403dc3b4c6e526684b653d757e',
      'page_manager_pages' => '36c7ad5e11fc58b047adbba8ef79f9b0',
    ),
    'auge_pages_activities' => array(
      'dependencies' => 'bcc02e403dc3b4c6e526684b653d757e',
      'page_manager_pages' => 'b8410c5862095d6ffbe76578af9653f9',
    ),
    'auge_pages_blog' => array(
      'dependencies' => 'bcc02e403dc3b4c6e526684b653d757e',
      'page_manager_pages' => '130210491fbfcb8d4ea447816e8b5e5c',
    ),
    'auge_pages_who_we_are' => array(
      'dependencies' => 'bcc02e403dc3b4c6e526684b653d757e',
      'page_manager_pages' => '81e434f2b79f02d55a9e077431d2efeb',
    ),
    'auge_pages_contact' => array(
      'field_instance' => '3fa1a04094386cb04a72cbbad3bf40e1',
      'dependencies' => 'f6526c7adb21bd2cdf4375ef230e7d8b',
      'entityform_type' => '74d66cf41be566cf3599402e30689e94',
      'page_manager_existing_pages' => '87d5d7c96f24cab2ffb723abf478a505',
      'page_manager_handlers' => '3649ec1d482e9aba77c92bfe43a6853f',
    ),
    'auge_block_settings' => array(
      'fe_block_settings' => '56e490a61385b6764c48345d285b9015',
      'dependencies' => 'e84c322b3d62169a1f46de5e0027d28a',
      'fe_block_boxes' => 'b7e463d78b6b4da5d725eda1aa53ba61',
    ),
    'auge_menus' => array(
      'menu_custom' => 'f521bca3bd2e3bdfe601a7c4b550392c',
      'dependencies' => 'ce43b2cc540f90d9ef38740c8f0b0f83',
      'menu_links' => '11a5e2d760e5ac1ac59863e76ac76b7d',
    ),
    'auge_conditional_fields' => array(
      'conditional_fields' => 'd22b70e93e517b4326b0cbbfb9c681c3',
      'dependencies' => '1f5d7e28d5a03722012d71a13b322185',
    ),
    'auge_strongarm_killer' => array(
      'variable' => '6d17575ba5926ccdf8f57188d43325e9',
      'dependencies' => 'e410ca96d90029817c7bb9c7cb1f7ea4',
    ),
    'auge_pages_projects' => array(
      'dependencies' => 'bcc02e403dc3b4c6e526684b653d757e',
      'page_manager_pages' => 'e7d9205f5fc203238696fe2dfbe3f843',
    ),
    'auge_views_projects' => array(
      'dependencies' => '442b6dd19f44404549a1ebdbc0b7f0af',
      'views_view' => '88460767804328e19ea22682f581d494',
    ),
    'auge_rules' => array(
      'dependencies' => '59da4878696b2b50a5cdbe5c33bb9f03',
      'rules_config' => '68d5cdd14444eaa73111218a276dab2e',
    ),
    'auge_contexts' => array(
      'dependencies' => 'c98be01fb0b6be965e760a7d90927d55',
      'context' => 'baa2736c6b47796df8e42fd538d9f37b',
    ),
    'auge_pages_main' => array(
      'dependencies' => 'bcc02e403dc3b4c6e526684b653d757e',
      'page_manager_pages' => '15952af1937f6fede29edd2f8a6b125b',
    ),
    'auge_roles' => array(
      'user_role' => '3dea9a7ef52329b0f010cee68516d76a',
      'user_permission' => '0cbf47656d53604ee98b683790167345',
      'dependencies' => 'c7116aa8b1866a9acc79ba7c88ce5fc9',
    ),
  );
  $export['features_codecache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_feature_locked';
  $strongarm->value = array(
    'auge_who_are_multilingual' => array(),
    'auge_content_type_blog_post' => array(),
  );
  $export['features_feature_locked'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_ignored_orphans';
  $strongarm->value = array();
  $export['features_ignored_orphans'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_modules_changed';
  $strongarm->value = FALSE;
  $export['features_modules_changed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_semaphore';
  $strongarm->value = array();
  $export['features_semaphore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_entityform__contact_form';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'email' => array(
        'custom_settings' => FALSE,
      ),
      'confirmation' => array(
        'custom_settings' => FALSE,
      ),
      'download' => array(
        'custom_settings' => FALSE,
      ),
      'table' => array(
        'custom_settings' => FALSE,
      ),
      'review' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_entityform__contact_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__front_page_images';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__front_page_images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__blog_category';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'description' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__blog_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__getinvolved';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'description' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__getinvolved'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_private_path';
  $strongarm->value = 'sites/default/files/private';
  $export['file_private_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_public_path';
  $strongarm->value = 'sites/default/files';
  $export['file_public_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_temporary_path';
  $strongarm->value = '/tmp';
  $export['file_temporary_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_fallback_format';
  $strongarm->value = 'plain_text';
  $export['filter_fallback_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_string_allowed_formats';
  $strongarm->value = array(
    'manati_texto_formato' => 'manati_texto_formato',
    'filtered_html' => 'filtered_html',
    'full_html' => 'full_html',
    'plain_text' => 'plain_text',
  );
  $export['i18n_string_allowed_formats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_string_source_language';
  $strongarm->value = 'en';
  $export['i18n_string_source_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_profile';
  $strongarm->value = 'manati';
  $export['install_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_task';
  $strongarm->value = 'done';
  $export['install_task'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_time';
  $strongarm->value = 1441405880;
  $export['install_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'javascript_parsed';
  $strongarm->value = array(
    0 => 'misc/drupal.js',
    1 => 'misc/jquery.js',
    2 => 'misc/jquery.once.js',
    3 => 'profiles/manati/modules/contrib/devel/devel_krumo_path.js',
    4 => 'public://js/wysiwyg/wysiwyg_ckeditor_ZNwd0q44WnFCY0jU4OGMxrY0YU3hMds62r7asSe15hM.js',
    5 => 'profiles/manati/libraries/ckeditor/ckeditor.js',
    6 => 'profiles/manati/modules/contrib/wysiwyg/editors/js/ckeditor-3.0.js',
    7 => 'profiles/manati/modules/contrib/wysiwyg/wysiwyg.init.js',
    8 => 'profiles/manati/modules/contrib/wysiwyg/editors/js/none.js',
    9 => 'profiles/manati/modules/contrib/wysiwyg/wysiwyg.js',
    10 => 'profiles/manati/modules/contrib/features/features.js',
    11 => 'misc/tableheader.js',
    12 => 'misc/form.js',
    13 => 'misc/vertical-tabs.js',
    14 => 'profiles/manati/modules/contrib/admin_menu/admin_menu.js',
    15 => 'profiles/manati/modules/contrib/admin_menu/admin_menu_toolbar/admin_menu_toolbar.js',
    'refresh:es' => 'waiting',
    16 => 'misc/collapse.js',
    17 => 'misc/machine-name.js',
    18 => 'misc/autocomplete.js',
    19 => 'misc/jquery.cookie.js',
    20 => 'misc/jquery.form.js',
    21 => 'misc/progress.js',
    22 => 'profiles/manati/modules/contrib/jquery_update/js/jquery_update.js',
    23 => 'misc/ajax.js',
    24 => 'misc/ui/jquery.ui.core.min.js',
    25 => 'misc/ui/jquery.ui.widget.min.js',
    26 => 'misc/ui/jquery.ui.button.min.js',
    27 => 'misc/ui/jquery.ui.mouse.min.js',
    28 => 'misc/ui/jquery.ui.draggable.min.js',
    29 => 'misc/ui/jquery.ui.position.min.js',
    30 => 'misc/ui/jquery.ui.resizable.min.js',
    31 => 'misc/ui/jquery.ui.dialog.min.js',
    32 => 'profiles/manati/modules/contrib/views/js/jquery.ui.dialog.patch.js',
  );
  $export['javascript_parsed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_compression_type';
  $strongarm->value = 'min';
  $export['jquery_update_compression_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_cdn';
  $strongarm->value = 'none';
  $export['jquery_update_jquery_cdn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_migrate_cdn';
  $strongarm->value = 'none';
  $export['jquery_update_jquery_migrate_cdn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_migrate_enable';
  $strongarm->value = 0;
  $export['jquery_update_jquery_migrate_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_migrate_trace';
  $strongarm->value = 0;
  $export['jquery_update_jquery_migrate_trace'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_migrate_warnings';
  $strongarm->value = 0;
  $export['jquery_update_jquery_migrate_warnings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.10';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update__active_tab';
  $strongarm->value = 'edit-themes';
  $export['jquery_update__active_tab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_download_store';
  $strongarm->value = 'sites/default/files/translations';
  $export['l10n_update_download_store'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_last_check';
  $strongarm->value = 1442425921;
  $export['l10n_update_last_check'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_rebuild_projects';
  $strongarm->value = 1;
  $export['l10n_update_rebuild_projects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'l10n_update_translation_status';
  $strongarm->value = array(
    'admin_menu' => array(
      'es' => (object) array(
        'name' => 'admin_menu',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.0-rc5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'admin_menu',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1419233594,
        'last_checked' => 1442425402,
        'files' => array(
          'remote' => (object) array(
            'project' => 'admin_menu',
            'langcode' => 'es',
            'version' => '7.x-3.0-rc5',
            'type' => 'remote',
            'filename' => 'admin_menu-7.x-3.0-rc5.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/admin_menu/admin_menu-7.x-3.0-rc5.es.po',
            'timestamp' => 1419233594,
          ),
          'local' => (object) array(
            'project' => 'admin_menu',
            'langcode' => 'es',
            'version' => '7.x-3.0-rc5',
            'type' => 'local',
            'filename' => 'admin_menu-7.x-3.0-rc5.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://admin_menu-7.x-3.0-rc5.es.po',
          ),
        ),
        'language' => 'es',
      ),
    ),
    'block_class' => array(
      'es' => (object) array(
        'name' => 'block_class',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'block_class',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1423664769,
        'last_checked' => 1442425404,
        'files' => array(
          'remote' => (object) array(
            'project' => 'block_class',
            'langcode' => 'es',
            'version' => '7.x-2.1',
            'type' => 'remote',
            'filename' => 'block_class-7.x-2.1.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/block_class/block_class-7.x-2.1.es.po',
            'timestamp' => 1423664769,
          ),
          'local' => (object) array(
            'project' => 'block_class',
            'langcode' => 'es',
            'version' => '7.x-2.1',
            'type' => 'local',
            'filename' => 'block_class-7.x-2.1.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://block_class-7.x-2.1.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'conditional_fields' => array(
      'es' => (object) array(
        'name' => 'conditional_fields',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.0-alpha1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'conditional_fields',
        'langcode' => 'es',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'conditional_fields',
            'langcode' => 'es',
            'version' => '7.x-3.0-alpha1',
            'type' => 'remote',
            'filename' => 'conditional_fields-7.x-3.0-alpha1.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/conditional_fields/conditional_fields-7.x-3.0-alpha1.es.po',
          ),
          'local' => (object) array(
            'project' => 'conditional_fields',
            'langcode' => 'es',
            'version' => '7.x-3.0-alpha1',
            'type' => 'local',
            'filename' => 'conditional_fields-7.x-3.0-alpha1.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://conditional_fields-7.x-3.0-alpha1.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'context' => array(
      'es' => (object) array(
        'name' => 'context',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'context',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1432551033,
        'last_checked' => 1442425404,
        'files' => array(
          'remote' => (object) array(
            'project' => 'context',
            'langcode' => 'es',
            'version' => '7.x-3.6',
            'type' => 'remote',
            'filename' => 'context-7.x-3.6.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/context/context-7.x-3.6.es.po',
            'timestamp' => 1432551033,
          ),
          'local' => (object) array(
            'project' => 'context',
            'langcode' => 'es',
            'version' => '7.x-3.6',
            'type' => 'local',
            'filename' => 'context-7.x-3.6.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://context-7.x-3.6.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'ctools' => array(
      'es' => (object) array(
        'name' => 'ctools',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.7',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'ctools',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1434665055,
        'last_checked' => 1442425406,
        'files' => array(
          'remote' => (object) array(
            'project' => 'ctools',
            'langcode' => 'es',
            'version' => '7.x-1.7',
            'type' => 'remote',
            'filename' => 'ctools-7.x-1.7.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/ctools/ctools-7.x-1.7.es.po',
            'timestamp' => 1434665055,
          ),
          'local' => (object) array(
            'project' => 'ctools',
            'langcode' => 'es',
            'version' => '7.x-1.7',
            'type' => 'local',
            'filename' => 'ctools-7.x-1.7.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://ctools-7.x-1.7.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'date' => array(
      'es' => (object) array(
        'name' => 'date',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.8',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'date',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1434668714,
        'last_checked' => 1442425406,
        'files' => array(
          'remote' => (object) array(
            'project' => 'date',
            'langcode' => 'es',
            'version' => '7.x-2.8',
            'type' => 'remote',
            'filename' => 'date-7.x-2.8.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/date/date-7.x-2.8.es.po',
            'timestamp' => 1434668714,
          ),
          'local' => (object) array(
            'project' => 'date',
            'langcode' => 'es',
            'version' => '7.x-2.8',
            'type' => 'local',
            'filename' => 'date-7.x-2.8.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://date-7.x-2.8.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'devel' => array(
      'es' => (object) array(
        'name' => 'devel',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'devel',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1434678482,
        'last_checked' => 1442425406,
        'files' => array(
          'remote' => (object) array(
            'project' => 'devel',
            'langcode' => 'es',
            'version' => '7.x-1.5',
            'type' => 'remote',
            'filename' => 'devel-7.x-1.5.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/devel/devel-7.x-1.5.es.po',
            'timestamp' => 1434678482,
          ),
          'local' => (object) array(
            'project' => 'devel',
            'langcode' => 'es',
            'version' => '7.x-1.5',
            'type' => 'local',
            'filename' => 'devel-7.x-1.5.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://devel-7.x-1.5.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'diff' => array(
      'es' => (object) array(
        'name' => 'diff',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'diff',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1420062762,
        'last_checked' => 1442425406,
        'files' => array(
          'remote' => (object) array(
            'project' => 'diff',
            'langcode' => 'es',
            'version' => '7.x-3.2',
            'type' => 'remote',
            'filename' => 'diff-7.x-3.2.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/diff/diff-7.x-3.2.es.po',
            'timestamp' => 1420062762,
          ),
          'local' => (object) array(
            'project' => 'diff',
            'langcode' => 'es',
            'version' => '7.x-3.2',
            'type' => 'local',
            'filename' => 'diff-7.x-3.2.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://diff-7.x-3.2.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'drupal' => array(
      'es' => (object) array(
        'name' => 'drupal',
        'project_type' => 'core',
        'core' => '7.x',
        'version' => '7.39',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'drupal',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1440229412,
        'last_checked' => 1442425408,
        'files' => array(
          'remote' => (object) array(
            'project' => 'drupal',
            'langcode' => 'es',
            'version' => '7.39',
            'type' => 'remote',
            'filename' => 'drupal-7.39.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/drupal/drupal-7.39.es.po',
            'timestamp' => 1440229412,
          ),
          'local' => (object) array(
            'project' => 'drupal',
            'langcode' => 'es',
            'version' => '7.39',
            'type' => 'local',
            'filename' => 'drupal-7.39.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://drupal-7.39.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'ds' => array(
      'es' => (object) array(
        'name' => 'ds',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.10',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'ds',
        'langcode' => 'es',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'ds',
            'langcode' => 'es',
            'version' => '7.x-2.10',
            'type' => 'remote',
            'filename' => 'ds-7.x-2.10.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/ds/ds-7.x-2.10.es.po',
          ),
          'local' => (object) array(
            'project' => 'ds',
            'langcode' => 'es',
            'version' => '7.x-2.10',
            'type' => 'local',
            'filename' => 'ds-7.x-2.10.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://ds-7.x-2.10.es.po',
          ),
        ),
        'language' => 'es',
      ),
    ),
    'email' => array(
      'es' => (object) array(
        'name' => 'email',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'email',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1430741078,
        'last_checked' => 1442425408,
        'files' => array(
          'remote' => (object) array(
            'project' => 'email',
            'langcode' => 'es',
            'version' => '7.x-1.3',
            'type' => 'remote',
            'filename' => 'email-7.x-1.3.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/email/email-7.x-1.3.es.po',
            'timestamp' => 1430741078,
          ),
          'local' => (object) array(
            'project' => 'email',
            'langcode' => 'es',
            'version' => '7.x-1.3',
            'type' => 'local',
            'filename' => 'email-7.x-1.3.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://email-7.x-1.3.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'entity' => array(
      'es' => (object) array(
        'name' => 'entity',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'entity',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1434746604,
        'last_checked' => 1442425408,
        'files' => array(
          'remote' => (object) array(
            'project' => 'entity',
            'langcode' => 'es',
            'version' => '7.x-1.6',
            'type' => 'remote',
            'filename' => 'entity-7.x-1.6.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/entity/entity-7.x-1.6.es.po',
            'timestamp' => 1434746604,
          ),
          'local' => (object) array(
            'project' => 'entity',
            'langcode' => 'es',
            'version' => '7.x-1.6',
            'type' => 'local',
            'filename' => 'entity-7.x-1.6.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://entity-7.x-1.6.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'entityform' => array(
      'es' => (object) array(
        'name' => 'entityform',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0-rc1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'entityform',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => '1443829749',
        'last_checked' => '1443829749',
        'files' => array(
          'remote' => (object) array(
            'project' => 'entityform',
            'langcode' => 'es',
            'version' => '7.x-2.0-rc1',
            'type' => 'remote',
            'filename' => 'entityform-7.x-2.0-rc1.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/entityform/entityform-7.x-2.0-rc1.es.po',
          ),
          'local' => (object) array(
            'project' => 'entityform',
            'langcode' => 'es',
            'version' => '7.x-2.0-rc1',
            'type' => 'local',
            'filename' => 'entityform-7.x-2.0-rc1.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://entityform-7.x-2.0-rc1.es.po',
          ),
          'current' => (object) array(
            'project' => 'entityform',
            'language' => 'es',
            'filename' => 'entityform-7.x-2.0-rc1.es.po',
            'version' => '7.x-2.0-rc1',
            'uri' => 'translations://entityform-7.x-2.0-rc1.es.po',
            'timestamp' => '1443829749',
            'last_checked' => '1443829749',
            'langcode' => 'es',
            'type' => 'current',
          ),
        ),
      ),
    ),
    'entityreference' => array(
      'es' => (object) array(
        'name' => 'entityreference',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'entityreference',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1434840618,
        'last_checked' => 1442425408,
        'files' => array(
          'remote' => (object) array(
            'project' => 'entityreference',
            'langcode' => 'es',
            'version' => '7.x-1.1',
            'type' => 'remote',
            'filename' => 'entityreference-7.x-1.1.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/entityreference/entityreference-7.x-1.1.es.po',
            'timestamp' => 1434840618,
          ),
          'local' => (object) array(
            'project' => 'entityreference',
            'langcode' => 'es',
            'version' => '7.x-1.1',
            'type' => 'local',
            'filename' => 'entityreference-7.x-1.1.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://entityreference-7.x-1.1.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'features' => array(
      'es' => (object) array(
        'name' => 'features',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'features',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1440218641,
        'last_checked' => 1442425410,
        'files' => array(
          'remote' => (object) array(
            'project' => 'features',
            'langcode' => 'es',
            'version' => '7.x-2.6',
            'type' => 'remote',
            'filename' => 'features-7.x-2.6.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/features/features-7.x-2.6.es.po',
            'timestamp' => 1440218641,
          ),
          'local' => (object) array(
            'project' => 'features',
            'langcode' => 'es',
            'version' => '7.x-2.6',
            'type' => 'local',
            'filename' => 'features-7.x-2.6.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://features-7.x-2.6.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'features_extra' => array(
      'es' => (object) array(
        'name' => 'features_extra',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'features_extra',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1439448164,
        'last_checked' => 1442425410,
        'files' => array(
          'remote' => (object) array(
            'project' => 'features_extra',
            'langcode' => 'es',
            'version' => '7.x-1.0',
            'type' => 'remote',
            'filename' => 'features_extra-7.x-1.0.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/features_extra/features_extra-7.x-1.0.es.po',
            'timestamp' => 1439448164,
          ),
          'local' => (object) array(
            'project' => 'features_extra',
            'langcode' => 'es',
            'version' => '7.x-1.0',
            'type' => 'local',
            'filename' => 'features_extra-7.x-1.0.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://features_extra-7.x-1.0.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'field_group' => array(
      'es' => (object) array(
        'name' => 'field_group',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'field_group',
        'langcode' => 'es',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'field_group',
            'langcode' => 'es',
            'version' => '7.x-1.4',
            'type' => 'remote',
            'filename' => 'field_group-7.x-1.4.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/field_group/field_group-7.x-1.4.es.po',
          ),
          'local' => (object) array(
            'project' => 'field_group',
            'langcode' => 'es',
            'version' => '7.x-1.4',
            'type' => 'local',
            'filename' => 'field_group-7.x-1.4.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://field_group-7.x-1.4.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'i18n' => array(
      'es' => (object) array(
        'name' => 'i18n',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.13',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'i18n',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1434831022,
        'last_checked' => 1442425412,
        'files' => array(
          'remote' => (object) array(
            'project' => 'i18n',
            'langcode' => 'es',
            'version' => '7.x-1.13',
            'type' => 'remote',
            'filename' => 'i18n-7.x-1.13.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/i18n/i18n-7.x-1.13.es.po',
            'timestamp' => 1434831022,
          ),
          'local' => (object) array(
            'project' => 'i18n',
            'langcode' => 'es',
            'version' => '7.x-1.13',
            'type' => 'local',
            'filename' => 'i18n-7.x-1.13.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://i18n-7.x-1.13.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'jquery_update' => array(
      'es' => (object) array(
        'name' => 'jquery_update',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.0-alpha2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'jquery_update',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1432978200,
        'last_checked' => 1442425412,
        'files' => array(
          'remote' => (object) array(
            'project' => 'jquery_update',
            'langcode' => 'es',
            'version' => '7.x-3.0-alpha2',
            'type' => 'remote',
            'filename' => 'jquery_update-7.x-3.0-alpha2.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/jquery_update/jquery_update-7.x-3.0-alpha2.es.po',
            'timestamp' => 1432978200,
          ),
          'local' => (object) array(
            'project' => 'jquery_update',
            'langcode' => 'es',
            'version' => '7.x-3.0-alpha2',
            'type' => 'local',
            'filename' => 'jquery_update-7.x-3.0-alpha2.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://jquery_update-7.x-3.0-alpha2.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'l10n_update' => array(
      'es' => (object) array(
        'name' => 'l10n_update',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'l10n_update',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1441306141,
        'last_checked' => 1442425412,
        'files' => array(
          'remote' => (object) array(
            'project' => 'l10n_update',
            'langcode' => 'es',
            'version' => '7.x-2.0',
            'type' => 'remote',
            'filename' => 'l10n_update-7.x-2.0.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/l10n_update/l10n_update-7.x-2.0.es.po',
            'timestamp' => 1441306141,
          ),
          'local' => (object) array(
            'project' => 'l10n_update',
            'langcode' => 'es',
            'version' => '7.x-2.0',
            'type' => 'local',
            'filename' => 'l10n_update-7.x-2.0.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://l10n_update-7.x-2.0.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'libraries' => array(
      'es' => (object) array(
        'name' => 'libraries',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'libraries',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1416679033,
        'last_checked' => 1442425412,
        'files' => array(
          'remote' => (object) array(
            'project' => 'libraries',
            'langcode' => 'es',
            'version' => '7.x-2.2',
            'type' => 'remote',
            'filename' => 'libraries-7.x-2.2.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/libraries/libraries-7.x-2.2.es.po',
            'timestamp' => 1416679033,
          ),
          'local' => (object) array(
            'project' => 'libraries',
            'langcode' => 'es',
            'version' => '7.x-2.2',
            'type' => 'local',
            'filename' => 'libraries-7.x-2.2.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://libraries-7.x-2.2.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'link' => array(
      'es' => (object) array(
        'name' => 'link',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'link',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1416654495,
        'last_checked' => 1442425414,
        'files' => array(
          'remote' => (object) array(
            'project' => 'link',
            'langcode' => 'es',
            'version' => '7.x-1.3',
            'type' => 'remote',
            'filename' => 'link-7.x-1.3.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/link/link-7.x-1.3.es.po',
            'timestamp' => 1416654495,
          ),
          'local' => (object) array(
            'project' => 'link',
            'langcode' => 'es',
            'version' => '7.x-1.3',
            'type' => 'local',
            'filename' => 'link-7.x-1.3.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://link-7.x-1.3.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'menu_attributes' => array(
      'es' => (object) array(
        'name' => 'menu_attributes',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.0-rc3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'menu_attributes',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1413971651,
        'last_checked' => 1442425414,
        'files' => array(
          'remote' => (object) array(
            'project' => 'menu_attributes',
            'langcode' => 'es',
            'version' => '7.x-1.0-rc3',
            'type' => 'remote',
            'filename' => 'menu_attributes-7.x-1.0-rc3.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/menu_attributes/menu_attributes-7.x-1.0-rc3.es.po',
            'timestamp' => 1413971651,
          ),
          'local' => (object) array(
            'project' => 'menu_attributes',
            'langcode' => 'es',
            'version' => '7.x-1.0-rc3',
            'type' => 'local',
            'filename' => 'menu_attributes-7.x-1.0-rc3.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://menu_attributes-7.x-1.0-rc3.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'module_filter' => array(
      'es' => (object) array(
        'name' => 'module_filter',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'module_filter',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1434765944,
        'last_checked' => 1442425414,
        'files' => array(
          'remote' => (object) array(
            'project' => 'module_filter',
            'langcode' => 'es',
            'version' => '7.x-2.0',
            'type' => 'remote',
            'filename' => 'module_filter-7.x-2.0.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/module_filter/module_filter-7.x-2.0.es.po',
            'timestamp' => 1434765944,
          ),
          'local' => (object) array(
            'project' => 'module_filter',
            'langcode' => 'es',
            'version' => '7.x-2.0',
            'type' => 'local',
            'filename' => 'module_filter-7.x-2.0.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://module_filter-7.x-2.0.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'nodequeue' => array(
      'es' => (object) array(
        'name' => 'nodequeue',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'nodequeue',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1433659111,
        'last_checked' => 1442425416,
        'files' => array(
          'remote' => (object) array(
            'project' => 'nodequeue',
            'langcode' => 'es',
            'version' => '7.x-2.0',
            'type' => 'remote',
            'filename' => 'nodequeue-7.x-2.0.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/nodequeue/nodequeue-7.x-2.0.es.po',
            'timestamp' => 1433659111,
          ),
          'local' => (object) array(
            'project' => 'nodequeue',
            'langcode' => 'es',
            'version' => '7.x-2.0',
            'type' => 'local',
            'filename' => 'nodequeue-7.x-2.0.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://nodequeue-7.x-2.0.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'panels' => array(
      'es' => (object) array(
        'name' => 'panels',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'panels',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1441994943,
        'last_checked' => 1442425416,
        'files' => array(
          'remote' => (object) array(
            'project' => 'panels',
            'langcode' => 'es',
            'version' => '7.x-3.5',
            'type' => 'remote',
            'filename' => 'panels-7.x-3.5.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/panels/panels-7.x-3.5.es.po',
            'timestamp' => 1441994943,
          ),
          'local' => (object) array(
            'project' => 'panels',
            'langcode' => 'es',
            'version' => '7.x-3.5',
            'type' => 'local',
            'filename' => 'panels-7.x-3.5.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://panels-7.x-3.5.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'pathauto' => array(
      'es' => (object) array(
        'name' => 'pathauto',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'pathauto',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1434575147,
        'last_checked' => 1442425416,
        'files' => array(
          'remote' => (object) array(
            'project' => 'pathauto',
            'langcode' => 'es',
            'version' => '7.x-1.2',
            'type' => 'remote',
            'filename' => 'pathauto-7.x-1.2.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/pathauto/pathauto-7.x-1.2.es.po',
            'timestamp' => 1434575147,
          ),
          'local' => (object) array(
            'project' => 'pathauto',
            'langcode' => 'es',
            'version' => '7.x-1.2',
            'type' => 'local',
            'filename' => 'pathauto-7.x-1.2.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://pathauto-7.x-1.2.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'pathologic' => array(
      'es' => (object) array(
        'name' => 'pathologic',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.12',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'pathologic',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1391350859,
        'last_checked' => 1442425416,
        'files' => array(
          'remote' => (object) array(
            'project' => 'pathologic',
            'langcode' => 'es',
            'version' => '7.x-2.12',
            'type' => 'remote',
            'filename' => 'pathologic-7.x-2.12.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/pathologic/pathologic-7.x-2.12.es.po',
            'timestamp' => 1391350859,
          ),
          'local' => (object) array(
            'project' => 'pathologic',
            'langcode' => 'es',
            'version' => '7.x-2.12',
            'type' => 'local',
            'filename' => 'pathologic-7.x-2.12.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://pathologic-7.x-2.12.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'pm_existing_pages' => array(
      'es' => (object) array(
        'name' => 'pm_existing_pages',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.4',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'pm_existing_pages',
        'langcode' => 'es',
        'type' => 'current',
        'timestamp' => '1443829750',
        'last_checked' => '1443829749',
        'files' => array(
          'remote' => (object) array(
            'project' => 'pm_existing_pages',
            'langcode' => 'es',
            'version' => '7.x-1.4',
            'type' => 'remote',
            'filename' => 'pm_existing_pages-7.x-1.4.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/pm_existing_pages/pm_existing_pages-7.x-1.4.es.po',
          ),
          'local' => (object) array(
            'project' => 'pm_existing_pages',
            'langcode' => 'es',
            'version' => '7.x-1.4',
            'type' => 'local',
            'filename' => 'pm_existing_pages-7.x-1.4.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://pm_existing_pages-7.x-1.4.es.po',
          ),
          'current' => (object) array(
            'project' => 'pm_existing_pages',
            'language' => 'es',
            'filename' => 'pm_existing_pages-7.x-1.4.es.po',
            'version' => '7.x-1.4',
            'uri' => 'translations://pm_existing_pages-7.x-1.4.es.po',
            'timestamp' => '1443829750',
            'last_checked' => '1443829749',
            'langcode' => 'es',
            'type' => 'current',
          ),
        ),
      ),
    ),
    'rules' => array(
      'es' => (object) array(
        'name' => 'rules',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.9',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'rules',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1434666828,
        'last_checked' => 1442425418,
        'files' => array(
          'remote' => (object) array(
            'project' => 'rules',
            'langcode' => 'es',
            'version' => '7.x-2.9',
            'type' => 'remote',
            'filename' => 'rules-7.x-2.9.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/rules/rules-7.x-2.9.es.po',
            'timestamp' => 1434666828,
          ),
          'local' => (object) array(
            'project' => 'rules',
            'langcode' => 'es',
            'version' => '7.x-2.9',
            'type' => 'local',
            'filename' => 'rules-7.x-2.9.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://rules-7.x-2.9.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'smtp' => array(
      'es' => (object) array(
        'name' => 'smtp',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'smtp',
        'langcode' => 'es',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'smtp',
            'langcode' => 'es',
            'version' => '7.x-1.2',
            'type' => 'remote',
            'filename' => 'smtp-7.x-1.2.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/smtp/smtp-7.x-1.2.es.po',
          ),
          'local' => (object) array(
            'project' => 'smtp',
            'langcode' => 'es',
            'version' => '7.x-1.2',
            'type' => 'local',
            'filename' => 'smtp-7.x-1.2.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://smtp-7.x-1.2.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'strongarm' => array(
      'es' => (object) array(
        'name' => 'strongarm',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.0',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'strongarm',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1358528431,
        'last_checked' => 1442425420,
        'files' => array(
          'remote' => (object) array(
            'project' => 'strongarm',
            'langcode' => 'es',
            'version' => '7.x-2.0',
            'type' => 'remote',
            'filename' => 'strongarm-7.x-2.0.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/strongarm/strongarm-7.x-2.0.es.po',
            'timestamp' => 1358528431,
          ),
          'local' => (object) array(
            'project' => 'strongarm',
            'langcode' => 'es',
            'version' => '7.x-2.0',
            'type' => 'local',
            'filename' => 'strongarm-7.x-2.0.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://strongarm-7.x-2.0.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'token' => array(
      'es' => (object) array(
        'name' => 'token',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.6',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'token',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1434665058,
        'last_checked' => 1442425420,
        'files' => array(
          'remote' => (object) array(
            'project' => 'token',
            'langcode' => 'es',
            'version' => '7.x-1.6',
            'type' => 'remote',
            'filename' => 'token-7.x-1.6.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/token/token-7.x-1.6.es.po',
            'timestamp' => 1434665058,
          ),
          'local' => (object) array(
            'project' => 'token',
            'langcode' => 'es',
            'version' => '7.x-1.6',
            'type' => 'local',
            'filename' => 'token-7.x-1.6.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://token-7.x-1.6.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'token_filter' => array(
      'es' => (object) array(
        'name' => 'token_filter',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'token_filter',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1417038267,
        'last_checked' => 1442425421,
        'files' => array(
          'remote' => (object) array(
            'project' => 'token_filter',
            'langcode' => 'es',
            'version' => '7.x-1.1',
            'type' => 'remote',
            'filename' => 'token_filter-7.x-1.1.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/token_filter/token_filter-7.x-1.1.es.po',
            'timestamp' => 1417038267,
          ),
          'local' => (object) array(
            'project' => 'token_filter',
            'langcode' => 'es',
            'version' => '7.x-1.1',
            'type' => 'local',
            'filename' => 'token_filter-7.x-1.1.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://token_filter-7.x-1.1.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'transliteration' => array(
      'es' => (object) array(
        'name' => 'transliteration',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'transliteration',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1434577163,
        'last_checked' => 1442425421,
        'files' => array(
          'remote' => (object) array(
            'project' => 'transliteration',
            'langcode' => 'es',
            'version' => '7.x-3.2',
            'type' => 'remote',
            'filename' => 'transliteration-7.x-3.2.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/transliteration/transliteration-7.x-3.2.es.po',
            'timestamp' => 1434577163,
          ),
          'local' => (object) array(
            'project' => 'transliteration',
            'langcode' => 'es',
            'version' => '7.x-3.2',
            'type' => 'local',
            'filename' => 'transliteration-7.x-3.2.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://transliteration-7.x-3.2.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'variable' => array(
      'es' => (object) array(
        'name' => 'variable',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.5',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'variable',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1411707412,
        'last_checked' => 1442425421,
        'files' => array(
          'remote' => (object) array(
            'project' => 'variable',
            'langcode' => 'es',
            'version' => '7.x-2.5',
            'type' => 'remote',
            'filename' => 'variable-7.x-2.5.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/variable/variable-7.x-2.5.es.po',
            'timestamp' => 1411707412,
          ),
          'local' => (object) array(
            'project' => 'variable',
            'langcode' => 'es',
            'version' => '7.x-2.5',
            'type' => 'local',
            'filename' => 'variable-7.x-2.5.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://variable-7.x-2.5.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'video_filter' => array(
      'es' => (object) array(
        'name' => 'video_filter',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.1',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'video_filter',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1434677966,
        'last_checked' => 1442425423,
        'files' => array(
          'remote' => (object) array(
            'project' => 'video_filter',
            'langcode' => 'es',
            'version' => '7.x-3.1',
            'type' => 'remote',
            'filename' => 'video_filter-7.x-3.1.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/video_filter/video_filter-7.x-3.1.es.po',
            'timestamp' => 1434677966,
          ),
          'local' => (object) array(
            'project' => 'video_filter',
            'langcode' => 'es',
            'version' => '7.x-3.1',
            'type' => 'local',
            'filename' => 'video_filter-7.x-3.1.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://video_filter-7.x-3.1.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'views' => array(
      'es' => (object) array(
        'name' => 'views',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.11',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'views',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1434681857,
        'last_checked' => 1442425423,
        'files' => array(
          'remote' => (object) array(
            'project' => 'views',
            'langcode' => 'es',
            'version' => '7.x-3.11',
            'type' => 'remote',
            'filename' => 'views-7.x-3.11.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/views/views-7.x-3.11.es.po',
            'timestamp' => 1434681857,
          ),
          'local' => (object) array(
            'project' => 'views',
            'langcode' => 'es',
            'version' => '7.x-3.11',
            'type' => 'local',
            'filename' => 'views-7.x-3.11.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://views-7.x-3.11.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'views_bulk_operations' => array(
      'es' => (object) array(
        'name' => 'views_bulk_operations',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-3.3',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'views_bulk_operations',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1440199740,
        'last_checked' => 1442425423,
        'files' => array(
          'remote' => (object) array(
            'project' => 'views_bulk_operations',
            'langcode' => 'es',
            'version' => '7.x-3.3',
            'type' => 'remote',
            'filename' => 'views_bulk_operations-7.x-3.3.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/views_bulk_operations/views_bulk_operations-7.x-3.3.es.po',
            'timestamp' => 1440199740,
          ),
          'local' => (object) array(
            'project' => 'views_bulk_operations',
            'langcode' => 'es',
            'version' => '7.x-3.3',
            'type' => 'local',
            'filename' => 'views_bulk_operations-7.x-3.3.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://views_bulk_operations-7.x-3.3.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'wysiwyg' => array(
      'es' => (object) array(
        'name' => 'wysiwyg',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-2.2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'wysiwyg',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1434685086,
        'last_checked' => 1442425425,
        'files' => array(
          'remote' => (object) array(
            'project' => 'wysiwyg',
            'langcode' => 'es',
            'version' => '7.x-2.2',
            'type' => 'remote',
            'filename' => 'wysiwyg-7.x-2.2.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/wysiwyg/wysiwyg-7.x-2.2.es.po',
            'timestamp' => 1434685086,
          ),
          'local' => (object) array(
            'project' => 'wysiwyg',
            'langcode' => 'es',
            'version' => '7.x-2.2',
            'type' => 'local',
            'filename' => 'wysiwyg-7.x-2.2.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://wysiwyg-7.x-2.2.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'wysiwyg_fields' => array(
      'es' => (object) array(
        'name' => 'wysiwyg_fields',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.x-dev',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'wysiwyg_fields',
        'langcode' => 'es',
        'type' => '',
        'timestamp' => 0,
        'last_checked' => 0,
        'files' => array(
          'remote' => (object) array(
            'project' => 'wysiwyg_fields',
            'langcode' => 'es',
            'version' => '7.x-1.x-dev',
            'type' => 'remote',
            'filename' => 'wysiwyg_fields-7.x-1.x-dev.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/wysiwyg_fields/wysiwyg_fields-7.x-1.x-dev.es.po',
          ),
          'local' => (object) array(
            'project' => 'wysiwyg_fields',
            'langcode' => 'es',
            'version' => '7.x-1.x-dev',
            'type' => 'local',
            'filename' => 'wysiwyg_fields-7.x-1.x-dev.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://wysiwyg_fields-7.x-1.x-dev.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
    'wysiwyg_filter' => array(
      'es' => (object) array(
        'name' => 'wysiwyg_filter',
        'project_type' => 'module',
        'core' => '7.x',
        'version' => '7.x-1.6-rc2',
        'server_pattern' => 'http://ftp.drupal.org/files/translations/%core/%project/%project-%release.%language.po',
        'status' => '1',
        'project' => 'wysiwyg_filter',
        'langcode' => 'es',
        'type' => 'remote',
        'timestamp' => 1417530703,
        'last_checked' => 1442425427,
        'files' => array(
          'remote' => (object) array(
            'project' => 'wysiwyg_filter',
            'langcode' => 'es',
            'version' => '7.x-1.6-rc2',
            'type' => 'remote',
            'filename' => 'wysiwyg_filter-7.x-1.6-rc2.es.po',
            'uri' => 'http://ftp.drupal.org/files/translations/7.x/wysiwyg_filter/wysiwyg_filter-7.x-1.6-rc2.es.po',
            'timestamp' => 1417530703,
          ),
          'local' => (object) array(
            'project' => 'wysiwyg_filter',
            'langcode' => 'es',
            'version' => '7.x-1.6-rc2',
            'type' => 'local',
            'filename' => 'wysiwyg_filter-7.x-1.6-rc2.es.po',
            'directory' => 'translations://',
            'uri' => 'translations://wysiwyg_filter-7.x-1.6-rc2.es.po',
          ),
        ),
        'language' => 'es',
        'filename' => '',
        'fileurl' => '',
        'uri' => '',
      ),
    ),
  );
  $export['l10n_update_translation_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_actividades';
  $strongarm->value = '1';
  $export['language_content_type_actividades'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_front_page_images';
  $strongarm->value = '0';
  $export['language_content_type_front_page_images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_count';
  $strongarm->value = 2;
  $export['language_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_default';
  $strongarm->value = (object) array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'en',
    'weight' => 0,
    'javascript' => '',
  );
  $export['language_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language';
  $strongarm->value = array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-session' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_session',
        'switcher' => 'locale_language_switcher_session',
        'url_rewrite' => 'locale_language_url_rewrite_session',
      ),
      'file' => 'includes/locale.inc',
    ),
    'language-default' => array(
      'callbacks' => array(
        'language' => 'language_from_default',
      ),
    ),
  );
  $export['language_negotiation_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_content';
  $strongarm->value = array(
    'locale-interface' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_interface',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_url';
  $strongarm->value = array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-url-fallback' => array(
      'callbacks' => array(
        'language' => 'locale_language_url_fallback',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_types';
  $strongarm->value = array(
    'language' => TRUE,
    'language_content' => FALSE,
    'language_url' => FALSE,
  );
  $export['language_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_language_providers_weight_language';
  $strongarm->value = array(
    'locale-url' => '-8',
    'locale-session' => '-6',
    'locale-user' => '-4',
    'locale-browser' => '-2',
    'language-default' => '10',
  );
  $export['locale_language_providers_weight_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mail_system';
  $strongarm->value = array(
    'default-system' => 'SmtpMailSystem',
  );
  $export['mail_system'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maintenance_mode';
  $strongarm->value = 0;
  $export['maintenance_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maintenance_mode_message';
  $strongarm->value = 'ge is currently under maintenance. We should be back shortly. Thank you for your patience.';
  $export['maintenance_mode_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_expanded';
  $strongarm->value = array();
  $export['menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_masks';
  $strongarm->value = array(
    0 => 501,
    1 => 250,
    2 => 245,
    3 => 242,
    4 => 238,
    5 => 126,
    6 => 125,
    7 => 124,
    8 => 123,
    9 => 122,
    10 => 121,
    11 => 119,
    12 => 117,
    13 => 63,
    14 => 62,
    15 => 61,
    16 => 60,
    17 => 59,
    18 => 58,
    19 => 56,
    20 => 44,
    21 => 31,
    22 => 30,
    23 => 29,
    24 => 27,
    25 => 26,
    26 => 24,
    27 => 23,
    28 => 21,
    29 => 20,
    30 => 15,
    31 => 14,
    32 => 13,
    33 => 11,
    34 => 8,
    35 => 7,
    36 => 6,
    37 => 5,
    38 => 3,
    39 => 2,
    40 => 1,
  );
  $export['menu_masks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_actividades';
  $strongarm->value = array();
  $export['menu_options_actividades'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_front_page_images';
  $strongarm->value = array();
  $export['menu_options_front_page_images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_actividades';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_actividades'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_front_page_images';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_front_page_images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'module_filter_recent_modules';
  $strongarm->value = array(
    'auge_contexts' => 1444765642,
    'auge_ftr_blocks' => 1444778047,
    'auge_who_are_multilingual' => 1444778047,
    'auge_ftr_blog' => 1444778047,
    'views_bulk_operations' => 1444778133,
  );
  $export['module_filter_recent_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodequeue_links';
  $strongarm->value = FALSE;
  $export['nodequeue_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = '1';
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_cron_last';
  $strongarm->value = '1444842506';
  $export['node_cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_actividades';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_actividades'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_front_page_images';
  $strongarm->value = array();
  $export['node_options_front_page_images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_front_page_images';
  $strongarm->value = '1';
  $export['node_preview_front_page_images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_actividades';
  $strongarm->value = 0;
  $export['node_submitted_actividades'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_front_page_images';
  $strongarm->value = 1;
  $export['node_submitted_front_page_images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = FALSE;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_contact_site_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_contact_site_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_blog_pattern';
  $strongarm->value = 'blogs/[user:name]';
  $export['pathauto_blog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_forum_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_forum_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_activity_pattern';
  $strongarm->value = '';
  $export['pathauto_node_activity_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blog_post_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_blog_post_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blog_post_es_pattern';
  $strongarm->value = '';
  $export['pathauto_node_blog_post_es_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blog_post_pattern';
  $strongarm->value = '';
  $export['pathauto_node_blog_post_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blog_post_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_blog_post_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = 'content/[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hyphen';
  $strongarm->value = 1;
  $export['pathauto_punctuation_hyphen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_blog_category_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_blog_category_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_getinvolved_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_getinvolved_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'users/[user:name]';
  $export['pathauto_user_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'path_alias_whitelist';
  $strongarm->value = array(
    'activities' => TRUE,
    'eform' => TRUE,
    'entrepreneur' => TRUE,
    'invest' => TRUE,
    'learn' => TRUE,
    'mentor' => TRUE,
    'node' => TRUE,
    'projects' => TRUE,
    'taxonomy' => TRUE,
    'user' => TRUE,
    'whoweare' => TRUE,
  );
  $export['path_alias_whitelist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pm_existing_pages_disabled_contact_form_example';
  $strongarm->value = FALSE;
  $export['pm_existing_pages_disabled_contact_form_example'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_actividades';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_actividades'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_activity';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_activity'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_blog_post';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_front_page_images';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_front_page_images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_personnel';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_personnel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_projects';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_projects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_stages';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_stages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_403';
  $strongarm->value = '';
  $export['site_403'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_404';
  $strongarm->value = '';
  $export['site_404'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = 'CR';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'home';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'edgar@estudiomanati.com';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Auge';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = '';
  $export['site_slogan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smtp_allowhtml';
  $strongarm->value = 0;
  $export['smtp_allowhtml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smtp_debugging';
  $strongarm->value = 1;
  $export['smtp_debugging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smtp_from';
  $strongarm->value = '';
  $export['smtp_from'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smtp_fromname';
  $strongarm->value = '';
  $export['smtp_fromname'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smtp_host';
  $strongarm->value = 'smtp.gmail.com';
  $export['smtp_host'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smtp_hostbackup';
  $strongarm->value = '';
  $export['smtp_hostbackup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smtp_library';
  $strongarm->value = 'profiles/manati/modules/contrib/smtp/smtp.module';
  $export['smtp_library'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smtp_on';
  $strongarm->value = '1';
  $export['smtp_on'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smtp_password';
  $strongarm->value = 'Albus.713';
  $export['smtp_password'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smtp_port';
  $strongarm->value = '465';
  $export['smtp_port'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smtp_previous_mail_system';
  $strongarm->value = 'DefaultMailSystem';
  $export['smtp_previous_mail_system'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smtp_protocol';
  $strongarm->value = 'ssl';
  $export['smtp_protocol'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smtp_queue';
  $strongarm->value = 0;
  $export['smtp_queue'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smtp_username';
  $strongarm->value = 'edgar@estudiomanati.com';
  $export['smtp_username'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'text_body_field_contact_contact_english';
  $strongarm->value = '';
  $export['text_body_field_contact_contact_english'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'text_body_field_contact_contact_spanish';
  $strongarm->value = '';
  $export['text_body_field_contact_contact_spanish'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'manati';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 0,
    'toggle_name' => 1,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
  );
  $export['theme_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_seven_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'jquery_update_jquery_version' => 'default',
  );
  $export['theme_seven_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_last_check';
  $strongarm->value = 1445019254;
  $export['update_last_check'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '3';
  $export['user_admin_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = '1';
  $export['user_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_dimensions';
  $strongarm->value = '1024x1024';
  $export['user_picture_dimensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_file_size';
  $strongarm->value = '800';
  $export['user_picture_file_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_style';
  $strongarm->value = 'thumbnail';
  $export['user_picture_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = 1;
  $export['user_register'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'variable_module_list';
  $strongarm->value = array(
    'i18n' => array(
      0 => 'i18n_language_list',
    ),
    'i18n_string' => array(
      0 => 'i18n_string_translate_langcode_en',
      1 => 'i18n_string_allowed_formats',
      2 => 'i18n_string_source_language',
      3 => 'i18n_string_debug',
    ),
    'i18n_node' => array(
      0 => 'i18n_hide_translation_links',
      1 => 'i18n_node_default_language_none',
      2 => 'i18n_node_options_activity',
      3 => 'i18n_node_options_article',
      4 => 'i18n_node_options_page',
      5 => 'i18n_node_options_blog_post',
      6 => 'i18n_node_options_personnel',
      7 => 'i18n_node_options_projects',
      8 => 'i18n_node_options_stages',
      9 => 'i18n_node_extended_activity',
      10 => 'i18n_node_extended_article',
      11 => 'i18n_node_extended_page',
      12 => 'i18n_node_extended_blog_post',
      13 => 'i18n_node_extended_personnel',
      14 => 'i18n_node_extended_projects',
      15 => 'i18n_node_extended_stages',
    ),
  );
  $export['variable_module_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_defaults';
  $strongarm->value = array();
  $export['views_defaults'] = $strongarm;

  return $export;
}
