<?php
/**
 * @file
 * dvcac_infographics.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dvcac_infographics_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function dvcac_infographics_node_info() {
  $items = array(
    'infographic' => array(
      'name' => t('Infographic'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
