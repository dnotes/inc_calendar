<?php

/**
 * Implementation of hook_content_default_fields().
 */
function inc_calendar_content_default_fields() {
  $fields = array();

  // Exported field: field_event_date
  $fields['event-field_event_date'] = array(
    'field_name' => 'field_event_date',
    'type_name' => 'event',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '1',
    'multiple' => '1',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
    ),
    'timezone_db' => 'UTC',
    'tz_handling' => 'site',
    'todate' => 'optional',
    'repeat' => 1,
    'repeat_collapsed' => '1',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'M j Y - g:i:sa',
      'input_format_custom' => '',
      'increment' => '5',
      'text_parts' => array(),
      'year_range' => '-0:+1',
      'label_position' => 'within',
      'label' => 'Event Date',
      'weight' => '1',
      'description' => '',
      'type' => 'date_popup_repeat',
      'module' => 'date',
    ),
  );

  // Exported field: field_event_info
  $fields['event-field_event_info'] = array(
    'field_name' => 'field_event_info',
    'type_name' => 'event',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '144',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '2',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_event_info][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Event Info',
      'weight' => '-1',
      'description' => 'A phone, email or website for more information about the event - will be shown in teasers and other views.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_gallery
  $fields['event-field_gallery'] = array(
    'field_name' => 'field_gallery',
    'type_name' => 'event',
    'display_settings' => array(
      'weight' => '8',
      'parent' => 'group_images',
      'token' => array(
        'format' => 'inc_thumbnail_default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '3' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'inc_thumbnail_default',
        'exclude' => 1,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'inc_thumbnail_imagelink',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'images/gallery',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'filefield_sources' => array(
        'remote' => 'remote',
        'reference' => 'reference',
      ),
      'filefield_source_autocomplete' => '1',
      'filefield_source_attach_path' => NULL,
      'filefield_source_attach_absolute' => NULL,
      'filefield_source_attach_mode' => NULL,
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_blog-gallery' => 0,
        'imagecache_blog-main' => 0,
        'imagecache_blog-thumb' => 0,
        'imagecache_event-gallery' => 0,
        'imagecache_event-main' => 0,
        'imagecache_facility-gallery' => 0,
        'imagecache_facility-main' => 0,
        'imagecache_news-node-header' => 0,
        'imagecache_news-node-splash' => 0,
        'imagecache_news-teaser' => 0,
        'imagecache_page-node' => 0,
        'imagecache_page-teaser' => 0,
        'imagecache_rect-95' => 0,
        'imagecache_rect-180' => 0,
        'imagecache_rect-320' => 0,
        'imagecache_rect-400' => 0,
        'imagecache_square-50' => 0,
        'imagecache_square-80' => 0,
        'imagecache_square-95' => 0,
        'imagecache_square-120' => 0,
        'imagecache_square-180' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Gallery Images',
      'weight' => '8',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_main_image
  $fields['event-field_main_image'] = array(
    'field_name' => 'field_main_image',
    'type_name' => 'event',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'token' => array(
        'format' => 'inc_medium_default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'inc_thumbnail_default',
        'exclude' => 1,
      ),
      '3' => array(
        'format' => 'inc_thumbnail_linked',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'inc_medium_default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'inc_thumbnail_linked',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'inc_medium_imagelink',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'images/main',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'filefield_sources' => array(
        'remote' => 'remote',
        'reference' => 'reference',
      ),
      'filefield_source_autocomplete' => '1',
      'filefield_source_attach_path' => NULL,
      'filefield_source_attach_absolute' => NULL,
      'filefield_source_attach_mode' => NULL,
      'label' => 'Main Image',
      'weight' => '-3',
      'description' => '<ul><li>640px minimum for good display</li>
<li>Will display on page, teaser and rss feeds</li></ul>',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Event Date');
  t('Event Info');
  t('Gallery Images');
  t('Main Image');

  return $fields;
}
