<?php
/**
 * @file
 * Template for a one column panel layout at full width.
 *
 * This template provides a very simple "one column" panel display layout. Ideal for a front page.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   $content['content']: The only panel in the layout.
 */
?>
<div class="panel-display panel-one-col-fullwidth clearfix" <?php if (!empty($css_id)): print "id=\"$css_id\""; endif; ?>>
  <div class="panel-panel panel-content panels-one-col-fullwidth-content">
    <?php print $content['content']; ?>
  </div>
</div>