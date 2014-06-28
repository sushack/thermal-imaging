<?php

$aliases['local'] = array(
  'uri' => 'localhost',
  'root' => 'DRUPAL ROOT',
  'path-aliases' => array(
    '%files' => 'sites/files/thermal',
   ),
  'instance' => array(
    'sources' => array(
      'makefile' => array(
        'url' => 'git@github.com:sushack/thermal-imaging.git',
        'type' => 'git',
      ),
    ),
    'makefile_path' => 'thermal.make',

    'paths' => array(
      '%files' => array(
        'preserve_on_rebuild' => TRUE,
        'source' => array(
          'type' => 'mkdir',
        ),
      ),
      'sites/default/local-settings.php' => array(
        'preserve_on_rebuild' => TRUE,
        'source' => array(
          'type' => 'touch',
        ),
      ),
    ),
  ),
);

if ($aliases['local']['root'] == 'DRUPAL ROOT') {
  drush_log("You need to set the Drupal root for your Thermal Imaging instance in " . __FILE__, "warning");
}
