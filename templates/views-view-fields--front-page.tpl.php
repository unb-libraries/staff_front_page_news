<?php
/**
 * @file
 * Handle stickied front page news content.
 *
 * Check "Front page news" content type nodes for a "Sticky at top of lists"
 * publishing option. Wrap any "Front page news" Views rows containing stickied
 * content in a container with a "sticky" class to enable CSS styling.
 */
?>
<?php print ($row->_field_data['nid']['entity']->sticky) ? '<div class="sticky">' : ''; ?>

<?php foreach ($fields as $id => $field): ?>
  <?php if (!empty($field->separator)): ?>
    <?php print $field->separator; ?>
  <?php endif; ?>

  <?php print $field->wrapper_prefix; ?>
    <?php print $field->label_html; ?>
    <?php print $field->content; ?>
  <?php print $field->wrapper_suffix; ?>
<?php endforeach; ?>

<?php print ($row->_field_data['nid']['entity']->sticky) ? '</div>' : ''; ?>
