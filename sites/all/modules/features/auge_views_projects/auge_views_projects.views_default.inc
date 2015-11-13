<?php
/**
 * @file
 * auge_views_projects.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function auge_views_projects_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Project image */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_project_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'image_style' => 'project_logo',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_project_image']['field_api_classes'] = TRUE;
  /* Field: Content: Project URL */
  $handler->display->display_options['fields']['field_project_url']['id'] = 'field_project_url';
  $handler->display->display_options['fields']['field_project_url']['table'] = 'field_data_field_project_url';
  $handler->display->display_options['fields']['field_project_url']['field'] = 'field_project_url';
  $handler->display->display_options['fields']['field_project_url']['label'] = '';
  $handler->display->display_options['fields']['field_project_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_project_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_url']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_project_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_project_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_project_url']['field_api_classes'] = TRUE;
  /* Field: Content: Project type */
  $handler->display->display_options['fields']['field_project_type']['id'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['table'] = 'field_data_field_project_type';
  $handler->display->display_options['fields']['field_project_type']['field'] = 'field_project_type';
  $handler->display->display_options['fields']['field_project_type']['label'] = '';
  $handler->display->display_options['fields']['field_project_type']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_project_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_type']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_project_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_project_type']['field_api_classes'] = TRUE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'projects' => 'projects',
  );

  /* Display: Main Projects */
  $handler = $view->new_display('panel_pane', 'Main Projects', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Projects made:';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Project image */
  $handler->display->display_options['fields']['field_project_image']['id'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['table'] = 'field_data_field_project_image';
  $handler->display->display_options['fields']['field_project_image']['field'] = 'field_project_image';
  $handler->display->display_options['fields']['field_project_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_project_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_project_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_project_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_image']['settings'] = array(
    'image_style' => 'project_logo',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_project_image']['field_api_classes'] = TRUE;
  /* Field: Content: Project URL */
  $handler->display->display_options['fields']['field_project_url']['id'] = 'field_project_url';
  $handler->display->display_options['fields']['field_project_url']['table'] = 'field_data_field_project_url';
  $handler->display->display_options['fields']['field_project_url']['field'] = 'field_project_url';
  $handler->display->display_options['fields']['field_project_url']['label'] = '';
  $handler->display->display_options['fields']['field_project_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_project_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_url']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_project_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_project_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_project_url']['field_api_classes'] = TRUE;
  $handler->display->display_options['pane_category']['name'] = 'Projects';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Learn Projects */
  $handler = $view->new_display('panel_pane', 'Learn Projects', 'panel_pane_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
    'projects' => 'projects',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    9 => '9',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'getinvolved';
  $handler->display->display_options['pane_category']['name'] = 'Projects';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Entrepreneur Projects */
  $handler = $view->new_display('panel_pane', 'Entrepreneur Projects', 'panel_pane_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
    'projects' => 'projects',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    10 => '10',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'getinvolved';
  $handler->display->display_options['pane_category']['name'] = 'Projects';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Mentor Projects */
  $handler = $view->new_display('panel_pane', 'Mentor Projects', 'panel_pane_4');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
    'projects' => 'projects',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    11 => '11',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'getinvolved';
  $handler->display->display_options['pane_category']['name'] = 'Projects';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Invest Projects */
  $handler = $view->new_display('panel_pane', 'Invest Projects', 'panel_pane_5');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
    'projects' => 'projects',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    12 => '12',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'getinvolved';
  $handler->display->display_options['pane_category']['name'] = 'Projects';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $translatables['projects'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Main Projects'),
    t('Projects made:'),
    t('Projects'),
    t('Learn Projects'),
    t('Entrepreneur Projects'),
    t('Mentor Projects'),
    t('Invest Projects'),
  );
  $export['projects'] = $view;

  return $export;
}
