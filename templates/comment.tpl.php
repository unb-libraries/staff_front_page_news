<?php
/**
 * @file
 * Staff Front Page New's theme implementation for comments.
 *
 * @see template_preprocess()
 * @see template_preprocess_comment()
 * @see template_process()
 * @see theme_comment()
 */
?>
<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <div class="comment-text">
    <div class="content"<?php print $content_attributes; ?>>
      <?php
        // We hide the comments and links now so that we can render them later.
        hide($content['links']);
        print render($content);
      ?>
      <div class="attribution">
        <div class="comment-submitted">
          <?php if ($new): ?>
            <span class="new"><?php print $new; ?></span>
          <?php endif; ?>
          <span class="commenter-name">
            <?php print 'Submitted by '; ?>
            <?php print $author; ?>
          </span>
          <span class="comment-time">
            <?php print ' on '; ?>
            <?php print $created; ?>
          </span>
        </div> <!-- /.comment-submitted -->
        <?php print render($content['links']); ?>
      </div>
    </div> <!-- /.content -->
  </div> <!-- /.comment-text -->

</div>
