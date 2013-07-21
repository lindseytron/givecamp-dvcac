<?php
/**
 * @file
 * dvcac_testimonials.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dvcac_testimonials_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function dvcac_testimonials_node_info() {
  $items = array(
    'testimonial' => array(
      'name' => t('Testimonial'),
      'base' => 'node_content',
      'description' => t('Provides a testimonial about DVCAC'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
