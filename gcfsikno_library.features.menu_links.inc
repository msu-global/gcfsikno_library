<?php
/**
 * @file
 * gcfsikno_library.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function gcfsikno_library_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_library:library
  $menu_links['main-menu_library:library'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'library',
    'router_path' => 'library',
    'link_title' => 'Library',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_library:library',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Library');


  return $menu_links;
}
