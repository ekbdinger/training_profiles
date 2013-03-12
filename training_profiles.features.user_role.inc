<?php
/**
 * @file
 * training_profiles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function training_profiles_user_default_roles() {
  $roles = array();

  // Exported role: training profile admin.
  $roles['training profile admin'] = array(
    'name' => 'training profile admin',
    'weight' => '7',
  );

  return $roles;
}
