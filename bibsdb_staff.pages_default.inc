<?php
/**
 * @file
 * bibsdb_staff.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function bibsdb_staff_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'bibsdb_staff';
  $page->task = 'page';
  $page->admin_title = 'Bibsdb staff';
  $page->admin_description = '';
  $page->path = 'personale';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_bibsdb_staff_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'bibsdb_staff';
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
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Staff at: %node:title';
  $display->uuid = '4df77cab-3520-404a-ba4b-401bfde10629';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c508d006-ea02-4054-a126-31194adf9ae4';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'og_menu-og_single_menu_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c508d006-ea02-4054-a126-31194adf9ae4';
    $display->content['new-c508d006-ea02-4054-a126-31194adf9ae4'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-c508d006-ea02-4054-a126-31194adf9ae4';
    $pane = new stdClass();
    $pane->pid = 'new-d49c39ea-cec6-44a5-949c-a9c7e60da317';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_staff-ding_staff_list_all';
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
    $pane->uuid = 'd49c39ea-cec6-44a5-949c-a9c7e60da317';
    $display->content['new-d49c39ea-cec6-44a5-949c-a9c7e60da317'] = $pane;
    $display->panels['main_content'][0] = 'new-d49c39ea-cec6-44a5-949c-a9c7e60da317';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['bibsdb_staff'] = $page;

  return $pages;

}
