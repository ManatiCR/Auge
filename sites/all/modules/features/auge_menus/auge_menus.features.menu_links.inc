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

  // Exported menu link: main-menu_acompaar:mentor
  $menu_links['main-menu_acompaar:mentor'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'mentor',
    'router_path' => 'mentor',
    'link_title' => 'Acompañar',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'header-main-menu-subitem',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_acompaar:mentor',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_involcrese:/',
  );
  // Exported menu link: main-menu_aprender:/aprender
  $menu_links['main-menu_aprender:/aprender'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '/aprender',
    'router_path' => '',
    'link_title' => 'Aprender',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'header-main-menu-subitem',
        'style' => '',
      ),
      'identifier' => 'main-menu_aprender:/aprender',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_involcrese:/',
  );
  // Exported menu link: main-menu_blog:/blog
  $menu_links['main-menu_blog:/blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '/blog',
    'router_path' => '',
    'link_title' => 'Blog',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_blog:/blog',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'header-main-menu-item',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_blog:blog
  $menu_links['main-menu_blog:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(
      'identifier' => 'main-menu_blog:blog',
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_contact:/contact
  $menu_links['main-menu_contact:/contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '/contact',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'identifier' => 'main-menu_contact:/contact',
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'header-main-menu-item',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_contacto:/contacto
  $menu_links['main-menu_contacto:/contacto'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '/contacto',
    'router_path' => '',
    'link_title' => 'Contacto',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'header-main-menu-item',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_contacto:/contacto',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_emprender:/emprender
  $menu_links['main-menu_emprender:/emprender'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '/emprender',
    'router_path' => '',
    'link_title' => 'Emprender',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'header-main-menu-subitem',
        'style' => '',
      ),
      'identifier' => 'main-menu_emprender:/emprender',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_involcrese:/',
  );
  // Exported menu link: main-menu_entrepreneur:/entrepreneur
  $menu_links['main-menu_entrepreneur:/entrepreneur'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '/entrepreneur',
    'router_path' => '',
    'link_title' => 'Entrepreneur',
    'options' => array(
      'identifier' => 'main-menu_entrepreneur:/entrepreneur',
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'header-main-menu-subitem',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_get-involved:/',
  );
  // Exported menu link: main-menu_facebook:https://www.facebook.com/
  $menu_links['main-menu_facebook:https://www.facebook.com/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.facebook.com/',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'facebook-icon',
          1 => 'header-facebook-icon',
          2 => 'header-icons',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => ' header-main-menu-item-social header-main-menu-item',
        'style' => '',
      ),
      'identifier' => 'main-menu_facebook:https://www.facebook.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -37,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_get-involved:/
  $menu_links['main-menu_get-involved:/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '/',
    'router_path' => '',
    'link_title' => 'Get involved',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'header-main-menu-item',
        'style' => '',
      ),
      'identifier' => 'main-menu_get-involved:/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_invertir:/invertir
  $menu_links['main-menu_invertir:/invertir'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '/invertir',
    'router_path' => '',
    'link_title' => 'Invertir',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'header-main-menu-subitem',
        'style' => '',
      ),
      'identifier' => 'main-menu_invertir:/invertir',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_involcrese:/',
  );
  // Exported menu link: main-menu_invest:invest
  $menu_links['main-menu_invest:invest'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'invest',
    'router_path' => 'invest',
    'link_title' => 'Invest',
    'options' => array(
      'identifier' => 'main-menu_invest:invest',
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'header-main-menu-subitem',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_get-involved:/',
  );
  // Exported menu link: main-menu_involcrese:/
  $menu_links['main-menu_involcrese:/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '/',
    'router_path' => '',
    'link_title' => 'Involúcrese',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'header-main-menu-item',
        'style' => '',
      ),
      'identifier' => 'main-menu_involcrese:/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -42,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_learn:/learn
  $menu_links['main-menu_learn:/learn'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '/learn',
    'router_path' => '',
    'link_title' => 'Learn',
    'options' => array(
      'identifier' => 'main-menu_learn:/learn',
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'header-main-menu-subitem',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_get-involved:/',
  );
  // Exported menu link: main-menu_mentor:mentor
  $menu_links['main-menu_mentor:mentor'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'mentor',
    'router_path' => 'mentor',
    'link_title' => 'Mentor',
    'options' => array(
      'identifier' => 'main-menu_mentor:mentor',
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'header-main-menu-subitem',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_get-involved:/',
  );
  // Exported menu link: main-menu_projects:projects
  $menu_links['main-menu_projects:projects'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'projects',
    'router_path' => 'projects',
    'link_title' => 'Projects',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_projects:projects',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'header-main-menu-item',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_proyectos:projects
  $menu_links['main-menu_proyectos:projects'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'projects',
    'router_path' => 'projects',
    'link_title' => 'Proyectos',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'header-main-menu-item',
        'style' => '',
      ),
      'identifier' => 'main-menu_proyectos:projects',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_quienes-somos:/whoweare
  $menu_links['main-menu_quienes-somos:/whoweare'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '/whoweare',
    'router_path' => '',
    'link_title' => 'Quienes somos',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'header-main-menu-item',
        'style' => '',
      ),
      'identifier' => 'main-menu_quienes-somos:/whoweare',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_twitter:https://twitter.com/
  $menu_links['main-menu_twitter:https://twitter.com/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://twitter.com/',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'twitter-icon',
          1 => 'header-icon',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => ' header-main-menu-item-social header-main-menu-item',
        'style' => '',
      ),
      'identifier' => 'main-menu_twitter:https://twitter.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -36,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_who-we-are:/whoweare
  $menu_links['main-menu_who-we-are:/whoweare'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '/whoweare',
    'router_path' => '',
    'link_title' => 'Who we are',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_who-we-are:/whoweare',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'header-main-menu-item',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-social-links_facebook:https://www.facebook.com/
  $menu_links['menu-social-links_facebook:https://www.facebook.com/'] = array(
    'menu_name' => 'menu-social-links',
    'link_path' => 'https://www.facebook.com/',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'identifier' => 'menu-social-links_facebook:https://www.facebook.com/',
      'attributes' => array(
        'class' => array(
          0 => 'facebook-icon',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-social-links_twitter:https://twitter.com/
  $menu_links['menu-social-links_twitter:https://twitter.com/'] = array(
    'menu_name' => 'menu-social-links',
    'link_path' => 'https://twitter.com/',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'identifier' => 'menu-social-links_twitter:https://twitter.com/',
      'attributes' => array(
        'class' => array(
          0 => 'twitter-icon',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Acompañar');
  t('Aprender');
  t('Blog');
  t('Contact');
  t('Contacto');
  t('Emprender');
  t('Entrepreneur');
  t('Facebook');
  t('Get involved');
  t('Invertir');
  t('Invest');
  t('Involúcrese');
  t('Learn');
  t('Mentor');
  t('Projects');
  t('Proyectos');
  t('Quienes somos');
  t('Twitter');
  t('Who we are');

  return $menu_links;
}
