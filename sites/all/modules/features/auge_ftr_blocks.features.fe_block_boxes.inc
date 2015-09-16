<?php
/**
 * @file
 * auge_ftr_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function auge_ftr_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Contact block';
  $fe_block_boxes->format = 'manati_texto_formato';
  $fe_block_boxes->machine_name = 'block_contacto';
  $fe_block_boxes->body = '<p><strong>SEDE CENTRAL UCR</strong></p><p>Casa emprendedora María Teresa Obregón, 100 metros este y 100 norte de la Fuente de la Hispanidad, San Pedro, San José.</p><p><strong>Teléfono:</strong></p><p>+506 2511-1334</p><p><strong>Contacto principal:</strong></p><p>luisalonso@augeucr.com</p>';

  $export['block_contacto'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Features Extra Test Block';
  $fe_block_boxes->format = 'plain_text';
  $fe_block_boxes->machine_name = 'features_extra_test_block';
  $fe_block_boxes->body = 'This block is used in automated testing for the Features Extra module.';

  $export['features_extra_test_block'] = $fe_block_boxes;

  return $export;
}
