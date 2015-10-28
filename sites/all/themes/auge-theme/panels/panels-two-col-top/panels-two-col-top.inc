<?php
// Plugin definition
$plugin = array(
  'title' => t('Two column with top'),
  'category' => 'Auge',
  'icon' => 'panels-two-col-top.png',
  'theme' => 'panels-two-col-top',
  'regions' => array(
    'top' => t('Top'),
    'content-left' => t('Content left'),
    'content-right' => t('Content right'),
  ),
);