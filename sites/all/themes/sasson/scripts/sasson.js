/**
 * sasson javascript core
 *
 */
(function($) {

  Drupal.sasson = {};

  /**
   * This script will watch files for changes and
   * automatically refresh the browser when a file is modified.
   */
  Drupal.sasson.watch = function(url, instant) {
    
    var request;
    var dateModified;

    // Check the last time the file was modified
    request = $.ajax({
      type: "HEAD",
      url: url,
      success: function () {
        dateModified = request.getResponseHeader("Last-Modified");
        interval = setInterval(check,1000);
      }
    });

    var updateStyle = function(filename) {
      var headElm = $("head > *:contains('" + filename + ".css')");
      headElm.html(headElm.html().replace(filename + '.css?', filename + '.css?s'));
      dateModified = request.getResponseHeader("Last-Modified");
    };

    // Check every second if the timestamp was modified
    var check = function() {
      request = $.ajax({
        type: "HEAD",
        url: url,
        success: function () {
          if (dateModified != request.getResponseHeader("Last-Modified")) {
            var filename = url.split('/');
            filename = filename[filename.length - 1].split('.');
            var fileExt = filename[1];
            filename = filename[0];
            if (instant && fileExt == 'css') {
              // css file - update head
              updateStyle(filename);
            } else if (instant && (fileExt == 'scss' || fileExt == 'sass')) {
              // SASS/SCSS file - trigger sass compilation with an ajax call and update head
              $.ajax({
                url: "",
                success: function () {
                  updateStyle(filename);
                }
              });
            } else {
              // Reload the page
              location.reload();
            }
          }
        }
      });
    };
  };
  
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
