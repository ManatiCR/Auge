<?php
/**
 * @file
 * auge_common_fieds.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function auge_common_fieds_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_activity|node|activity|form';
  $field_group->group_name = 'group_activity';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'activity';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Activity',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_involucrese',
      2 => 'field_activity_image',
      3 => 'field_activity_date',
      4 => 'title',
      5 => 'path',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-activity field-group-tabs',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_activity|node|activity|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blog_post|node|blog_post|form';
  $field_group->group_name = 'group_blog_post';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog_post';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Blog Post',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_blog_image',
      2 => 'field_post_category',
      3 => 'field_text_image',
      4 => 'title',
      5 => 'path',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-blog-post field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_blog_post|node|blog_post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_form|entityform|contact_form|default';
  $field_group->group_name = 'group_contact_form';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'contact_form';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact form',
    'weight' => '0',
    'children' => array(
      0 => 'field_name',
      1 => 'field_email',
      2 => 'field_subject',
      3 => 'field_message',
      4 => 'field_contacted_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_contact_form|entityform|contact_form|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personnel|node|personnel|form';
  $field_group->group_name = 'group_personnel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'personnel';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personnel',
    'weight' => '0',
    'children' => array(
      0 => 'field_area',
      1 => 'field_personnel_photo',
      2 => 'field_occupation',
      3 => 'field_role',
      4 => 'title',
      5 => 'path',
      6 => 'field_description',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-personnel field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_personnel|node|personnel|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stages|node|stages|form';
  $field_group->group_name = 'group_stages';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stages';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Stages',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_get_involved_category',
      2 => 'title',
      3 => 'path',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-stages field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_stages|node|stages|form'] = $field_group;

  return $export;
}
