<?php

/**
 * @file
 * staff_front_page_news.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function staff_front_page_news_user_default_roles() {
  $roles = array();

  // Exported role: News Admin.
  $roles['News Admin'] = array(
    'name' => 'News Admin',
    'weight' => 35,
  );

  return $roles;
}
