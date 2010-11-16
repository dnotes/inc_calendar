<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function inc_calendar_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function inc_calendar_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'module' => 'features',
      'description' => t('Events appear on your community\'s calendar and event listings.  Events should be categorized by the type of activity.  Each event may have a main image (recommended) and a gallery of photos.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function inc_calendar_views_api() {
  return array(
    'api' => '2',
  );
}
