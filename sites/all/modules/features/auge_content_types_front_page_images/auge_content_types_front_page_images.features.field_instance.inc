<?php
/**
 * @file
 * auge_content_types_front_page_images.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function auge_content_types_front_page_images_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-front_page_images-field_front_image_button'
  $field_instances['node-front_page_images-field_front_image_button'] = array(
    'bundle' => 'front_page_images',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_front_image_button',
    'label' => 'Front image button',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
      'wysiwyg_fields' => array(
        'settings' => array(
          'advanced' => array(
            'delete' => 1,
            'hide' => 1,
          ),
          'formatters' => array(),
          'icon' => '6f7621a02161e347e66d99d8ace540a3',
          'label' => 'Front image button',
        ),
        'status' => 0,
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 80,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'node-front_page_images-field_front_image_subtitle'
  $field_instances['node-front_page_images-field_front_image_subtitle'] = array(
    'bundle' => 'front_page_images',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_front_image_subtitle',
    'label' => 'Front image subtitle',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
      'wysiwyg_fields' => array(
        'settings' => array(
          'advanced' => array(
            'delete' => 1,
            'hide' => 1,
          ),
          'formatters' => array(),
          'icon' => '6f7621a02161e347e66d99d8ace540a3',
          'label' => 'Front image subtitle',
        ),
        'status' => 0,
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 80,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-front_page_images-field_front_image_title'
  $field_instances['node-front_page_images-field_front_image_title'] = array(
    'bundle' => 'front_page_images',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_front_image_title',
    'label' => 'Front image title',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
      'wysiwyg_fields' => array(
        'settings' => array(
          'advanced' => array(
            'delete' => 1,
            'hide' => 1,
          ),
          'formatters' => array(),
          'icon' => '6f7621a02161e347e66d99d8ace540a3',
          'label' => 'Front image title',
        ),
        'status' => 0,
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 6,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-front_page_images-field_main_image'
  $field_instances['node-front_page_images-field_main_image'] = array(
    'bundle' => 'front_page_images',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_image',
    'label' => 'Main image',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Front image button');
  t('Front image subtitle');
  t('Front image title');
  t('Main image');

  return $field_instances;
}
