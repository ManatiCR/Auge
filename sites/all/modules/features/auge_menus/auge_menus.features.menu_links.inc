<?php
/**
 * @file
 * auge_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function auge_menus_menu_default_menu_links() {
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
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact:/contact
  $menu_links['main-menu_contact:/contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '/contact',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_contact:/contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_entrepreneurship:entrepreneurship
  $menu_links['main-menu_entrepreneurship:entrepreneurship'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'entrepreneurship',
    'router_path' => 'entrepreneurship',
    'link_title' => 'Entrepreneurship',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_entrepreneurship:entrepreneurship',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_get-involved:',
  );
  // Exported menu link: main-menu_get-involved:
  $menu_links['main-menu_get-involved:'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '',
    'router_path' => '',
    'link_title' => 'Get involved',
    'options' => array(
      'identifier' => 'main-menu_get-involved:',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_invest:invest
  $menu_links['main-menu_invest:invest'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'invest',
    'router_path' => 'invest',
    'link_title' => 'Invest',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_invest:invest',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_get-involved:',
  );
  // Exported menu link: main-menu_learn:/learn
  $menu_links['main-menu_learn:/learn'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '/learn',
    'router_path' => '',
    'link_title' => 'Learn',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_learn:/learn',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_get-involved:',
  );
  // Exported menu link: main-menu_mentor:mentor
  $menu_links['main-menu_mentor:mentor'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'mentor',
    'router_path' => 'mentor',
    'link_title' => 'Mentor',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_mentor:mentor',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_get-involved:',
  );
  // Exported menu link: main-menu_who-we-are:whoweare
  $menu_links['main-menu_who-we-are:whoweare'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'whoweare',
    'router_path' => 'whoweare',
    'link_title' => 'Who we are',
    'options' => array(
      'identifier' => 'main-menu_who-we-are:whoweare',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-get-involved_entrepreneurship:/entrepreneurship
  $menu_links['menu-get-involved_entrepreneurship:/entrepreneurship'] = array(
    'menu_name' => 'menu-get-involved',
    'link_path' => '/entrepreneurship',
    'router_path' => '',
    'link_title' => 'Entrepreneurship',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-get-involved_entrepreneurship:/entrepreneurship',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-get-involved_invest:/invest
  $menu_links['menu-get-involved_invest:/invest'] = array(
    'menu_name' => 'menu-get-involved',
    'link_path' => '/invest',
    'router_path' => '',
    'link_title' => 'Invest',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-get-involved_invest:/invest',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-get-involved_learn:/learn
  $menu_links['menu-get-involved_learn:/learn'] = array(
    'menu_name' => 'menu-get-involved',
    'link_path' => '/learn',
    'router_path' => '',
    'link_title' => 'Learn',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-get-involved_learn:/learn',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-get-involved_mentor:/mentor
  $menu_links['menu-get-involved_mentor:/mentor'] = array(
    'menu_name' => 'menu-get-involved',
    'link_path' => '/mentor',
    'router_path' => '',
    'link_title' => 'Mentor',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-get-involved_mentor:/mentor',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-social-links_facebook:https://www.facebook.com/
  $menu_links['menu-social-links_facebook:https://www.facebook.com/'] = array(
    'menu_name' => 'menu-social-links',
    'link_path' => 'https://www.facebook.com/',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-social-links_facebook:https://www.facebook.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_search:search
  $menu_links['navigation_search:search'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(
      'identifier' => 'navigation_search:search',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Blog');
  t('Contact');
  t('Entrepreneurship');
  t('Facebook');
  t('Get involved');
  t('Home');
  t('Invest');
  t('Learn');
  t('Mentor');
  t('Search');
  t('Who we are');

  return $menu_links;
}
