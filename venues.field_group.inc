<?php
/**
 * @file
 * venues.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function venues_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|venues|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'venues';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '3',
    'children' => array(
      0 => 'field_address',
      1 => 'field_email',
      2 => 'field_telephone',
      3 => 'field_website',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contact|node|venues|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_venue_specs|node|venues|form';
  $field_group->group_name = 'group_venue_specs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'venues';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Venue Specifications',
    'weight' => '4',
    'children' => array(
      0 => 'field_alcohol',
      1 => 'field_availability',
      2 => 'field_food_policy',
      3 => 'field_included_features',
      4 => 'field_maximum_occupancy',
      5 => 'field_venue_category',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_venue_specs|node|venues|form'] = $field_group;

  return $export;
}
