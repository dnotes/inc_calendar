<?php

/**
 * Implementation of hook_user_default_roles().
 */
function inc_calendar_user_default_roles() {
  $roles = array();

  // Exported role: host
  $roles['host'] = array(
    'name' => 'host',
  );

  return $roles;
}
