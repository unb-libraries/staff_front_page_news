<?php
/**
 * @file
 * staff_front_page_news.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function staff_front_page_news_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'comment-comment_node_front_page_news-comment_body'.
  $field_instances['comment-comment_node_front_page_news-comment_body'] = array(
    'bundle' => 'comment_node_front_page_news',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-front_page_news-body'.
  $field_instances['node-front_page_news-body'] = array(
    'bundle' => 'front_page_news',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-front_page_news-field_images'.
  $field_instances['node-front_page_news-field_images'] = array(
    'bundle' => 'front_page_news',
    'deleted' => 0,
    'description' => 'Upload any image files here. Choose a layout/size style, enter <b>Alterative text</b> and click the Insert button to code images into the <b>Body</b> field.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_images',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'front-news',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '4 MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 1,
        'insert_absolute' => 0,
        'insert_class' => 'front-content-img',
        'insert_default' => 'image_medium-left',
        'insert_styles' => array(
          'auto' => 0,
          'icon_link' => 0,
          'image' => 'image',
          'image_large' => 0,
          'image_large-left' => 'image_large-left',
          'image_large-right' => 'image_large-right',
          'image_lcd_photo' => 0,
          'image_lcd_thumbnail' => 0,
          'image_medium' => 0,
          'image_medium-left' => 'image_medium-left',
          'image_medium-right' => 'image_medium-right',
          'image_small-left' => 'image_small-left',
          'image_small-right' => 'image_small-right',
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => 870,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-front_page_news-field_related_documents'.
  $field_instances['node-front_page_news-field_related_documents'] = array(
    'bundle' => 'front_page_news',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_table',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related_documents',
    'label' => 'Related documents',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'news',
      'file_extensions' => 'txt pdf doc docx xls',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'icon_link' => 0,
          'image' => 0,
          'image_large' => 0,
          'image_large-left' => 0,
          'image_large-right' => 0,
          'image_lcd_photo' => 0,
          'image_lcd_thumbnail' => 0,
          'image_medium' => 0,
          'image_medium-left' => 0,
          'image_medium-right' => 0,
          'image_small-left' => 0,
          'image_small-right' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Comment');
  t('Images');
  t('Related documents');
  t('Upload any image files here. Choose a layout/size style, enter <b>Alterative text</b> and click the Insert button to code images into the <b>Body</b> field.');

  return $field_instances;
}
