<?php
/**
 * @file
 * auge_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function auge_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'activities_footer_english';
  $context->description = '';
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
        'views-proximas_actividades-block_1' => array(
          'module' => 'views',
          'delta' => 'proximas_actividades-block_1',
          'region' => 'footer_thirdcolumn',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['activities_footer_english'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'activities_footer_spanish';
  $context->description = '';
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
        'views-proximas_actividades-block_2' => array(
          'module' => 'views',
          'delta' => 'proximas_actividades-block_2',
          'region' => 'footer_thirdcolumn',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['activities_footer_spanish'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact_footer_english';
  $context->description = '';
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
        'auge_custom_blocks-contact_information' => array(
          'module' => 'auge_custom_blocks',
          'delta' => 'contact_information',
          'region' => 'footer_fourthcolumn',
          'weight' => '2',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['contact_footer_english'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact_footer_spanish';
  $context->description = '';
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
        'auge_custom_blocks-contact_information_spanish' => array(
          'module' => 'auge_custom_blocks',
          'delta' => 'contact_information_spanish',
          'region' => 'footer_fourthcolumn',
          'weight' => '3',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['contact_footer_spanish'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'main_menu_contact_english';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'en' => 'en',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => array(
      0 => 'main-menu:/contact',
    ),
  );
  $context->condition_mode = 0;
  $export['main_menu_contact_english'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'main_menu_contact_spanish';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'es' => 'es',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => array(
      0 => 'main-menu:/contacto',
    ),
  );
  $context->condition_mode = 0;
  $export['main_menu_contact_spanish'] = $context;

  return $export;
}
