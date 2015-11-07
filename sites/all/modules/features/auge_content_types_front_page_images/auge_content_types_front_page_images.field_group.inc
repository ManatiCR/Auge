<?php
/**
 * @file
 * auge_content_types_front_page_images.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function auge_content_types_front_page_images_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_front_image|node|front_page_images|form';
  $field_group->group_name = 'group_front_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'front_page_images';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Front image',
    'weight' => '0',
    'children' => array(
      0 => 'field_main_image',
      1 => 'field_front_image_subtitle',
      2 => 'field_front_image_button',
      3 => 'title',
      4 => 'path',
      5 => 'field_front_image_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-front-image field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_front_image|node|front_page_images|form'] = $field_group;

  return $export;
}
