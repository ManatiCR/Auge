// Manatí Base Theme JS functions
(function($) {

//Flexslider for words.
  $(document).ready(function() {
    var frontSlider = $('.flexslider-words');
    if (frontSlider.length > 0) {
      frontSlider.addClass('flexslider');
      frontSlider.flexslider({
        slideDirection: 'vertical',
        slideshow: true,
        animationLoop: true,
        animationDuration: 600,
      });
    }
  });
//Personnel modal
  $(document).ready(function() {
    $('.personnel-view-profile a').removeAttr('href');
    // show person overlay
    $('.personnel-view-profile').click(function(){
      $(this).parent('.personnel-hover-content').siblings('.personnel-overlay').toggle();
    });
    // close overlay
    $('.personnel-overlay-close').click(function(){
      $(this).parents('.personnel-overlay').hide();
    });
  });

//Tabs for the who we are page.
  $('.tabs').each(function(){
    // For each set of tabs, we want to keep track of
    // which tab is active and it's associated content
    var $active, $content, $links = $(this).find('a');

    // If the location.hash matches one of the links, use that as the active tab.
    // If no match is found, use the first link as the initial active tab.
    $active = $($links.filter('[href="'+location.hash+'"]')[0] || $links[0]);
    $active.addClass('active');

    $content = $($active[0].hash);

    // Hide the remaining content
    $links.not($active).each(function () {
      $(this.hash).hide();
    });

    // Bind the click event handler
    $(this).on('click', 'a', function(e){
      // Make the old tab inactive.
      $active.removeClass('active');
      $content.hide();

      // Update the variables with the new link and content
      $active = $(this);
      $content = $(this.hash);

      // Make the tab active.
      $active.addClass('active');
      $content.show();

      // Prevent the anchor's default click action
      e.preventDefault();
    });
  });

})(jQuery);