<?php
/**
 * @file
 * tifeature_contactform.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tifeature_contactform_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
