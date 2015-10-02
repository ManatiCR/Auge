<?php
/**
 * @file
 * auge_taxonomy_personnel.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function auge_taxonomy_personnel_taxonomy_default_vocabularies() {
  return array(
    'personnel_area' => array(
      'name' => 'Personnel Area',
      'machine_name' => 'personnel_area',
      'description' => '',
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
