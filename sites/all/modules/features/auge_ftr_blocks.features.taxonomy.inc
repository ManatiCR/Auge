<?php
/**
 * @file
 * auge_ftr_blocks.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function auge_ftr_blocks_taxonomy_default_vocabularies() {
  return array(
    'getinvolved' => array(
      'name' => 'Get involved',
      'machine_name' => 'getinvolved',
      'description' => 'The 4 types of engagement',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
