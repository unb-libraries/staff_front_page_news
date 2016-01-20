<?php
/**
 * @file
 * staff_front_page_news.features.inc
 */

/**
 * Implements hook_views_api().
 */
function staff_front_page_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function staff_front_page_news_image_default_styles() {
  $styles = array();

  // Exported image style: large-left.
  $styles['large-left'] = array(
    'label' => 'Large-Left (480px)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: large-right.
  $styles['large-right'] = array(
    'label' => 'Large-Right (480px)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: medium-left.
  $styles['medium-left'] = array(
    'label' => 'Medium-Left (220px)',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 220,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: medium-right.
  $styles['medium-right'] = array(
    'label' => 'Medium-Right (220px)',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 220,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: small-left.
  $styles['small-left'] = array(
    'label' => 'Small-Left (150px)',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: small-right.
  $styles['small-right'] = array(
    'label' => 'Small-Right (150px)',
    'effects' => array(
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function staff_front_page_news_node_info() {
  $items = array(
    'front_page_news' => array(
      'name' => t('Front page news'),
      'base' => 'node_content',
      'description' => t('Notice content that may be promoted to the front page by privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
