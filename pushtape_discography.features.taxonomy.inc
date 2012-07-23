<?php
/**
 * @file
 * pushtape_discography.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pushtape_discography_taxonomy_default_vocabularies() {
  return array(
<<<<<<< HEAD
    'artist' => array(
      'name' => 'Artist',
      'machine_name' => 'artist',
      'description' => '',
=======
    'artists' => array(
      'name' => 'Artists',
      'machine_name' => 'artists',
      'description' => 'Associate tracks and albums with artists.',
>>>>>>> 8d5122173e86c68f6ee696f4869639aed9b24aa3
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
<<<<<<< HEAD
    'pushtape_tags' => array(
      'name' => 'Tags',
      'machine_name' => 'pushtape_tags',
=======
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
>>>>>>> 8d5122173e86c68f6ee696f4869639aed9b24aa3
      'description' => 'Use tags to group articles on similar topics into categories.',
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
