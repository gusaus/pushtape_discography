<?php
/**
 * @file
 * pushtape_discography.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pushtape_discography_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pushtape_discography_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function pushtape_discography_image_default_styles() {
  $styles = array();

  // Exported image style: artwork_huge.
  $styles['artwork_huge'] = array(
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 1200,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'artwork_huge',
  );

  // Exported image style: artwork_large.
  $styles['artwork_large'] = array(
    'label' => 'artwork_large',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 640,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: artwork_medium.
  $styles['artwork_medium'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 450,
          'height' => 450,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'artwork_medium',
  );

  // Exported image style: artwork_small.
  $styles['artwork_small'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 225,
          'height' => 225,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'artwork_small',
  );

  // Exported image style: artwork_thumbnail.
  $styles['artwork_thumbnail'] = array(
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'artwork_thumbnail',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function pushtape_discography_node_info() {
  $items = array(
    'album' => array(
      'name' => t('Album'),
      'base' => 'node_content',
      'description' => t('Create an album release with tracks and artwork.'),
      'has_title' => '1',
      'title_label' => t('Album title'),
      'help' => '',
    ),
    'track' => array(
      'name' => t('Track'),
      'base' => 'node_content',
      'description' => t('A single audio track or song.'),
      'has_title' => '1',
      'title_label' => t('Track name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
