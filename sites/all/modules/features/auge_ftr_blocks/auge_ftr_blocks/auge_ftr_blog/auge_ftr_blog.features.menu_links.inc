<?php
/**
 * @file
 * auge_ftr_blog.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function auge_ftr_blog_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_blog:blog
  $menu_links['main-menu_blog:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(
      'identifier' => 'main-menu_blog:blog',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 9,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Blog');

  return $menu_links;
}
