<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function inc_calendar_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_images
  $groups['event-group_images'] = array(
    'group_type' => 'standard',
    'type_name' => 'event',
    'group_name' => 'group_images',
    'label' => 'Image Gallery',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '2',
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
      ),
    ),
    'weight' => '2',
    'fields' => array(
      '0' => 'field_gallery',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Image Gallery');

  return $groups;
}
