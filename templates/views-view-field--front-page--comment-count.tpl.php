<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>
<?php
/* grab the actual comment number count string: 0, 1, etc. */
$data = $row->{$field->field_alias};

/* hide comment container if there are no comments */
if ($data !== '0') {
  print '<span style="margin-left:1.5em">';
  /* assuming Font Awesome v.3.2.1 still available */
  print (($data === '1') ? '<i class="icon-comment-alt"></i>&nbsp;' : '<i class="icon-comments-alt"></i>&nbsp;');
  print $output;
  print '</span>';
}
?>
