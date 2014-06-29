<?php
/**
 * @file
 * tifeature_groupcontent.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function tifeature_groupcontent_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-0cb1ff6edc283232fedfe25026419659'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '0cb1ff6edc283232fedfe25026419659',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'therm' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'therm',
        'weight' => -11,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
