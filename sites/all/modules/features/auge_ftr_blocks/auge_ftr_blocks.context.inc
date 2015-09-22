<?php
/**
 * @file
 * auge_ftr_blocks.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function auge_ftr_blocks_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact_block_translation';
  $context->description = 'This changes the block according to the language';
  $context->tag = '';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'en' => 'en',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'footer_fourthcolumn',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('This changes the block according to the language');
  $export['contact_block_translation'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact_block_translation_spanish';
  $context->description = 'This changes the block according to the language';
  $context->tag = '';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'es' => 'es',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'footer_fourthcolumn',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('This changes the block according to the language');
  $export['contact_block_translation_spanish'] = $context;

  return $export;
}
