// Manatí Base Theme JS functions
(function($) {
  //Toggle
  $(document).ready(function() {
    $('#nav-toggle').on('click', function(e) {
      $('#nav-toggle').toggleClass('on');
      $('.header-content .menu:first').toggleClass('active');
      e.preventDefault();
    });
  });

  //"Turns off" the link on the submenu.

  //Function to prevent the clicking.
  function WidthChange(mq) {
    if (mq.matches) {
      $('.main-menu .expanded').click(function(e) {
        e.preventDefault();
      });	}
      else {}
    }
    //Actual listener to prevent it.
    if (matchMedia) {
      var mq = window.matchMedia('(max-width: 680px)');
      mq.addListener(WidthChange);
      new WidthChange(mq);
    }
    //Makes the submenu work
    if (window.matchMedia('max-width: 680px')) {
      $(document).ready(function() {
        $('.expanded').on('click', function(e) {
          $('.expanded .menu').toggleClass('show');
        });
      });
    }

    //Flexslider for words on front page.
    $(document).ready(function() {
      var frontSlider = $('.slideshow-frontpage');
      if (frontSlider.length) {
        frontSlider.addClass('flexslider');
        frontSlider.flexslider({
          slideDirection: 'vertical',
          slideshow: true,
          animationLoop: true,
          animationDuration: 600,
          slideshowSpeed: 4000,
          controlNav: false,
          useCCS: false,
          animation: 'slide',
        });
      }
    });

    //Personnel modal
    $(document).ready(function() {
      console.log($('.personnel-view-profile > a'));
      $('.personnel-view-profile > a').removeAttr('href');
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



        // Waypoints for frontpage

        $(document).ready(function() {
          //1
          var $frontboxlearn = $('.panel-front-page-boxes-learn');
          var $frontboxlearnimage = $('.panel-front-page-boxes-learn-image');
          $($frontboxlearn).waypoint(function(direction) {
            if (direction==='down'){
              $frontboxlearn.addClass('panel-front-page-boxes-proximity');
              $frontboxlearnimage.addClass('change-opacity');
            }
            else{
              $frontboxlearn.removeClass('panel-front-page-boxes-proximity');
              $frontboxlearnimage.removeClass('change-opacity');
            }
          }, { offset: '30%' });

          $($frontboxlearn).waypoint(function(direction) {
            if (direction==='down'){
              $frontboxlearn.removeClass('panel-front-page-boxes-proximity');
              $frontboxlearnimage.removeClass('change-opacity');
            }
            else{
              $frontboxlearn.addClass('panel-front-page-boxes-proximity');
              $frontboxlearnimage.addClass('change-opacity');
            }
          }, { offset: '-5%' });

          //2
          var $frontboxentre = $('.panel-front-page-boxes-entrepreneur');
          var $frontboxentreimage = $('.panel-front-page-boxes-entrepreneur-image');
          $($frontboxentre).waypoint(function(direction) {
            if (direction==='down'){
              $frontboxentre.addClass('panel-front-page-boxes-proximity');
              $frontboxentreimage.addClass('change-opacity');
            }
            else{
              $frontboxentre.removeClass('panel-front-page-boxes-proximity');
              $frontboxentreimage.removeClass('change-opacity');
            }
          }, { offset: '30%' });

          $($frontboxentre).waypoint(function(direction) {
            if (direction==='down'){
              $frontboxentre.removeClass('panel-front-page-boxes-proximity');
              $frontboxentreimage.removeClass('change-opacity');
            }
            else{
              $frontboxentre.addClass('panel-front-page-boxes-proximity');
              $frontboxentreimage.addClass('change-opacity');
            }
          }, { offset: '-5%' });

          //3
          var $frontboxmentor = $('.panel-front-page-boxes-mentor');
          var $frontboxmentorimage = $('.panel-front-page-boxes-mentor-image');
          $($frontboxmentor).waypoint(function(direction) {
            if (direction==='down'){
              $frontboxmentor.addClass('panel-front-page-boxes-proximity');
              $frontboxmentorimage.addClass('change-opacity');
            }
            else{
              $frontboxmentor.removeClass('panel-front-page-boxes-proximity');
              $frontboxmentorimage.removeClass('change-opacity');
            }
          }, { offset: '30%' });

          $($frontboxmentor).waypoint(function(direction) {
            if (direction==='down'){
              $frontboxmentor.removeClass('panel-front-page-boxes-proximity');
              $frontboxmentorimage.removeClass('change-opacity');
            }
            else{
              $frontboxmentor.addClass('panel-front-page-boxes-proximity');
              $frontboxmentorimage.addClass('change-opacity');
            }
          }, { offset: '-5%' });

          //4
          var $frontboxinvest = $('.panel-front-page-boxes-invest');
          var $frontboxinvestimage = $('.panel-front-page-boxes-invest-image');
          $($frontboxinvest).waypoint(function(direction) {
              $frontboxinvest.addClass('panel-front-page-boxes-proximity');
              $frontboxinvestimage.addClass('change-opacity');
          }, { offset: '30%' });

          $($frontboxinvest).waypoint(function(direction) {
            if (direction==='down'){
              $frontboxinvest.removeClass('panel-front-page-boxes-proximity');
              $frontboxinvestimage.removeClass('change-opacity');
            }
            else{
              $frontboxinvest.addClass('panel-front-page-boxes-proximity');
              $frontboxinvestimage.addClass('change-opacity');
            }
          }, { offset: '-5%' });

          $($frontboxinvest).waypoint(function(direction) {
            if (direction==='up'){
              $frontboxinvest.removeClass('panel-front-page-boxes-proximity');
              $frontboxinvestimage.removeClass('change-opacity');
            }
          }, { offset: '30%' });
        });
  })(jQuery);
