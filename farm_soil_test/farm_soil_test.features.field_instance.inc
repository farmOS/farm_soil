<?php
/**
 * @file
 * farm_soil_test.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function farm_soil_test_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'log-farm_soil_test-field_farm_area'
  $field_instances['log-farm_soil_test-field_farm_area'] = array(
    'bundle' => 'farm_soil_test',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What area does this soil sample pertain to?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_area',
    'label' => 'Area',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'log-farm_soil_test-field_farm_files'
  $field_instances['log-farm_soil_test-field_farm_files'] = array(
    'bundle' => 'farm_soil_test',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_table',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_files',
    'label' => 'Files',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => '',
      'file_extensions' => 'csv doc docx odt odp ods pdf ppt pptx txt xls xlsx kml kmz zip tar gz',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => 'farm/log/soil_test/[log:id]',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_generic',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'log-farm_soil_test-field_farm_notes'
  $field_instances['log-farm_soil_test-field_farm_notes'] = array(
    'bundle' => 'farm_soil_test',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_notes',
    'label' => 'Notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'log-farm_soil_test-field_farm_soil_lab'
  $field_instances['log-farm_soil_test-field_farm_soil_lab'] = array(
    'bundle' => 'farm_soil_test',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What laboratory performed the soil test?',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_soil_lab',
    'label' => 'Laboratory',
    'required' => 0,
    'settings' => array(
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'log-farm_soil_test-field_farm_soil_sample_points'
  $field_instances['log-farm_soil_test-field_farm_soil_sample_points'] = array(
    'bundle' => 'farm_soil_test',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use the map to pinpoint the location(s) from which this sample is taken. If you are preparing a soil test, you may be sampling multiple points within a given area. All the points that comprise this sample should be included.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
          'map_preset' => 'farm_map_geofield',
        ),
        'type' => 'geofield_openlayers',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_soil_sample_points',
    'label' => 'Sample Points',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'openlayers',
      'settings' => array(
        'allow_edit' => 1,
        'data_storage' => 'collection',
        'delta_handling' => 'default',
        'feature_types' => array(
          'path' => 0,
          'point' => 'point',
          'polygon' => 0,
        ),
        'openlayers_map' => 'farm_map_geofield',
      ),
      'type' => 'geofield_openlayers',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'log-farm_soil_test-field_farm_soil_types'
  $field_instances['log-farm_soil_test-field_farm_soil_types'] = array(
    'bundle' => 'farm_soil_test',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'List the types of soils that are included in this sample. For soil maps and soil names, visit http://websoilsurvey.nrcs.usda.gov/app',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'log',
    'field_name' => 'field_farm_soil_types',
    'label' => 'Soil Types',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Area');
  t('Files');
  t('Laboratory');
  t('List the types of soils that are included in this sample. For soil maps and soil names, visit http://websoilsurvey.nrcs.usda.gov/app');
  t('Notes');
  t('Sample Points');
  t('Soil Types');
  t('Use the map to pinpoint the location(s) from which this sample is taken. If you are preparing a soil test, you may be sampling multiple points within a given area. All the points that comprise this sample should be included.');
  t('What area does this soil sample pertain to?');
  t('What laboratory performed the soil test?');

  return $field_instances;
}