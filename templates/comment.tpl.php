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
          <?php if ($new) { ?>
            <span class="new"><i class="icon-flag"></i></span>
          <?php } ?>
          <?php
            $display_name = '';
            $uname = user_load($comment->uid);
            $fname = field_get_items('user', $uname, 'field_first_name');
            $lname = field_get_items('user', $uname, 'field_last_name');
            // Retrieve sanitized version of username from user account object.
            $uid = check_plain(format_username($uname));

            if ($fname && $lname):
              $display_name = $fname[0]['value'] . ' ' . $lname[0]['value'];
            elseif ($fname):
              $display_name = $fname[0]['value'];
            elseif ($lname):
              $display_name = $lname[0]['value'];
            else:
              $display_name = $uid;
            endif;
          ?>
          <span class="commenter-name">
            <?php print 'Submitted by '; ?>
            <?php print '<a href="/users/' . $uid . '" title="View user profile" class="username">' . $display_name . '</a>'; ?>
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
