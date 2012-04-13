<?php
/**
 * @file
 * reference_sites.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function reference_sites_taxonomy_default_vocabularies() {
  return array(
    'region' => array(
      'name' => 'Region',
      'machine_name' => 'region',
      'description' => 'Norsk eller internasjonal',
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
