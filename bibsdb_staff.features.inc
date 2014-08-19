<?php
/**
 * @file
 * bibsdb_staff.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bibsdb_staff_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
