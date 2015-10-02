<?php
/**
 * @file
 * auge_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function auge_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: blog_image_footer.
  $styles['blog_image_footer'] = array(
    'label' => 'Blog image footer',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 40,
          'height' => 40,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: blog_view_image.
  $styles['blog_view_image'] = array(
    'label' => 'Blog view image',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 432,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
