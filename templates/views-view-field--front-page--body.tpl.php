<?php
/**
 * @file
 * Handle "Front page news" Views row body text.
 *
 * Compares "Front page news" content type body field's "raw safe value" &
 * "rendered output" values: equal values imply that no characters were trimmed,
 * making a "More" link redundant. Untrimmed teaser body fields are wrapped in a
 * container with "untrimmed" class allowing styling (i.e. hiding) "More" links.
 */
?>
<?php
  // The node id is contained in the Views $row variable.
  $body_items = field_get_items('node', node_load($row->nid), 'body');
  $raw_body_value = '';
?>

<?php if ($body_items): ?>
  <?php
    // Get [0] element of $body_items array.
    $first_body_item = reset($body_items);
    // Get raw, body field 'safe value': includes beginning/ending whitespace.
    $raw_body_value = $first_body_item['safe_value'];
  ?>
<?php endif; ?>

<?php if ($raw_body_value == $output): ?>
  <div class="untrimmed">
    <?php print $output; ?>
  </div>
<?php else: ?>
  <?php print $output; ?>
<?php endif; ?>
