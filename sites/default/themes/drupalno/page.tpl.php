
<?php // temporary hack to get right url for images etc
// $base_path = $base_url;?>
     
<div id="page" class="clearfix">

  <div id="header">
      <?php print render($page['header']); ?>
      <div id="logo"><a href="/"><img src="/<?php print $directory ?>/images/drupalogo.png" alt="Drupal.no logo" title="Drupal.no" /></a></div>
  </div>
  
  <div id="main-menu">
    <?php print render($page['menu']); ?>
  </div>

  <?php if($breadcrumb): ?>
  <!-- div id="breadcrumb" class="clearfix">
    <?php print $breadcrumb; ?>
  </div -->
  <?php endif; ?>

  <?php if($tabs): ?>
  <div id="tabs" class="clearfix">
    <?php print render($tabs); ?>
    <?php print render($tabs2); ?>
  </div>
  <?php endif; ?>
  
  <div id="content" class="front-content clearfix">

    
    <div id="content" class="clearfix">
      <?php print render($page['content']); ?>
    </div>
    
  </div>

  <div id="footer" class="clearfix">
    <?php print render($page['footer']); ?>

  </div>
</div>


