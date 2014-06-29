<?php
/**
 * @file
 * tifeature_groupcontent.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function tifeature_groupcontent_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:volunteer_group:add user'
  $permissions['node:volunteer_group:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:volunteer_group:administer group'
  $permissions['node:volunteer_group:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:volunteer_group:approve and deny subscription'
  $permissions['node:volunteer_group:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:volunteer_group:create report content'
  $permissions['node:volunteer_group:create report content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:volunteer_group:delete any report content'
  $permissions['node:volunteer_group:delete any report content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:volunteer_group:delete own report content'
  $permissions['node:volunteer_group:delete own report content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:volunteer_group:manage members'
  $permissions['node:volunteer_group:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:volunteer_group:manage permissions'
  $permissions['node:volunteer_group:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:volunteer_group:manage roles'
  $permissions['node:volunteer_group:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:volunteer_group:subscribe'
  $permissions['node:volunteer_group:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:volunteer_group:subscribe without approval'
  $permissions['node:volunteer_group:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:volunteer_group:unsubscribe'
  $permissions['node:volunteer_group:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:volunteer_group:update any report content'
  $permissions['node:volunteer_group:update any report content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:volunteer_group:update group'
  $permissions['node:volunteer_group:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:volunteer_group:update own report content'
  $permissions['node:volunteer_group:update own report content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
