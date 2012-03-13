/**
 * sasson javascript core
 *
 */
 

(function($) {
  Drupal.behaviors.sasson = {
    attach: function(context) {

      $('html').removeClass('no-js');

    }
  };

  Drupal.behaviors.showOverlay = {
    attach: function(context) {

      $('body.show-overlay').each(function() {
        var body = $(this);
        var overlay = $('<div id="overlay"><img src="'+ Drupal.settings.sasson['overlay_url'] +'"/></div>');
        var overlayToggle = $('<div class="toggle-overlay" ><div>' + Drupal.t('Overlay') + '</div></div>');
        body.append(overlay);
        body.append(overlayToggle);
        $("#overlay").css({ opacity: Drupal.settings.sasson['overlay_opacity'] });
        $('.toggle-overlay').click(function() {
          $('body').toggleClass('show-overlay');
          $('#overlay').toggle();
          $(this).toggleClass("off");
        });
        $("#overlay").draggable();
      });

    }
  };

  Drupal.behaviors.showGrid = {
    attach: function(context) {

      $('body.show-grid').each(function() {
        var body = $(this);
        var gridToggle = $('<div class="toggle-grid" ><div>' + Drupal.t('Grid') + '</div></div>');
        body.append(gridToggle);
        $('.toggle-grid').click(function() {
          $('body').toggleClass('show-grid');
          $(this).toggleClass("off");
        });
      });

    }
  };

})(jQuery);


// Console.log wrapper to avoid errors when firebug is not present
// usage: log('inside coolFunc',this,arguments);
// paulirish.com/2009/log-a-lightweight-wrapper-for-consolelog/
window.log = function() {
  log.history = log.history || [];   // store logs to an array for reference
  log.history.push(arguments);
  if (this.console) {
    console.log(Array.prototype.slice.call(arguments));
  }
};
