<?php
/**
 * @file
 * leverandorer.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function leverandorer_taxonomy_default_vocabularies() {
  return array(
    'company_location' => array(
      'name' => 'Leverandørplassering',
      'machine_name' => 'company_location',
      'description' => 'Hvor i landet ligger Drupal-leverandøren?',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
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
