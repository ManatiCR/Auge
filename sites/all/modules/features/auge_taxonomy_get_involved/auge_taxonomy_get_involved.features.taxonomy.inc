<?php
/**
 * @file
 * auge_taxonomy_get_involved.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function auge_taxonomy_get_involved_taxonomy_default_vocabularies() {
  return array(
    'getinvolved' => array(
      'name' => 'Get involved',
      'machine_name' => 'getinvolved',
      'description' => 'The 4 types of engagement',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
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
