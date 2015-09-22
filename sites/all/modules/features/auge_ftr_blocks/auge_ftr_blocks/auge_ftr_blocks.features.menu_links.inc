<?php
/**
 * @file
 * auge_ftr_blocks.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function auge_ftr_blocks_menu_default_menu_links() {
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
  // Exported menu link: navigation_blog-post:node/add/blog-post
  $menu_links['navigation_blog-post:node/add/blog-post'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/blog-post',
    'router_path' => 'node/add/blog-post',
    'link_title' => 'Blog Post',
    'options' => array(
      'identifier' => 'navigation_blog-post:node/add/blog-post',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Blog');
  t('Blog Post');

  return $menu_links;
}
