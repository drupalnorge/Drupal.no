
<div id="page" class="clearfix">

  <div id="header">
      <?php print render($page['header']); ?>
      <div id="logo"><a href="/"><img src="/<?php print $directory ?>/images/drupal_logo.png" alt="Drupal.no logo" title="Drupal.no" /></a></div>
    <div id="main-menu">
      <?php print render($page['menu']); ?>
    </div>
  </div>
  

    
  <div id="contentwrap" class="front-content clearfix">
    <!--
    <div id="slider-container" class="clearfix">
      <div id="slider-frame">
        <div class="slider-title">Norske nettsider bygget med Drupal<div class="morelink"><a href="node/1">Se flere norske sider bygget på Drupal</a></div></div>
          <ul class="slider clearfix">
            
            
            
          </ul>
          <div class="slider-pager"><a href="#" class="previous">Tilbake</a> &nbsp;&nbsp; <a href="#" class="next">Neste</a><div class="numbers"></div></div>
      </div>
    </div>
    -->
    <div id="front-page-container">
      <div id="drupal-sites">
      </div>
      <div id="front-right">
        <div id="drupal-text">
        </div>
        <div id="learn-more">
        </div>
      </div>
    </div>
    
    <div id="frontcontent" class="clearfix">
      <?php print render($page['front']); ?>
    </div>
    
    
  </div>

  <div id="footer" class="clearfix">
    <?php print render($page['footer']); ?>
    <div id="expert">
      <a href="#"></a>
    </div>
  </div>
</div>


