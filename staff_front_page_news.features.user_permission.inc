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

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(),
    'module' => 'comment',
  );

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

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own front_page_news content'.
  $permissions['edit own front_page_news content'] = array(
    'name' => 'edit own front_page_news content',
    'roles' => array(
      'News Admin' => 'News Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  return $permissions;
}
