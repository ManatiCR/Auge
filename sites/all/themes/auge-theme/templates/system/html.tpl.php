<!DOCTYPE html>
<!--[if lt IE 7]> <html class="lt-ie9 lt-ie8 lt-ie7" lang="<?php print $language->language ?>"> <![endif]-->
<!--[if IE 7]>    <html class="lt-ie9 lt-ie8" lang="<?php print $language->language ?>"> <![endif]-->
<!--[if IE 8]>    <html class="lt-ie9" lang="<?php print $language->language ?>"> <![endif]-->
<!--[if gt IE 8]><!--> <html lang="<?php print $language->language ?>"> <!--<![endif]-->

<head>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>

  <!-- Flexslider -->
  <?php if (drupal_is_front_page()): ?>
    <link rel="stylesheet" href="/sites/all/libraries/flexslider/flexslider.css" type="text/css">
    <script src="/sites/all/libraries/flexslider/jquery.flexslider.js"></script>
    <script src="/sites/all/libraries/waypoints/jquery.waypoints.min.js"></script>
  <?php endif; ?>

  <!-- Typekit -->
  <script src="https://use.typekit.net/ahv5igy.js"></script>
  <script>try{Typekit.load({ async: true });}catch(e){}</script>
  <script>
    (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function()
    { (i[r].q=i[r].q||[]).push(arguments)}
    ,i[r].l=1*new Date();a=s.createElement(o),
    m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
    })(window,document,'script','https://www.google-analytics.com/analytics.js','ga');
    ga('create', 'UA-100119967-1', 'auto');
    ga('send', 'pageview');
  </script>
</head>

<body class="<?php print $classes; ?>" <?php print $attributes;?>>

  <!--[if lt IE 8]>
      <p class="chromeframe">You are using an <strong>outdated</strong> browser. Please <a href="http://browsehappy.com/">upgrade your browser</a> or <a href="http://www.google.com/chromeframe/?redirect=true">activate Google Chrome Frame</a> to improve your experience.</p>
  <![endif]-->

  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>

  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>

</body>
</html>
