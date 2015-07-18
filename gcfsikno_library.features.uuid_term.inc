<?php
/**
 * @file
 * gcfsikno_library.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function gcfsikno_library_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Research summary',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '45d83dc9-313a-4349-80ed-2a7a34bdff4b',
    'vocabulary_machine_name' => 'resource_type',
  );
  $terms[] = array(
    'name' => 'White Paper',
    'description' => 'An authoritative report giving information or proposals on an issue.
',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5548cf54-8ab2-4651-9c48-198e16a505ee',
    'vocabulary_machine_name' => 'resource_type',
  );
  $terms[] = array(
    'name' => 'Notes',
    'description' => '<p>Notes from various presentations.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '7785c8d1-cd8f-4d4c-85ef-3cd4cbc04c07',
    'vocabulary_machine_name' => 'resource_type',
  );
  $terms[] = array(
    'name' => 'Journal Article',
    'description' => 'An article from a scholarly journal.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '972e0a6e-ac19-4e94-ae8b-93bb96d8be99',
    'vocabulary_machine_name' => 'resource_type',
  );
  $terms[] = array(
    'name' => 'Thesis',
    'description' => '<p>An essay that attempts to prove an argument is true.</p>
',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ceff6128-b124-492a-b67e-00ff7ab5a006',
    'vocabulary_machine_name' => 'resource_type',
  );
  $terms[] = array(
    'name' => 'Manuscript',
    'description' => 'An author\'s text that has not yet been published.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'cfd9255f-8bd0-42e4-991b-ae07cb767a72',
    'vocabulary_machine_name' => 'resource_type',
  );
  $terms[] = array(
    'name' => 'Scholarship',
    'description' => 'A grant or payment made to support a student\'s education, awarded on the basis of academic or other achievement.',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e805a8ac-db3e-4143-a4a7-a0af6ca7da0f',
    'vocabulary_machine_name' => 'resource_type',
  );
  return $terms;
}
