<?php
/**
 * @file
 * tifeature_groupcontent.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tifeature_groupcontent_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tifeature_groupcontent_node_info() {
  $items = array(
    'report' => array(
      'name' => t('Report'),
      'base' => 'node_content',
      'description' => t('A report of a thermal imaging property'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'volunteer_group' => array(
      'name' => t('Volunteer group'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
