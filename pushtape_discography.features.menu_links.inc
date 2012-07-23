<?php
/**
 * @file
 * pushtape_discography.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function pushtape_discography_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:albums
  $menu_links['main-menu:albums'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'albums',
    'router_path' => 'albums',
    'link_title' => 'Albums',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:releases
  $menu_links['main-menu:releases'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'releases',
    'router_path' => 'releases',
    'link_title' => 'Releases',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-1',
  );
  // Exported menu link: main-menu:tracks
  $menu_links['main-menu:tracks'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'tracks',
    'router_path' => 'tracks',
    'link_title' => 'Tracks',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Albums');
  t('Releases');
  t('Tracks');


  return $menu_links;
}
