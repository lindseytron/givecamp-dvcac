<?php
/**
 * @file
 * dvcac_banner_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dvcac_banner_slideshow_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dvcac_banner_slideshow_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function dvcac_banner_slideshow_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: banner_slideshow_queue
  $nodequeues['banner_slideshow_queue'] = array(
    'name' => 'banner_slideshow_queue',
    'title' => 'Banner Slideshow Queue',
    'subqueue_title' => '',
    'size' => 5,
    'link' => 'Add banner to front page slideshow',
    'link_remove' => 'Remove banner from front page slideshow',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'banner_image',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function dvcac_banner_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: banner_image.
  $styles['banner_image'] = array(
    'name' => 'banner_image',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 900,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function dvcac_banner_slideshow_node_info() {
  $items = array(
    'banner_image' => array(
      'name' => t('Banner Image'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
