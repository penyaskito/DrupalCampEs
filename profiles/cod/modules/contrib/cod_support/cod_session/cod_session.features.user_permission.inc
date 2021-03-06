<?php
/**
 * @file
 * cod_session.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cod_session_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create schedule_item content'.
  $permissions['create schedule_item content'] = array(
    'name' => 'create schedule_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'session organizer' => 'session organizer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create session content'.
  $permissions['create session content'] = array(
    'name' => 'create session content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any schedule_item content'.
  $permissions['delete any schedule_item content'] = array(
    'name' => 'delete any schedule_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'session organizer' => 'session organizer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any session content'.
  $permissions['delete any session content'] = array(
    'name' => 'delete any session content',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own session content'.
  $permissions['delete own session content'] = array(
    'name' => 'delete own session content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any schedule_item content'.
  $permissions['edit any schedule_item content'] = array(
    'name' => 'edit any schedule_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'session organizer' => 'session organizer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any session content'.
  $permissions['edit any session content'] = array(
    'name' => 'edit any session content',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own session content'.
  $permissions['edit own session content'] = array(
    'name' => 'edit own session content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view sessions'.
  $permissions['view sessions'] = array(
    'name' => 'view sessions',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'cod_session',
  );

  // Exported permission: 'view speakers'.
  $permissions['view speakers'] = array(
    'name' => 'view speakers',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'cod_session',
  );

  return $permissions;
}
