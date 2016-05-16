<?php
/**
 * @file
 * staff_front_page_news.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function staff_front_page_news_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_front_page_news';
  $strongarm->value = 0;
  $export['comment_anonymous_front_page_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_front_page_news';
  $strongarm->value = 1;
  $export['comment_default_mode_front_page_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_front_page_news';
  $strongarm->value = '50';
  $export['comment_default_per_page_front_page_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_front_page_news';
  $strongarm->value = 0;
  $export['comment_form_location_front_page_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_front_page_news';
  $strongarm->value = '2';
  $export['comment_front_page_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_notify_available_alerts';
  $strongarm->value = array(
    1 => '1',
    2 => '2',
  );
  $export['comment_notify_available_alerts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_notify_comment_notify_default_mailtext';
  $strongarm->value = 'Hi [comment-subscribed:author:field-first-name] [comment-subscribed:author:field-last-name],

[current-user:field-first-name] [current-user:field-last-name] has commented on: "[comment:node:title]"

"[comment:body]"

You can view or reply to the comment here:
[comment:url]

You can stop receiving emails when someone replies to this post, by going to:
[comment-subscribed:unsubscribe-url]

You can configure the auto-following feature for your future posts in the "Comment follow-up notification settings" section of your user account settings:
[site:login-url]

-- [site:name] team
[site:url]

Please do not reply to this email.';
  $export['comment_notify_comment_notify_default_mailtext'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_notify_default_anon_mailalert';
  $strongarm->value = '0';
  $export['comment_notify_default_anon_mailalert'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_notify_default_registered_mailalert';
  $strongarm->value = '2';
  $export['comment_notify_default_registered_mailalert'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_notify_node_notify_default_mailalert';
  $strongarm->value = 1;
  $export['comment_notify_node_notify_default_mailalert'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_notify_node_notify_default_mailtext';
  $strongarm->value = 'Hi [comment:node:author],


You have received a comment on: "[comment:node:title]"

"[comment:body]"

You can view or reply to the comment at the following url
[comment:url]

You will receive emails like this for all replies to your posts. You can
disable this by logging in and changing the "Comment follow-up notification settings" for your user account at
[comment:node:author:edit-url].

-- [site:name] team
[site:url]

Please do not reply to this email.';
  $export['comment_notify_node_notify_default_mailtext'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_notify_node_types';
  $strongarm->value = array(
    'front_page_news' => 'front_page_news',
    'library_banner_notice' => 0,
    'book' => 0,
    'committee_announcements' => 0,
    'committee_child_page' => 0,
    'committee_parent_page' => 0,
    'incident_report' => 0,
    'lcd_announcement' => 0,
    'lcd_event' => 0,
    'lcd_photo' => 0,
    'library_hours' => 0,
    'meeting_minutes' => 0,
    'page' => 0,
    'policies_procedures_and_forms' => 0,
    'library_printer' => 0,
    'screensaver_message' => 0,
    'short_url' => 0,
    'staff_calendar_event' => 0,
    'student_application' => 0,
  );
  $export['comment_notify_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_front_page_news';
  $strongarm->value = '1';
  $export['comment_preview_front_page_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_front_page_news';
  $strongarm->value = 0;
  $export['comment_subject_field_front_page_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__front_page_news';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__front_page_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_front_page_news';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_front_page_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_front_page_news';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_front_page_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_front_page_news';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_front_page_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_front_page_news';
  $strongarm->value = '1';
  $export['node_preview_front_page_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_front_page_news';
  $strongarm->value = 1;
  $export['node_submitted_front_page_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_front_page_news_pattern';
  $strongarm->value = '/news/[node:title]';
  $export['pathauto_node_front_page_news_pattern'] = $strongarm;

  return $export;
}
