<?php
/**
 * @file
 * tifeature_groupcontent.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tifeature_groupcontent_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|report|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic information',
    'weight' => '0',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_content|node|report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_results|node|report|form';
  $field_group->group_name = 'group_results';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Results',
    'weight' => '12',
    'children' => array(
      0 => 'field_thermal_images',
      1 => 'field_conditions',
      2 => 'field_observations',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-results field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_results|node|report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_submission|node|report|form';
  $field_group->group_name = 'group_submission';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Original submission',
    'weight' => '2',
    'children' => array(
      0 => 'field_contact_name',
      1 => 'field_street_address',
      2 => 'field_email',
      3 => 'field_phone',
      4 => 'field_postcode',
      5 => 'field_town_city',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-submission field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_submission|node|report|form'] = $field_group;

  return $export;
}
