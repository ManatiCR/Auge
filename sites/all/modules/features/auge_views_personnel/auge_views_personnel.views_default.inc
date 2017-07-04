<?php
/**
 * @file
 * auge_views_personnel.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function auge_views_personnel_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'personnel_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Personnel view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Consultative council';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'personel-row';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Personnel photo */
  $handler->display->display_options['fields']['field_personnel_photo']['id'] = 'field_personnel_photo';
  $handler->display->display_options['fields']['field_personnel_photo']['table'] = 'field_data_field_personnel_photo';
  $handler->display->display_options['fields']['field_personnel_photo']['field'] = 'field_personnel_photo';
  $handler->display->display_options['fields']['field_personnel_photo']['label'] = '';
  $handler->display->display_options['fields']['field_personnel_photo']['element_type'] = '0';
  $handler->display->display_options['fields']['field_personnel_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_personnel_photo']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_personnel_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_personnel_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_personnel_photo']['settings'] = array(
    'image_style' => 'people_picture',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_personnel_photo']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3 class="personnel-name">[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'personnel-name';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Occupation */
  $handler->display->display_options['fields']['field_occupation']['id'] = 'field_occupation';
  $handler->display->display_options['fields']['field_occupation']['table'] = 'field_data_field_occupation';
  $handler->display->display_options['fields']['field_occupation']['field'] = 'field_occupation';
  $handler->display->display_options['fields']['field_occupation']['label'] = '';
  $handler->display->display_options['fields']['field_occupation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_occupation']['element_type'] = '0';
  $handler->display->display_options['fields']['field_occupation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_occupation']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_occupation']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_occupation']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_occupation']['field_api_classes'] = TRUE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'personnel-profile-link';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'See profile';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_description']['field_api_classes'] = TRUE;
  /* Field: Content: Personnel twitter */
  $handler->display->display_options['fields']['field_personnel_twitter']['id'] = 'field_personnel_twitter';
  $handler->display->display_options['fields']['field_personnel_twitter']['table'] = 'field_data_field_personnel_twitter';
  $handler->display->display_options['fields']['field_personnel_twitter']['field'] = 'field_personnel_twitter';
  $handler->display->display_options['fields']['field_personnel_twitter']['label'] = '';
  $handler->display->display_options['fields']['field_personnel_twitter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_personnel_twitter']['element_type'] = '0';
  $handler->display->display_options['fields']['field_personnel_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_personnel_twitter']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_personnel_twitter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_personnel_twitter']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_personnel_twitter']['field_api_classes'] = TRUE;
  /* Field: Content: Personnel LinkedIn */
  $handler->display->display_options['fields']['field_personnel_linkedin']['id'] = 'field_personnel_linkedin';
  $handler->display->display_options['fields']['field_personnel_linkedin']['table'] = 'field_data_field_personnel_linkedin';
  $handler->display->display_options['fields']['field_personnel_linkedin']['field'] = 'field_personnel_linkedin';
  $handler->display->display_options['fields']['field_personnel_linkedin']['label'] = '';
  $handler->display->display_options['fields']['field_personnel_linkedin']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_personnel_linkedin']['element_type'] = '0';
  $handler->display->display_options['fields']['field_personnel_linkedin']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_personnel_linkedin']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_personnel_linkedin']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_personnel_linkedin']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_personnel_linkedin']['field_api_classes'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<h3 class="personnel-name">[title]</h3>
<span class="personnel-occupation">[field_occupation]</span>
<div class="personnel-view-profile"><a>Ver perfil</a></div>';
  $handler->display->display_options['fields']['nid']['element_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nid']['element_wrapper_class'] = 'personnel-hover-content';
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = '<div class="personnel-overlay">
<div class="personnel-modal">
<span class="personnel-overlay-close">close</span>
<div>[field_personnel_photo]</div>
<h3 class="personnel-name">[title]</h3>
<div class="personnel-occupation">[field_occupation]</div>
<div class="personnel-twitter">[field_personnel_twitter]</div>
<div class="personnel-linkedin">[field_personnel_linkedin]</div>
<div class="personnel-description">[field_description]</div>
</div>
</div>';
  $handler->display->display_options['fields']['nid_1']['element_type'] = '0';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nid_1']['element_default_classes'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'personnel' => 'personnel',
  );
  /* Filter criterion: Content: Area (field_area) */
  $handler->display->display_options['filters']['field_area_tid']['id'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['table'] = 'field_data_field_area';
  $handler->display->display_options['filters']['field_area_tid']['field'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['value'] = array(
    11 => '11',
  );
  $handler->display->display_options['filters']['field_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_tid']['vocabulary'] = 'personnel_area';
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'en' => 'en',
  );

  /* Display: Content pane Team */
  $handler = $view->new_display('panel_pane', 'Content pane Team', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Team';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Personnel';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Content pane Board of advisors */
  $handler = $view->new_display('panel_pane', 'Content pane Board of advisors', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Board of advisors';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'personnel' => 'personnel',
  );
  /* Filter criterion: Content: Area (field_area) */
  $handler->display->display_options['filters']['field_area_tid']['id'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['table'] = 'field_data_field_area';
  $handler->display->display_options['filters']['field_area_tid']['field'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['value'] = array(
    14 => '14',
  );
  $handler->display->display_options['filters']['field_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_tid']['vocabulary'] = 'personnel_area';
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'en' => 'en',
  );
  $handler->display->display_options['pane_category']['name'] = 'Personnel';
  $handler->display->display_options['pane_category']['weight'] = '1';

  /* Display: Content pane Mentors */
  $handler = $view->new_display('panel_pane', 'Content pane Mentors', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mentors';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'personnel' => 'personnel',
  );
  /* Filter criterion: Content: Area (field_area) */
  $handler->display->display_options['filters']['field_area_tid']['id'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['table'] = 'field_data_field_area';
  $handler->display->display_options['filters']['field_area_tid']['field'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['value'] = array(
    15 => '15',
  );
  $handler->display->display_options['filters']['field_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_tid']['vocabulary'] = 'personnel_area';
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'en' => 'en',
  );
  $handler->display->display_options['pane_category']['name'] = 'Personnel';
  $handler->display->display_options['pane_category']['weight'] = '2';

  /* Display: Content pane Advisors */
  $handler = $view->new_display('panel_pane', 'Content pane Advisors', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Advisors';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'personnel' => 'personnel',
  );
  /* Filter criterion: Content: Area (field_area) */
  $handler->display->display_options['filters']['field_area_tid']['id'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['table'] = 'field_data_field_area';
  $handler->display->display_options['filters']['field_area_tid']['field'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['value'] = array(
    16 => '16',
  );
  $handler->display->display_options['filters']['field_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_tid']['vocabulary'] = 'personnel_area';
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'en' => 'en',
  );
  $handler->display->display_options['pane_category']['name'] = 'Personnel';
  $handler->display->display_options['pane_category']['weight'] = '3';

  /* Display: Content pane Team Spanish */
  $handler = $view->new_display('panel_pane', 'Content pane Team Spanish', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Team';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'equipo' => 'equipo',
    'features_extra_test_nodequeue' => 0,
    'fases_aprender' => 0,
    'fases_emprender' => 0,
    'consejo_consultivo' => 0,
    'red_warp' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Personnel photo */
  $handler->display->display_options['fields']['field_personnel_photo']['id'] = 'field_personnel_photo';
  $handler->display->display_options['fields']['field_personnel_photo']['table'] = 'field_data_field_personnel_photo';
  $handler->display->display_options['fields']['field_personnel_photo']['field'] = 'field_personnel_photo';
  $handler->display->display_options['fields']['field_personnel_photo']['label'] = '';
  $handler->display->display_options['fields']['field_personnel_photo']['element_type'] = '0';
  $handler->display->display_options['fields']['field_personnel_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_personnel_photo']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_personnel_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_personnel_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_personnel_photo']['settings'] = array(
    'image_style' => 'people_picture',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_personnel_photo']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3 class="personnel-name">[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'personnel-name';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Rol */
  $handler->display->display_options['fields']['field_role']['id'] = 'field_role';
  $handler->display->display_options['fields']['field_role']['table'] = 'field_data_field_role';
  $handler->display->display_options['fields']['field_role']['field'] = 'field_role';
  $handler->display->display_options['fields']['field_role']['label'] = '';
  $handler->display->display_options['fields']['field_role']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_role']['element_type'] = '0';
  $handler->display->display_options['fields']['field_role']['element_class'] = 'personnel-occupation';
  $handler->display->display_options['fields']['field_role']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_role']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_role']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_role']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_role']['field_api_classes'] = TRUE;
  /* Field: Content: Occupation */
  $handler->display->display_options['fields']['field_occupation']['id'] = 'field_occupation';
  $handler->display->display_options['fields']['field_occupation']['table'] = 'field_data_field_occupation';
  $handler->display->display_options['fields']['field_occupation']['field'] = 'field_occupation';
  $handler->display->display_options['fields']['field_occupation']['label'] = '';
  $handler->display->display_options['fields']['field_occupation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_occupation']['element_type'] = '0';
  $handler->display->display_options['fields']['field_occupation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_occupation']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_occupation']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_occupation']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_occupation']['field_api_classes'] = TRUE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'personnel-profile-link';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'See profile';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_description']['field_api_classes'] = TRUE;
  /* Field: Content: Personnel twitter */
  $handler->display->display_options['fields']['field_personnel_twitter']['id'] = 'field_personnel_twitter';
  $handler->display->display_options['fields']['field_personnel_twitter']['table'] = 'field_data_field_personnel_twitter';
  $handler->display->display_options['fields']['field_personnel_twitter']['field'] = 'field_personnel_twitter';
  $handler->display->display_options['fields']['field_personnel_twitter']['label'] = '';
  $handler->display->display_options['fields']['field_personnel_twitter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_personnel_twitter']['element_type'] = '0';
  $handler->display->display_options['fields']['field_personnel_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_personnel_twitter']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_personnel_twitter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_personnel_twitter']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_personnel_twitter']['field_api_classes'] = TRUE;
  /* Field: Content: Personnel LinkedIn */
  $handler->display->display_options['fields']['field_personnel_linkedin']['id'] = 'field_personnel_linkedin';
  $handler->display->display_options['fields']['field_personnel_linkedin']['table'] = 'field_data_field_personnel_linkedin';
  $handler->display->display_options['fields']['field_personnel_linkedin']['field'] = 'field_personnel_linkedin';
  $handler->display->display_options['fields']['field_personnel_linkedin']['label'] = '';
  $handler->display->display_options['fields']['field_personnel_linkedin']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_personnel_linkedin']['element_type'] = '0';
  $handler->display->display_options['fields']['field_personnel_linkedin']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_personnel_linkedin']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_personnel_linkedin']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_personnel_linkedin']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_personnel_linkedin']['field_api_classes'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<h3 class="personnel-name">[title]</h3>
<span class="personnel-occupation">[field_role]</span>
<div class="personnel-view-profile"><a>Ver perfil</a></div>';
  $handler->display->display_options['fields']['nid']['element_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nid']['element_wrapper_class'] = 'personnel-hover-content';
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = '<div class="personnel-overlay">
<div class="personnel-modal">
<span class="personnel-overlay-close">close</span>
<div>[field_personnel_photo]</div>
<h3 class="personnel-name">[title]</h3>
<div class="personnel-occupation">[field_occupation]</div>
<div class="personnel-twitter">[field_personnel_twitter]</div>
<div class="personnel-linkedin">[field_personnel_linkedin]</div>
<div class="personnel-description">[field_description]</div>
</div>
</div>';
  $handler->display->display_options['fields']['nid_1']['element_type'] = '0';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nid_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'personnel' => 'personnel',
  );
  /* Filter criterion: Content: Area (field_area) */
  $handler->display->display_options['filters']['field_area_tid']['id'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['table'] = 'field_data_field_area';
  $handler->display->display_options['filters']['field_area_tid']['field'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['value'] = array(
    13 => '13',
  );
  $handler->display->display_options['filters']['field_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_tid']['vocabulary'] = 'personnel_area';
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'es' => 'es',
  );
  $handler->display->display_options['pane_category']['name'] = 'Personnel';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Content pane Board of advisors Spanish */
  $handler = $view->new_display('panel_pane', 'Content pane Board of advisors Spanish', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Board of advisors';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'consejo_consultivo' => 'consejo_consultivo',
    'features_extra_test_nodequeue' => 0,
    'fases_aprender' => 0,
    'fases_emprender' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'personnel' => 'personnel',
  );
  /* Filter criterion: Content: Area (field_area) */
  $handler->display->display_options['filters']['field_area_tid']['id'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['table'] = 'field_data_field_area';
  $handler->display->display_options['filters']['field_area_tid']['field'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['value'] = array(
    14 => '14',
  );
  $handler->display->display_options['filters']['field_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_tid']['vocabulary'] = 'personnel_area';
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'es' => 'es',
  );
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '1';
  $handler->display->display_options['pane_category']['name'] = 'Personnel';
  $handler->display->display_options['pane_category']['weight'] = '1';

  /* Display: Content pane Mentors Spanish */
  $handler = $view->new_display('panel_pane', 'Content pane Mentors Spanish', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mentors';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'red_warp' => 'red_warp',
    'features_extra_test_nodequeue' => 0,
    'fases_aprender' => 0,
    'fases_emprender' => 0,
    'consejo_consultivo' => 0,
    'equipo' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'personnel' => 'personnel',
  );
  /* Filter criterion: Content: Area (field_area) */
  $handler->display->display_options['filters']['field_area_tid']['id'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['table'] = 'field_data_field_area';
  $handler->display->display_options['filters']['field_area_tid']['field'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['value'] = array(
    15 => '15',
  );
  $handler->display->display_options['filters']['field_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_tid']['vocabulary'] = 'personnel_area';
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'es' => 'es',
  );
  $handler->display->display_options['pane_category']['name'] = 'Personnel';
  $handler->display->display_options['pane_category']['weight'] = '2';

  /* Display: Content pane Advisors Spanish */
  $handler = $view->new_display('panel_pane', 'Content pane Advisors Spanish', 'panel_pane_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Advisors';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'personnel' => 'personnel',
  );
  /* Filter criterion: Content: Area (field_area) */
  $handler->display->display_options['filters']['field_area_tid']['id'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['table'] = 'field_data_field_area';
  $handler->display->display_options['filters']['field_area_tid']['field'] = 'field_area_tid';
  $handler->display->display_options['filters']['field_area_tid']['value'] = array(
    16 => '16',
  );
  $handler->display->display_options['filters']['field_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_tid']['vocabulary'] = 'personnel_area';
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'es' => 'es',
  );
  $handler->display->display_options['pane_category']['name'] = 'Personnel';
  $handler->display->display_options['pane_category']['weight'] = '3';
  $translatables['personnel_view'] = array(
    t('Master'),
    t('Consultative council'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<h3 class="personnel-name">[title]</h3>'),
    t('See profile'),
    t('<h3 class="personnel-name">[title]</h3>
<span class="personnel-occupation">[field_occupation]</span>
<div class="personnel-view-profile"><a>Ver perfil</a></div>'),
    t('<div class="personnel-overlay">
<div class="personnel-modal">
<span class="personnel-overlay-close">close</span>
<div>[field_personnel_photo]</div>
<h3 class="personnel-name">[title]</h3>
<div class="personnel-occupation">[field_occupation]</div>
<div class="personnel-twitter">[field_personnel_twitter]</div>
<div class="personnel-linkedin">[field_personnel_linkedin]</div>
<div class="personnel-description">[field_description]</div>
</div>
</div>'),
    t('Content pane Team'),
    t('Team'),
    t('Personnel'),
    t('Content pane Board of advisors'),
    t('Board of advisors'),
    t('Content pane Mentors'),
    t('Mentors'),
    t('Content pane Advisors'),
    t('Advisors'),
    t('Content pane Team Spanish'),
    t('queue'),
    t('<h3 class="personnel-name">[title]</h3>
<span class="personnel-occupation">[field_role]</span>
<div class="personnel-view-profile"><a>Ver perfil</a></div>'),
    t('Content pane Board of advisors Spanish'),
    t('Content pane Mentors Spanish'),
    t('Content pane Advisors Spanish'),
  );
  $export['personnel_view'] = $view;

  return $export;
}
