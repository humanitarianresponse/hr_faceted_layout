<?php
/**
 * @file
 * hr_faceted_layout.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hr_faceted_layout_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
}
