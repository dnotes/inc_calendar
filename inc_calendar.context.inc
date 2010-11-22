<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function inc_calendar_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'calendar_event_page';
  $context->description = 'Event page';
  $context->tag = 'inc-calendar';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'calendar',
    'menu' => 'calendar',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Event page');
  t('inc-calendar');

  $export['calendar_event_page'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'calendar_page';
  $context->description = 'Calendar page view';
  $context->tag = 'inc-calendar';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'calendar' => 'calendar',
        'calendar/*' => 'calendar/*',
        'calendar/*/*' => 'calendar/*/*',
        'calendar/*/*/*' => 'calendar/*/*/*',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'calendar',
    'theme' => array(
      'title' => '',
      'subtitle' => '',
      'class' => 'hide-sidebars',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Calendar page view');
  t('inc-calendar');

  $export['calendar_page'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'calendar_taxonomy';
  $context->description = 'Calendar for tag page';
  $context->tag = 'inc-calendar';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'taxonomy/term/*' => 'taxonomy/term/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-inc_calendar-block_3' => array(
          'module' => 'views',
          'delta' => 'inc_calendar-block_3',
          'region' => 'sidebar_first',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Calendar for tag page');
  t('inc-calendar');

  $export['calendar_taxonomy'] = $context;
  return $export;
}
