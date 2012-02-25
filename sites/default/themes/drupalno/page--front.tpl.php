
<div id="page" class="clearfix">

  <div id="header">
    

      <?php print render($page['header']); ?>
      <div id="logo"><a href="/"><img src="/<?php print $directory ?>/images/drupalogo.png" alt="Drupal.no logo" title="Drupal.no" /></a></div>


  </div>
  
  <div id="main-menu">
    <?php print render($page['menu']); ?>
  </div>
    
  <div id="contentwrap" class="front-content clearfix">
    <div id="slider-container" class="clearfix">
      <div id="slider-frame">
        <div class="slider-title">Norske nettsider bygget med Drupal<div class="morelink"><a href="node/1">Se flere norske sider bygget på Drupal</a></div></div>
          <ul class="slider clearfix">
            
            <?php slider(); ?>
            
          </ul>
          <div class="slider-pager"><a href="#" class="previous">Tilbake</a> &nbsp;&nbsp; <a href="#" class="next">Neste</a><div class="numbers"></div></div>
      </div>
    </div>
    
    
    
    <div id="frontcontent" class="clearfix">
      <?php print render($page['front']); ?>
    </div>
    
    
  </div>

  <div id="footer" class="clearfix">
    <?php print render($page['footer']); ?>
  </div>
</div>


