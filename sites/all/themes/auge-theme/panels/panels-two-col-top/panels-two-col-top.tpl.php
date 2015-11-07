<?php
/**
 * @file
 * Template for a two column (content and sidebar) panel layout with a fixed width centered.
 *
 * This template provides an approach for a page with
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   $content['top']: This will go on the top of the page at full widht.
 *   $content['content-left']: Content on the left.
 *   $content['content-right']: Content on the right.
 */
?>
<div class="panel-display panel-two-col-top clearfix <?php if (!empty($css_id)): print $css_id; endif; ?>>" <?php if (!empty($css_id)): print "id=\"$css_id\""; endif; ?>> //Cambiar
  <div class="panel-panel panel-top panel-two-col-top-top">
    <?php print $content['top']; ?>
  </div>
  <div class="panel-panel panel-two-col-top-content">
    <div class="panel-panel panel-left panels-two-col-top-content-left">
      <?php print $content['content-left']; ?>
    </div>
    <div class="panel-panel panel-right panels-two-col-top-content-right">
      <?php print $content['content-right']; ?>
    </div>
  </div>
</div>