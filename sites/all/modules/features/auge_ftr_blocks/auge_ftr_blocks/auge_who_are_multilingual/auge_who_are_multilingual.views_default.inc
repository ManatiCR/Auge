<?php
/**
 * @file
 * auge_who_are_multilingual.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function auge_who_are_multilingual_views_default_views() {
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_personnel_photo' => 'field_personnel_photo',
    'field_occupation' => 'field_occupation',
    'draggableviews' => 'draggableviews',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_personnel_photo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_occupation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_personnel_photo']['field_api_classes'] = TRUE;
  /* Field: Content: Occupation */
  $handler->display->display_options['fields']['field_occupation']['id'] = 'field_occupation';
  $handler->display->display_options['fields']['field_occupation']['table'] = 'field_data_field_occupation';
  $handler->display->display_options['fields']['field_occupation']['field'] = 'field_occupation';
  $handler->display->display_options['fields']['field_occupation']['label'] = '';
  $handler->display->display_options['fields']['field_occupation']['element_type'] = '0';
  $handler->display->display_options['fields']['field_occupation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_occupation']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_occupation']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_occupation']['field_api_classes'] = TRUE;
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

  /* Display: Content pane Team */
  $handler = $view->new_display('panel_pane', 'Content pane Team', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Team';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'personnel_view:panel_pane_5';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
    9 => '9',
  );
  $handler->display->display_options['filters']['field_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_tid']['vocabulary'] = 'personnel_area';
  $handler->display->display_options['pane_category']['name'] = 'Personnel';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Content pane Consultative council */
  $handler = $view->new_display('panel_pane', 'Content pane Consultative council', 'panel_pane_2');
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
    10 => '10',
  );
  $handler->display->display_options['filters']['field_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_tid']['vocabulary'] = 'personnel_area';
  $handler->display->display_options['pane_category']['name'] = 'Personnel';
  $handler->display->display_options['pane_category']['weight'] = '1';

  /* Display: Content pane Mentors */
  $handler = $view->new_display('panel_pane', 'Content pane Mentors', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mentors';
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
    12 => '12',
  );
  $handler->display->display_options['filters']['field_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_tid']['vocabulary'] = 'personnel_area';
  $handler->display->display_options['pane_category']['name'] = 'Personnel';
  $handler->display->display_options['pane_category']['weight'] = '3';

  /* Display: Content pane Team */
  $handler = $view->new_display('panel_pane', 'Content pane Team', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Team';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_personnel_photo']['field_api_classes'] = TRUE;
  /* Field: Content: Occupation */
  $handler->display->display_options['fields']['field_occupation']['id'] = 'field_occupation';
  $handler->display->display_options['fields']['field_occupation']['table'] = 'field_data_field_occupation';
  $handler->display->display_options['fields']['field_occupation']['field'] = 'field_occupation';
  $handler->display->display_options['fields']['field_occupation']['label'] = '';
  $handler->display->display_options['fields']['field_occupation']['element_type'] = '0';
  $handler->display->display_options['fields']['field_occupation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_occupation']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_occupation']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_occupation']['field_api_classes'] = TRUE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 1;
  /* Field: Draggableviews: Weight */
  $handler->display->display_options['fields']['weight']['id'] = 'weight';
  $handler->display->display_options['fields']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['fields']['weight']['field'] = 'weight';
  $handler->display->display_options['fields']['weight']['label'] = '';
  $handler->display->display_options['fields']['weight']['element_label_colon'] = FALSE;
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
    9 => '9',
  );
  $handler->display->display_options['filters']['field_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_area_tid']['vocabulary'] = 'personnel_area';
  $handler->display->display_options['pane_category']['name'] = 'Personnel';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $translatables['personnel_view'] = array(
    t('Master'),
    t('Consultative council'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content pane Team'),
    t('Team'),
    t('Personnel'),
    t('Content pane Consultative council'),
    t('Content pane Mentors'),
    t('Mentors'),
    t('Content pane Advisors'),
    t('Advisors'),
    t('.'),
    t(','),
  );
  $export['personnel_view'] = $view;

  return $export;
}
