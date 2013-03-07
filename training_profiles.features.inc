<?php
/**
 * @file
 * training_profiles.features.inc
 */

/**
 * Implements hook_default_profile2_type().
 */
function training_profiles_default_profile2_type() {
  $items = array();
  $items['trainer'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "trainer",
    "label" : "Trainer Profile",
    "weight" : "0",
    "data" : { "registration" : 1, "use_page" : 0 },
    "rdf_mapping" : [  ]
  }');
  return $items;
}
