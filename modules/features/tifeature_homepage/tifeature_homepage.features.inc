<?php
/**
 * @file
 * tifeature_homepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tifeature_homepage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
