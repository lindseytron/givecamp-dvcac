<?php
/**
 * @file
 * dvcac_front_page.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function dvcac_front_page_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'home_template';
  $delta->name = 'Home Page Template';
  $delta->description = 'Changes to equal width three column regions for the home page';
  $delta->theme = 'dvcacomega';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_dvcacomega_settings' => array(
      'alpha_region_header_first_force' => 0,
      'alpha_region_header_first_columns' => '9',
      'alpha_region_header_second_zone' => 'branding',
      'alpha_region_header_second_columns' => '3',
      'alpha_region_header_second_equal_height_element' => 0,
      'alpha_region_sidebar_first_columns' => '4',
      'alpha_region_content_columns' => '4',
      'alpha_region_sidebar_second_columns' => '4',
      'alpha_region_footer_first_force' => 0,
      'alpha_region_footer_first_zone' => 'footer',
      'alpha_region_footer_first_prefix' => '0',
      'alpha_region_footer_first_columns' => '6',
      'alpha_region_footer_first_suffix' => '0',
      'alpha_region_footer_first_weight' => '1',
      'alpha_region_footer_first_position' => '0',
      'alpha_region_footer_first_css' => '',
      'alpha_region_footer_first_equal_height_element' => 0,
      'alpha_region_footer_first_equal_height_container' => 0,
      'alpha_region_footer_second_force' => 0,
      'alpha_region_footer_second_zone' => 'footer',
      'alpha_region_footer_second_prefix' => '0',
      'alpha_region_footer_second_columns' => '6',
      'alpha_region_footer_second_suffix' => '0',
      'alpha_region_footer_second_weight' => '2',
      'alpha_region_footer_second_position' => '0',
      'alpha_region_footer_second_css' => '',
      'alpha_region_footer_second_equal_height_element' => 0,
      'alpha_region_footer_second_equal_height_container' => 0,
    ),
  );
  $export['home_template'] = $delta;

  return $export;
}
