<?php
// Plugin definition
$plugin = array(
  'title' => t('One column with tabs'),
  'category' => 'Auge',
  'icon' => 'panels-one-col-tabs.png',
  'theme' => 'panels-one-col-tabs',
  'regions' => array(
    'text' => t('Text'),
    'titles' => t('Titles'),
    'views' => t('Views'),
  ),
);