<?php
// Plugin definition
$plugin = array(
  'title' => t('Two column with sidebar'),
  'category' => 'Auge',
  'icon' => 'panels-two-col.png',
  'theme' => 'panels-two-col',
  'regions' => array(
    'top' => t('Top'),
    'content' => t('Content'),
    'sidebar' => t('Sidebar'),
  ),
);