<?php
/**
 * @file
 * gcfsikno_library.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gcfsikno_library_taxonomy_default_vocabularies() {
  return array(
    'document_authors' => array(
      'name' => 'Document Authors',
      'machine_name' => 'document_authors',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'resource_type' => array(
      'name' => 'Document Type',
      'machine_name' => 'resource_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
