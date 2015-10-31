<?php
/**
* @file
* Template for a two column (content and sidebar) panel layout with a fixed width centered.
*
*
* Variables:
* - $id: An optional CSS id to use for the layout.
* - $content: An array of content, each item in the array is keyed to one
*   panel of the layout. This layout supports the following sections:
*   $content['content']: The main content.
*   $content['sidebar']: The sidebar.
*/
?>
<div class="panel-display panel-display-margin panel-two-col clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
    <div class="panel-panel panel-top panel-two-col-top">
      <?php print $content['top']; ?>
    </div>
    <div class="panel-panel panel-top panel-two-col-content-wrapper">
    <div class="panel-panel panel-content panel-two-col-content">
      <?php print $content['content']; ?>
    </div>
    <div class="panel-panel panel-sidebar panel-two-col-sidebar">
      <?php print $content['sidebar']; ?>
    </div>
  </div>
</div>