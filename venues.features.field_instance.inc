<?php
/**
 * @file
 * venues.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function venues_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-venues-body'
  $field_instances['node-venues-body'] = array(
    'bundle' => 'venues',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Venue Overview',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-venues-field_address'
  $field_instances['node-venues-field_address'] = array(
    'bundle' => 'venues',
    'default_value' => array(
      0 => array(
        'element_key' => 'node|venues|field_address|und|0',
        'thoroughfare' => '',
        'premise' => '',
        'locality' => '',
        'administrative_area' => '',
        'postal_code' => '',
        'country' => 'US',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 1,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(
          'US' => 'US',
        ),
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 'address-hide-country',
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-venues-field_alcohol'
  $field_instances['node-venues-field_alcohol'] = array(
    'bundle' => 'venues',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_alcohol',
    'label' => 'Alcohol Policy',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'node-venues-field_availability'
  $field_instances['node-venues-field_availability'] = array(
    'bundle' => 'venues',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 14,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_availability',
    'label' => 'Availability',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'node-venues-field_email'
  $field_instances['node-venues-field_email'] = array(
    'bundle' => 'venues',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_contact',
        'weight' => 12,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-venues-field_food_policy'
  $field_instances['node-venues-field_food_policy'] = array(
    'bundle' => 'venues',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_food_policy',
    'label' => 'Food Policy',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-venues-field_geofield'
  $field_instances['node-venues-field_geofield'] = array(
    'bundle' => 'venues',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
          'map_preset' => 'geofield_formatter_map',
        ),
        'type' => 'geofield_openlayers',
        'weight' => 2,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_geofield',
    'label' => 'geofield',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'geocoder',
      'settings' => array(
        'delta_handling' => 'default',
        'geocoder_field' => 'field_address',
        'geocoder_handler' => 'google',
        'handler_settings' => array(
          'google' => array(
            'all_results' => 0,
            'geometry_type' => 'point',
            'reject_results' => array(
              'APPROXIMATE' => 0,
              'GEOMETRIC_CENTER' => 0,
              'RANGE_INTERPOLATED' => 0,
              'ROOFTOP' => 0,
            ),
          ),
        ),
      ),
      'type' => 'geocoder',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-venues-field_included_features'
  $field_instances['node-venues-field_included_features'] = array(
    'bundle' => 'venues',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 13,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_included_features',
    'label' => 'Included Features',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-venues-field_maximum_occupancy'
  $field_instances['node-venues-field_maximum_occupancy'] = array(
    'bundle' => 'venues',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 9,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_maximum_occupancy',
    'label' => 'Maximum Occupancy',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'node-venues-field_rooms'
  $field_instances['node-venues-field_rooms'] = array(
    'bundle' => 'venues',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 15,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_rooms',
    'label' => 'Rooms',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'node-venues-field_telephone'
  $field_instances['node-venues-field_telephone'] = array(
    'bundle' => 'venues',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_telephone',
    'label' => 'Telephone',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-venues-field_venue_category'
  $field_instances['node-venues-field_venue_category'] = array(
    'bundle' => 'venues',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 8,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_venue_category',
    'label' => 'Venue Category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'node-venues-field_venue_id'
  $field_instances['node-venues-field_venue_id'] = array(
    'bundle' => 'venues',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_venue_id',
    'label' => 'Venue ID',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'node-venues-field_venue_images'
  $field_instances['node-venues-field_venue_images'] = array(
    'bundle' => 'venues',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 4,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_venue_images',
    'label' => 'Venue Images',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 106,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'multiupload_imagefield_widget',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_miw',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-venues-field_website'
  $field_instances['node-venues-field_website'] = array(
    'bundle' => 'venues',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 6,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_website',
    'label' => 'Website',
    'required' => FALSE,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 34,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Alcohol Policy');
  t('Availability');
  t('Email');
  t('Food Policy');
  t('Included Features');
  t('Maximum Occupancy');
  t('Rooms');
  t('Telephone');
  t('Venue Category');
  t('Venue ID');
  t('Venue Images');
  t('Venue Overview');
  t('Website');
  t('geofield');

  return $field_instances;
}
