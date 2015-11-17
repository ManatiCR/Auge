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

// Waypoints for frontpage

$(document).ready(function() {
var $frontboxentre = $('.panel-front-page-boxes-entrepreneur');
var $frontboxlearn = $('.panel-front-page-boxes-learn');
var $frontboxmentor = $('.panel-front-page-boxes-mentor');
var $frontboxinvest = $('.panel-front-page-boxes-invest');

//1
$($frontboxentre).waypoint(function(direction) {
  if (direction==='down'){
    $frontboxentre.addClass('background-change');
  }
  else{
    $frontboxentre.removeClass('background-change');
  }
}, { offset: '20%' });

//2
$($frontboxlearn).waypoint(function(direction) {
  if (direction==='down'){
    $frontboxlearn.addClass('background-change');
  }
  else{
    $frontboxlearn.removeClass('background-change');
  }
}, { offset: '20%' });

//3
$($frontboxmentor).waypoint(function(direction) {
  if (direction==='down'){
    $frontboxmentor.addClass('background-change');
  }
  else{
    $frontboxmentor.removeClass('background-change');
  }
}, { offset: '20%' });

//4
$($frontboxinvest).waypoint(function(direction) {
  if (direction==='down'){
    $frontboxinvest.addClass('background-change');
  }
  else{
    $frontboxinvest.removeClass('background-change');
  }
}, { offset: '20%' });
});

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
