<?php
/**
 * @file
 * staff_front_page_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function staff_front_page_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create front_page_news content'.
  $permissions['create front_page_news content'] = array(
    'name' => 'create front_page_news content',
    'roles' => array(
      'News Admin' => 'News Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any front_page_news content'.
  $permissions['delete any front_page_news content'] = array(
    'name' => 'delete any front_page_news content',
    'roles' => array(
      'News Admin' => 'News Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own front_page_news content'.
  $permissions['delete own front_page_news content'] = array(
    'name' => 'delete own front_page_news content',
    'roles' => array(
      'News Admin' => 'News Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any front_page_news content'.
  $permissions['edit any front_page_news content'] = array(
    'name' => 'edit any front_page_news content',
    'roles' => array(
      'News Admin' => 'News Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own front_page_news content'.
  $permissions['edit own front_page_news content'] = array(
    'name' => 'edit own front_page_news content',
    'roles' => array(
      'News Admin' => 'News Admin',
    ),
    'module' => 'node',
  );

  return $permissions;
}
