<?php
/**
 * @file
 * tifeature_coreconfig.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tifeature_coreconfig_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
