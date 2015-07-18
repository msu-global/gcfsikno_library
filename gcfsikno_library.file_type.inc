<?php
/**
 * @file
 * gcfsikno_library.file_type.inc
 */

/**
 * Implements hook_file_default_types().
 */
function gcfsikno_library_file_default_types() {
  $export = array();

  $file_type = new stdClass();
  $file_type->disabled = FALSE; /* Edit this to true to make a default file_type disabled initially */
  $file_type->api_version = 1;
  $file_type->type = 'presentation';
  $file_type->label = 'Presentation';
  $file_type->description = 'A presentation file, such as a Powerpoint or Keynote presentation.';
  $file_type->mimetypes = array(
    0 => 'application/vnd.ms-powerpoint',
    1 => 'application/vnd.ms-powerpoint.addin.macroEnabled.12',
    2 => 'application/vnd.ms-powerpoint.presentation.macroEnabled.12',
    3 => 'application/vnd.ms-powerpoint.slideshow.macroEnabled.12',
    4 => 'application/vnd.ms-powerpoint.template.macroEnabled.12',
    5 => 'application/vnd.openxmlformats-officedocument.presentationml.presentation',
    6 => 'application/vnd.openxmlformats-officedocument.presentationml.slideshow',
    7 => 'application/vnd.openxmlformats-officedocument.presentationml.template',
    8 => 'application/vnd.oasis.opendocument.presentation',
    9 => 'application/vnd.oasis.opendocument.presentation-template',
  );
  $export['presentation'] = $file_type;

  return $export;
}
