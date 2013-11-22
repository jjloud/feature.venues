<?php
/**
 * @file
 * venues.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function venues_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'venues_map';
  $openlayers_maps->title = 'Venues Map';
  $openlayers_maps->description = 'A Map Used for Geofield Output';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'sites/all/modules/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 1,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-75.01464843842406, 40.2124407232392',
        'zoom' => '',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '-5128368.608018,2734660.718727,-5073022.287608,2790007.039136',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_hover' => array(
        'layers' => array(
          'venues_map_openlayers_1' => 'venues_map_openlayers_1',
        ),
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 1,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'venues_map_openlayers_1' => 'venues_map_openlayers_1',
        ),
        'panMapIfOutOfView' => 1,
        'keepInMap' => 1,
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'venues_map_openlayers_1' => 'venues_map_openlayers_1',
          'google_normal' => 0,
        ),
        'point_zoom_level' => '7',
        'zoomtolayer_scale' => '1',
      ),
    ),
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_normal' => 'google_normal',
      'venues_map_openlayers_1' => 'venues_map_openlayers_1',
    ),
    'layer_weight' => array(
      'venue_node_proximity_openlayers_1' => '0',
      'venues_map_openlayers_1' => '0',
      'ol_locator_proximity_search_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => 'default_marker_red',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'ol_locator_proximity_search_openlayers_1' => '0',
      'venue_node_proximity_openlayers_1' => '0',
      'venues_map_openlayers_1' => 'default_marker_red',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'ol_locator_proximity_search_openlayers_1' => '0',
      'venue_node_proximity_openlayers_1' => '0',
      'venues_map_openlayers_1' => '0',
    ),
    'layer_styles_temporary' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'ol_locator_proximity_search_openlayers_1' => '0',
      'venue_node_proximity_openlayers_1' => '0',
      'venues_map_openlayers_1' => '0',
    ),
    'layer_activated' => array(
      'venues_map_openlayers_1' => 'venues_map_openlayers_1',
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'ol_locator_proximity_search_openlayers_1' => 0,
      'venue_node_proximity_openlayers_1' => 0,
    ),
    'layer_switcher' => array(
      'venues_map_openlayers_1' => 0,
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'ol_locator_proximity_search_openlayers_1' => 0,
      'venue_node_proximity_openlayers_1' => 0,
    ),
    'projection' => 'EPSG:900913',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['venues_map'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'venues_node_map';
  $openlayers_maps->title = 'Venues Node Map';
  $openlayers_maps->description = 'A Map Used for Geofield Output';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '300px',
    'image_path' => 'sites/all/modules/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-75.01464843842406, 40.2124407232392',
        'zoom' => '',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '-5128368.608018,2734660.718727,-5073022.287608,2790007.039136',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_hover' => array(
        'layers' => array(
          'venue_node_proximity_openlayers_1' => 0,
          'venue_node_proximity_openlayers_2' => 0,
        ),
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 1,
      ),
      'openlayers_behavior_panzoom' => array(),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'venue_node_proximity_openlayers_1' => 'venue_node_proximity_openlayers_1',
          'venue_node_proximity_openlayers_2' => 'venue_node_proximity_openlayers_2',
        ),
        'panMapIfOutOfView' => 0,
        'keepInMap' => 1,
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'venue_node_proximity_openlayers_1' => 'venue_node_proximity_openlayers_1',
          'google_normal' => 0,
          'venue_node_proximity_openlayers_2' => 0,
        ),
        'point_zoom_level' => '14',
        'zoomtolayer_scale' => '1',
      ),
    ),
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_normal' => 'google_normal',
      'venue_node_proximity_openlayers_1' => 'venue_node_proximity_openlayers_1',
      'venue_node_proximity_openlayers_2' => 'venue_node_proximity_openlayers_2',
    ),
    'layer_weight' => array(
      'venue_node_proximity_openlayers_1' => '0',
      'venue_node_proximity_openlayers_2' => '0',
      'venues_map_openlayers_1' => '0',
      'ol_locator_proximity_search_openlayers_1' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => 'default_marker_red',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'ol_locator_proximity_search_openlayers_1' => '0',
      'venues_map_openlayers_1' => '0',
      'venue_node_proximity_openlayers_1' => 'default_marker_blue',
      'venue_node_proximity_openlayers_2' => 'default_marker_red',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'ol_locator_proximity_search_openlayers_1' => '0',
      'venues_map_openlayers_1' => '0',
      'venue_node_proximity_openlayers_1' => '0',
      'venue_node_proximity_openlayers_2' => '0',
    ),
    'layer_styles_temporary' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'ol_locator_proximity_search_openlayers_1' => '0',
      'venues_map_openlayers_1' => '0',
      'venue_node_proximity_openlayers_1' => '0',
      'venue_node_proximity_openlayers_2' => '0',
    ),
    'layer_activated' => array(
      'venue_node_proximity_openlayers_1' => 'venue_node_proximity_openlayers_1',
      'venue_node_proximity_openlayers_2' => 'venue_node_proximity_openlayers_2',
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'ol_locator_proximity_search_openlayers_1' => 0,
      'venues_map_openlayers_1' => 0,
    ),
    'layer_switcher' => array(
      'venue_node_proximity_openlayers_1' => 0,
      'venue_node_proximity_openlayers_2' => 0,
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'ol_locator_proximity_search_openlayers_1' => 0,
      'venues_map_openlayers_1' => 0,
    ),
    'projection' => 'EPSG:900913',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['venues_node_map'] = $openlayers_maps;

  return $export;
}
