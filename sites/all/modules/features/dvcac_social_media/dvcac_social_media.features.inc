<?php
/**
 * @file
 * dvcac_social_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dvcac_social_media_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
