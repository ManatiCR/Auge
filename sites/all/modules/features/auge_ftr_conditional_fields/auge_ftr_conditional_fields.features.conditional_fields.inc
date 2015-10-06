<?php
/**
 * @file
 * auge_ftr_conditional_fields.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function auge_ftr_conditional_fields_conditional_fields_default_fields() {
  $items = array();

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'personnel',
    'dependent' => 'field_occupation',
    'dependee' => 'field_area',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'slide',
      'effect_options' => array(
        'speed' => 400,
      ),
      'element_view' => array(
        1 => 1,
        2 => 2,
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => 1,
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => 1,
          3 => 0,
        ),
        2 => array(
          1 => 1,
          3 => 0,
        ),
        3 => array(
          1 => 1,
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => 3,
      'value_form' => 12,
      'values' => array(
        0 => 10,
        1 => 11,
        2 => 12,
      ),
      'value' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'personnel',
    'dependent' => 'field_role',
    'dependee' => 'field_area',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'slide',
      'effect_options' => array(
        'speed' => 400,
      ),
      'element_view' => array(
        1 => 1,
        2 => 2,
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => 1,
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => 1,
          3 => 0,
        ),
        2 => array(
          1 => 1,
          3 => 0,
        ),
        3 => array(
          1 => 1,
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => 1,
      'value_form' => 9,
      'value' => array(
        0 => array(
          'tid' => 9,
        ),
      ),
      'values' => array(),
    ),
  );

  return $items;
}
