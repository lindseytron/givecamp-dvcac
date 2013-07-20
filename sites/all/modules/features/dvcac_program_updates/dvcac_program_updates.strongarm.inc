<?php
/**
 * @file
 * dvcac_program_updates.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dvcac_program_updates_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_program_update';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_program_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_program_update';
  $strongarm->value = '1';
  $export['node_preview_program_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_program_update';
  $strongarm->value = 1;
  $export['node_submitted_program_update'] = $strongarm;

  return $export;
}
