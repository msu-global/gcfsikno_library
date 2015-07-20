<?php
/**
 * @file
 * gcfsikno_library.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function gcfsikno_library_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__library_resource';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Library Resource',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'library_resource',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'library_resource' => 'library_resource',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'spartan_twocol_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '807b623d-c1df-470e-908c-5242d15e520f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b08a1bc6-10d1-4b0f-aa1e-8c43289d6afe';
    $pane->panel = 'left';
    $pane->type = 'node_form_title';
    $pane->subtype = 'node_form_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b08a1bc6-10d1-4b0f-aa1e-8c43289d6afe';
    $display->content['new-b08a1bc6-10d1-4b0f-aa1e-8c43289d6afe'] = $pane;
    $display->panels['left'][0] = 'new-b08a1bc6-10d1-4b0f-aa1e-8c43289d6afe';
    $pane = new stdClass();
    $pane->pid = 'new-1f7e62ef-fdd8-4718-a80e-613595f87a71';
    $pane->panel = 'main';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1f7e62ef-fdd8-4718-a80e-613595f87a71';
    $display->content['new-1f7e62ef-fdd8-4718-a80e-613595f87a71'] = $pane;
    $display->panels['main'][0] = 'new-1f7e62ef-fdd8-4718-a80e-613595f87a71';
    $pane = new stdClass();
    $pane->pid = 'new-54002b08-2414-459c-9496-36302b5f5ef7';
    $pane->panel = 'right';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_resource';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'well well-lg',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '54002b08-2414-459c-9496-36302b5f5ef7';
    $display->content['new-54002b08-2414-459c-9496-36302b5f5ef7'] = $pane;
    $display->panels['right'][0] = 'new-54002b08-2414-459c-9496-36302b5f5ef7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit__library_resource'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__resource';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -98;
  $handler->conf = array(
    'title' => 'Resource',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Author',
        'keyword' => 'author',
        'name' => 'entity_from_schema:uid-node-user',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'name' => 'resource',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'library_resource' => 'library_resource',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'spartan_twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '89bb2a18-d999-4f69-88f1-0f45c46ccd8a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-03e0e043-52fc-49f4-9441-5cd8bd818c6c';
    $pane->panel = 'left';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '03e0e043-52fc-49f4-9441-5cd8bd818c6c';
    $display->content['new-03e0e043-52fc-49f4-9441-5cd8bd818c6c'] = $pane;
    $display->panels['left'][0] = 'new-03e0e043-52fc-49f4-9441-5cd8bd818c6c';
    $pane = new stdClass();
    $pane->pid = 'new-4f9b09ec-84fb-47f4-bda1-768da1178dd3';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_user_avatar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'file_rendered',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'file_view_mode' => 'teaser',
      ),
      'context' => 'relationship_entity_from_schema:uid-node-user_1',
      'override_title' => 1,
      'override_title_text' => 'Uploaded by',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4f9b09ec-84fb-47f4-bda1-768da1178dd3';
    $display->content['new-4f9b09ec-84fb-47f4-bda1-768da1178dd3'] = $pane;
    $display->panels['right'][0] = 'new-4f9b09ec-84fb-47f4-bda1-768da1178dd3';
    $pane = new stdClass();
    $pane->pid = 'new-3d008af7-3fe3-48cd-9544-0a3ee6efde04';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'name_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'markup' => 0,
        'output' => 'default',
        'format' => 'default',
        'multiple' => 'default',
        'multiple_delimiter' => ', ',
        'multiple_and' => 'text',
        'multiple_delimiter_precedes_last' => 'never',
        'multiple_el_al_min' => '3',
        'multiple_el_al_first' => '1',
      ),
      'context' => 'relationship_entity_from_schema:uid-node-user_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3d008af7-3fe3-48cd-9544-0a3ee6efde04';
    $display->content['new-3d008af7-3fe3-48cd-9544-0a3ee6efde04'] = $pane;
    $display->panels['right'][1] = 'new-3d008af7-3fe3-48cd-9544-0a3ee6efde04';
    $pane = new stdClass();
    $pane->pid = 'new-48dd4634-e3af-4111-8a15-c73c63d4021f';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'user:field_user_bio';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_entity_from_schema:uid-node-user_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '48dd4634-e3af-4111-8a15-c73c63d4021f';
    $display->content['new-48dd4634-e3af-4111-8a15-c73c63d4021f'] = $pane;
    $display->panels['right'][2] = 'new-48dd4634-e3af-4111-8a15-c73c63d4021f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3d008af7-3fe3-48cd-9544-0a3ee6efde04';
  $handler->conf['display'] = $display;
  $export['node_view__resource'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function gcfsikno_library_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'resource_library';
  $page->task = 'page';
  $page->admin_title = 'Resource Library';
  $page->admin_description = 'A list of library resources.';
  $page->path = 'library';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Library',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_resource_library__panel_context_cbc3fc33-3fc6-4b86-af81-f3d555f53d7e';
  $handler->task = 'page';
  $handler->subtask = 'resource_library';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'spartan_onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Resource Library';
  $display->uuid = '4fc5205f-0ec1-4586-890e-fd164c8eeb91';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1c638f0c-cc8c-4f1a-a300-a9d8ddda56ce';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'resource_library-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1c638f0c-cc8c-4f1a-a300-a9d8ddda56ce';
    $display->content['new-1c638f0c-cc8c-4f1a-a300-a9d8ddda56ce'] = $pane;
    $display->panels['main'][0] = 'new-1c638f0c-cc8c-4f1a-a300-a9d8ddda56ce';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1c638f0c-cc8c-4f1a-a300-a9d8ddda56ce';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['resource_library'] = $page;

  return $pages;

}
