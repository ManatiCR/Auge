<?php
/**
 * @file
 * Template for a one column panel layout and tabs
 *
 * This template provides a very simple "one column" panel display layout. Ideal for tabs
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   $content['text']: The text.
 *   $content['titles']: The titles.
 *   $content['views']: The views.
 *
 */
?>
<div class="panel-display panel-one-col-fullwidth clearfix <?php if (!empty($css_id)): print $css_id; endif; ?>>" <?php if (!empty($css_id)): print "id=\"$css_id\""; endif; ?>>
  <div class="panel-panel panel-content panels-one-col-tabs-text">
    <?php print $content['text']; ?>
  </div>
  <div class="panel-panel panel-content panels-one-col-tabs-titles tabs">
    <?php print $content['titles']; ?>
  </div>
  <div class="panel-panel panel-content panels-one-col-tabs-views">
    <?php print $content['views']; ?>
  </div>
</div>