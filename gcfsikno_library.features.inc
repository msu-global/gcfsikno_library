<?php
/**
 * @file
 * gcfsikno_library.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gcfsikno_library_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gcfsikno_library_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gcfsikno_library_node_info() {
  $items = array(
    'library_resource' => array(
      'name' => t('Library Resource'),
      'base' => 'node_content',
      'description' => t('A resource, which is a binary file of some sort: such as a PDF document, an MP3 audio file, or a JPG picture file.

A resource can be uploaded to private files, public files, or it can simply be a link to another URL.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
