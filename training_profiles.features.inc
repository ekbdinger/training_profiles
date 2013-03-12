<?php
/**
 * @file
 * training_profiles.features.inc
 */

/**
 * Implements hook_views_api().
 */
function training_profiles_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function training_profiles_image_default_styles() {
  $styles = array();

  // Exported image style: trainer_profile_pic.
  $styles['trainer_profile_pic'] = array(
    'name' => 'trainer_profile_pic',
    'effects' => array(
      4 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '150',
          'height' => '150',
          'upscale' => 1,
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

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
