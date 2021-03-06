<?php
/**
* @file
* Template for a one column panel layout with a fixed width centered.
*
* This template provides a very simple "one column" panel display layout.
*
* Variables:
* - $id: An optional CSS id to use for the layout.
* - $content: An array of content, each item in the array is keyed to one
*   panel of the layout. This layout supports the following sections:
*   $content['content']: The only panel in the layout.
*/
?>
<div class="panel-display panel-display-margin <?php if (!empty($css_id)): print $css_id; endif; ?>>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['content']):?>
  <div class="panel-panel panel-content panel-grid-width panel-content-first">
    <?php print $content['content']; ?>
  </div>
  <?php endif; ?>
  <?php if ($content['content_wide']):?>
    <div class="panel-panel panel-content panel-one-col-wide">
      <div class="panel-grid-width">
        <?php print $content['content_wide']; ?>
      </div>
    </div>
  <?php endif; ?>
  <?php if ($content['content_bottom']):?>
    <div class="panel-panel panel-content panel-grid-width panel-content-last">
      <?php print $content['content_bottom']; ?>
    </div>
  <?php endif; ?>
</div>