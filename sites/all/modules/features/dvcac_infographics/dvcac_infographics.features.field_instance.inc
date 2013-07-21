<?php
/**
 * @file
 * dvcac_infographics.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function dvcac_infographics_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-infographic-field_explanation'
  $field_instances['node-infographic-field_explanation'] = array(
    'bundle' => 'infographic',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Text that will go after the "Stat" number.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_explanation',
    'label' => 'Explanation',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-infographic-field_stat'
  $field_instances['node-infographic-field_stat'] = array(
    'bundle' => 'infographic',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Statistic/number.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_stat',
    'label' => 'Stat',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Explanation');
  t('Stat');
  t('Statistic/number.');
  t('Text that will go after the "Stat" number.');

  return $field_instances;
}
