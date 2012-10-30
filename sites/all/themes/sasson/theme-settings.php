<?php

/**
 * @file
 * Theme settings for the sasson
 */
function sasson_form_system_theme_settings_alter(&$form, &$form_state) {

  drupal_add_css(drupal_get_path('theme', 'sasson') .'/styles/theme-settings.css');
  
  $form['sasson_settings'] = array(
    '#type' => 'vertical_tabs',
    '#weight' => -10,
    '#prefix' => '<h3>' . t('Theme configuration') . '</h3>',
  );

  $form['#submit'][] = 'sasson_flush_css';
  
  /**
   * Grid Settings
   */
  $form['sasson_settings']['sasson_grid'] = array(
    '#type' => 'fieldset',
    '#title' => t('Grid settings'),
  );
  $form['sasson_settings']['sasson_grid']['sasson_show_grid'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show grid background layer.'),
    '#description' => t('Display a visible background grid, for easier elements positioning'),
    '#default_value' => theme_get_setting('sasson_show_grid'),
  );  

  $form['sasson_settings']['sasson_grid']['sasson_grid_dimensions'] = array(
    '#type' => 'fieldset',
    '#title' => t('Grid dimensions'),
  );
  $form['sasson_settings']['sasson_grid']['sasson_grid_dimensions']['sasson_grid_width'] = array(
    '#type' => 'textfield',
    '#size' => 10,
    '#title' => t('Grid width'),
    '#description' => t("Set the total grid width"),
    '#default_value' => theme_get_setting('sasson_grid_width'),
  );
  $form['sasson_settings']['sasson_grid']['sasson_grid_dimensions']['sasson_columns'] = array(
    '#type' => 'textfield',
    '#size' => 10,
    '#title' => t('Number of columns'),
    '#description' => t("Set the total number of columns"),
    '#default_value' => theme_get_setting('sasson_columns'),
  );
  $form['sasson_settings']['sasson_grid']['sasson_grid_dimensions']['sasson_gutter_width'] = array(
    '#type' => 'textfield',
    '#size' => 10,
    '#title' => t('Gutter width'),
    '#description' => t("This value represents the margin between grid elements"),
    '#default_value' => theme_get_setting('sasson_gutter_width'),
  );
  
  $form['sasson_settings']['sasson_grid']['sasson_sidebars_dimensions'] = array(
    '#type' => 'fieldset',
    '#title' => t('Sidebars'),
  );
  $form['sasson_settings']['sasson_grid']['sasson_sidebars_dimensions']['sasson_sidebar_first'] = array(
    '#type' => 'textfield',
    '#size' => 10,
    '#title' => t('First sidebar width'),
    '#description' => t("Set the width (# of columns) for the first sidebar"),
    '#default_value' => theme_get_setting('sasson_sidebar_first'),
  );
  $form['sasson_settings']['sasson_grid']['sasson_sidebars_dimensions']['sasson_sidebar_second'] = array(
    '#type' => 'textfield',
    '#size' => 10,
    '#title' => t('Second sidebar width'),
    '#description' => t("Set the width (# of columns) for the second sidebar"),
    '#default_value' => theme_get_setting('sasson_sidebar_second'),
  );

  /**
   * Responsive Layout Settings
   */
  $form['sasson_settings']['sasson_layout'] = array(
    '#type' => 'fieldset',
    '#title' => t('Responsive Layout Settings'),
  );
  $form['sasson_settings']['sasson_layout']['sasson_responsive'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable responsive layout'),
    '#description' => t("Disable if you don't want your site layout to adapt to small devices, this enables both the css3 media-queries that takes care of adapting the layout and the 'viewport' meta tag that makes sure mobile devices properly display your layout."),
    '#default_value' => theme_get_setting('sasson_responsive'),
  );
  $form['sasson_settings']['sasson_layout']['sasson_responsive_approach'] = array(
    '#type' => 'radios',
    '#title' => t('Desktop or Mobile first'),
    '#options' => array(
        'desktop_first' => t('Desktop first'),
        'mobile_first' => t('Mobile first'),
      ),
    '#description' => t('Select they way your responsive layout should be constructed. desktop-first means we start with desktop size page and reduce accordingly, mobile-first means we start with a very simple layout and build on top of that.<br>
      You may set the layout break-points bellow.'),
    '#default_value' => theme_get_setting('sasson_responsive_approach'),
  );

  $form['sasson_settings']['sasson_layout']['desktop-first'] = array(
    '#type' => 'fieldset',
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#title' => t('Desktop first'),
  );
  $form['sasson_settings']['sasson_layout']['desktop-first']['sasson_responsive_narrow'] = array(
    '#type' => 'textfield',
    '#size' => 10,
    '#title' => t('Narrow width'),
    '#description' => t("Set the first breakpoint in which the layout will adapt, this should probably be your max page width"),
    '#default_value' => theme_get_setting('sasson_responsive_narrow'),
  );
  $form['sasson_settings']['sasson_layout']['desktop-first']['sasson_responsive_narrower'] = array(
    '#type' => 'textfield',
    '#size' => 10,
    '#title' => t('Narrower width'),
    '#description' => t("Set the second breakpoint in which the layout will adapt"),
    '#default_value' => theme_get_setting('sasson_responsive_narrower'),
  );
  $form['sasson_settings']['sasson_layout']['desktop-first']['sasson_responsive_narrowest'] = array(
    '#type' => 'textfield',
    '#size' => 10,
    '#title' => t('Narrowest width'),
    '#description' => t("Set the third breakpoint in which the layout will adapt"),
    '#default_value' => theme_get_setting('sasson_responsive_narrowest'),
  );

  $form['sasson_settings']['sasson_layout']['mobile-first'] = array(
    '#type' => 'fieldset',
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#title' => t('Mobile first'),
  );
  $form['sasson_settings']['sasson_layout']['mobile-first']['sasson_responsive_mf_small'] = array(
    '#type' => 'textfield',
    '#size' => 10,
    '#title' => t('Small width'),
    '#description' => t("Set the first breakpoint in which the layout will adapt"),
    '#default_value' => theme_get_setting('sasson_responsive_mf_small'),
  );
  $form['sasson_settings']['sasson_layout']['mobile-first']['sasson_responsive_mf_medium'] = array(
    '#type' => 'textfield',
    '#size' => 10,
    '#title' => t('Medium width'),
    '#description' => t("Set the second breakpoint in which the layout will adapt"),
    '#default_value' => theme_get_setting('sasson_responsive_mf_medium'),
  );
  $form['sasson_settings']['sasson_layout']['mobile-first']['sasson_responsive_mf_large'] = array(
    '#type' => 'textfield',
    '#size' => 10,
    '#title' => t('Large width'),
    '#description' => t("Set the third breakpoint in which the layout will adapt, this should probably be your max page width"),
    '#default_value' => theme_get_setting('sasson_responsive_mf_large'),
  );

  $form['sasson_settings']['sasson_layout']['responsive_menus'] = array(
    '#type' => 'fieldset',
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#title' => t('Responsive menus'),
  );
  $form['sasson_settings']['sasson_layout']['responsive_menus']['sasson_responsive_menus_width'] = array(
    '#type' => 'textfield',
    '#size' => 10,
    '#title' => t('Responsive menus page width'),
    '#description' => t("Set the width in which the selected menus turn into a select menu, or 0 to disable."),
    '#default_value' => theme_get_setting('sasson_responsive_menus_width'),
  );
  $form['sasson_settings']['sasson_layout']['responsive_menus']['sasson_responsive_menus_selectors'] = array(
    '#type' => 'textfield',
    '#title' => t('Responsive menus selectors'),
    '#description' => t("Enter some CSS selectors for the menus you want to alter."),
    '#default_value' => theme_get_setting('sasson_responsive_menus_selectors'),
  );
  $form['sasson_settings']['sasson_layout']['responsive_menus']['sasson_responsive_menus_autohide'] = array(
    '#type' => 'checkbox',
    '#title' => t('Auto-hide the standard menu'),
    '#default_value' => theme_get_setting('sasson_responsive_menus_autohide'),
  );

  /**
   * SASS Settings
   */
  $form['sasson_settings']['sasson_sass'] = array(
    '#type' => 'fieldset',
    '#title' => t('SASS / SCSS settings'),
  );
  $form['sasson_settings']['sasson_sass']['sasson_sass'] = array(
    '#type' => 'checkbox',
    '#title' => t('Compile SASS / SCSS to CSS'),
    '#description' => t('SASS integration - uncheck if you are already using a different sass compiler.'),
    '#default_value' => theme_get_setting('sasson_sass'),
  );
  $form['sasson_settings']['sasson_sass']['sasson_devel'] = array(
    '#type' => 'checkbox',
    '#title' => t('Development mode - Recompile all SASS / SCSS files on every change (+FireSass support).'),
    '#description' => t('SASS Development - Recompile SASS / SCSS files every time you change them and get <a href="!link">FireSass</a> support. WARNING: css output is way bigger, use only in development.', array('!link' => 'https://addons.mozilla.org/en-US/firefox/addon/firesass-for-firebug/')),
    '#default_value' => theme_get_setting('sasson_devel'),
  );
  $form['sasson_settings']['sasson_sass']['sasson_flush'] = array(
    '#type' => 'submit',
    '#value' => 'Recompile SASS / SCSS files',
    '#submit' => array('sasson_flush_css'),
  );
  
  /**
   * CSS resets
   */
  $form['sasson_settings']['sasson_reset'] = array(
    '#type' => 'fieldset',
    '#title' => t('CSS resets'),
  );
  $form['sasson_settings']['sasson_reset']['sasson_cssreset'] = array(
    '#type' => 'radios',
    '#title' => t('Normalize VS Reset'),
    '#options' => array(
        'normalize' => t('Use !normalize from !h5bp.', array('!normalize' => l('normalize.css', 'http://necolas.github.com/normalize.css/', array('attributes' => array('target'=>'_blank'))), '!h5bp' => l('HTML5 Boilerplate', 'http://html5boilerplate.com/', array('attributes' => array('target'=>'_blank'))))),
        'reset' => t("Use !meyer's CSS reset.", array('!meyer' => l('Eric Meyer', 'http://meyerweb.com/eric/tools/css/reset/', array('attributes' => array('target'=>'_blank'))))),
        'none' => t("None"),
      ),
    '#description' => t('Normalize.css makes browsers render all elements more consistently and in line with modern standards, while preserving useful defaults, unlike many CSS resets.<br>
      Reset.css takes the approach of reseting css values to reduce browser inconsistencies in things like default line heights, margins and font sizes of headings, and so on.'),
    '#default_value' => theme_get_setting('sasson_cssreset'),
  );
  $form['sasson_settings']['sasson_reset']['sasson_formalize'] = array(
    '#type' => 'checkbox',
    '#title' => t("Use !formalize to reset your forms.", array('!formalize' => l('Formalize', 'http://formalize.me/', array('attributes' => array('target'=>'_blank'))))),
    '#description' => t('Break the cycle of inconsistent form defaults, style forms with impunity!'),
    '#default_value' => theme_get_setting('sasson_formalize'),
  );

  /**
   * HTML5 IE support
   */
  $form['sasson_settings']['sasson_html5'] = array(
    '#type' => 'fieldset',
    '#title' => t('HTML5 IE support'),
  );
  $form['sasson_settings']['sasson_html5']['sasson_force_ie'] = array(
    '#type' => 'checkbox',
    '#title' => t('Force latest IE rendering engine (even in intranet) & Chrome Frame'),
    '#default_value' => theme_get_setting('sasson_force_ie'),
  );
  $form['sasson_settings']['sasson_html5']['sasson_html5shiv'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable HTML5 elements in IE'),
    '#description' => t('Makes IE understand HTML5 elements via <a href="!shivlink">HTML5 shiv</a>. disable if you use a different method.', array('!shivlink' => 'http://code.google.com/p/html5shiv/')),
    '#default_value' => theme_get_setting('sasson_html5shiv'),
  );
  $form['sasson_settings']['sasson_html5']['sasson_prompt_cf'] = array(
    '#type' => 'select', 
    '#title' => t('Prompt IE users to install Chrome Frame'),
    '#default_value' => theme_get_setting('sasson_prompt_cf'),
    '#options' => drupal_map_assoc(array(
       'Disabled', 
       'IE 6', 
       'IE 7', 
       'IE 8', 
       'IE 9', 
    )),
      '#description' => t('Set the latest IE version you would like the prompt box to show on or disable if you want to support old IEs.'),
  );

  /**
   * Fonts
   */
  $form['sasson_settings']['sasson_fonts'] = array(
    '#type' => 'fieldset',
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#description' => t("
      Set a custom font to be used across the site. you may override typography settings in you sub-theme's css/sass/scss files.<br>
      <strong>Note:</strong> Only fonts from !webfont are supported at the moment, if this is not enough you should check out !fontyourface module.", 
      array('!webfont' => l('google web fonts', 'http://www.google.com/webfonts', array('attributes' => array('target'=>'_blank'))), '!fontyourface' => l('@font-your-face', 'http://drupal.org/project/fontyourface', array('attributes' => array('target'=>'_blank'))))),
    '#title' => t('Fonts'),
  );
  $form['sasson_settings']['sasson_fonts']['sasson_font'] = array(
    '#type' => 'textfield',
    '#title' => t('Font name'),
    '#description' => t("Enter the font name from Google web fonts."),
    '#default_value' => theme_get_setting('sasson_font'),
  );
  $form['sasson_settings']['sasson_fonts']['sasson_font_fallback'] = array(
    '#type' => 'textfield',
    '#title' => t('Font fallback'),
    '#description' => t("Enter the font names you would like as a fallback in a comma separated list. e.g. <code>'Times New Roman', Times, serif</code>."),
    '#default_value' => theme_get_setting('sasson_font_fallback'),
  );
  $form['sasson_settings']['sasson_fonts']['sasson_font_selectors'] = array(
    '#type' => 'textfield',
    '#title' => t('CSS selectors'),
    '#description' => t("Enter some CSS selectors for the fonts to apply to. if none is provided the font will apply to the <code>body</code> tag"),
    '#default_value' => theme_get_setting('sasson_font_selectors'),
  );

  /**
   * Development Settings
   */
  $form['sasson_settings']['sasson_development'] = array(
    '#type' => 'fieldset',
    '#title' => t('Development'),
  );
  $form['sasson_settings']['sasson_development']['sasson_clear_registry'] = array(
    '#type' => 'checkbox',
    '#title' => t('Rebuild theme registry on every page request.'),
    '#description' => t('During theme development, it can be very useful to continuously <a href="!link">rebuild the theme registry</a>. WARNING: this is a huge performance penalty and must be turned off on production websites.', array('!link' => 'http://drupal.org/node/173880#theme-registry')),
    '#default_value' => theme_get_setting('sasson_clear_registry'),
  );

  $form['sasson_settings']['sasson_development']['sasson_watch'] = array(
    '#type' => 'fieldset',
    '#title' => t('File Watcher'),
  );
  $form['sasson_settings']['sasson_development']['sasson_watch']['sasson_watcher'] = array(
    '#type' => 'checkbox',
    '#title' => t('Watch for file changes and automatically refresh the browser.'),
    '#description' => t('With this feature on, you may enter a list of URLs for files to be watched, whenever a file is changed, your browser will automagically refresh itself.<br><strong>Turn this off when not actively developing.</strong>'),
    '#default_value' => theme_get_setting('sasson_watcher'),
  );
  $form['sasson_settings']['sasson_development']['sasson_watch']['sasson_watch_file'] = array(
    '#type' => 'textarea',
    '#title' => t('Files to watch'),
    '#description' => t('Enter the internal path of the files to be watched. one file per line. no leading slash.<br> e.g. sites/all/themes/sasson/styles/sasson.scss<br>Lines starting with a semicolon (;) will be ignored.<br><strong>Keep this list short !</strong> Watch only the files you currently work on.'),
    '#rows' => 3,
    '#default_value' => theme_get_setting('sasson_watch_file'),
  );
  $form['sasson_settings']['sasson_development']['sasson_watch']['sasson_instant_watcher'] = array(
    '#type' => 'checkbox',
    '#title' => t('Update styles without refreshing.'),
    '#description' => t('<strong>Experimental</strong> - this will instantly update your browser when a watched file is updated without refreshing the browser. note: this will work with stylesheets only (CSS/SASS/SCSS).'),
    '#default_value' => theme_get_setting('sasson_instant_watcher'),
  );

  $form['sasson_settings']['sasson_development']['sasson_overlay'] = array(
    '#type' => 'fieldset',
    '#title' => t('Design Overlay'),
  );
  $form['sasson_settings']['sasson_development']['sasson_overlay']['sasson_overlay'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable overlay image'),
    '#description' => t('With this feature on, you may enter the url for an image that will be place as a draggable overlay image over your HTML for easy visual comparison. you may also set different overlay opacity.'),
    '#default_value' => theme_get_setting('sasson_overlay'),
  );
  $form['sasson_settings']['sasson_development']['sasson_overlay']['sasson_overlay_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Overlay image url'),
    '#default_value' => theme_get_setting('sasson_overlay_url'),
  );
  $form['sasson_settings']['sasson_development']['sasson_overlay']['sasson_overlay_opacity'] = array(
    '#type' => 'select', 
    '#title' => t('Overlay opacity'),
    '#default_value' => theme_get_setting('sasson_overlay_opacity'),
    '#options' => drupal_map_assoc(array(
       '0.1',
       '0.2',
       '0.3',
       '0.4',
       '0.5',
       '0.6',
       '0.7',
       '0.8',
       '0.9',
       '1',
    )),
  );

  /**
   * General Settings
   */
  $form['sasson_settings']['sasson_general'] = array(
    '#type' => 'fieldset',
    '#title' => t('General'),
  );

  $form['sasson_settings']['sasson_general']['theme_settings'] = $form['theme_settings'];
  $form['sasson_settings']['sasson_general']['logo'] = $form['logo'];
  $form['sasson_settings']['sasson_general']['favicon'] = $form['favicon'];
  unset($form['theme_settings']);
  unset($form['logo']);
  unset($form['favicon']);

  $form['sasson_settings']['sasson_general']['sasson_breadcrumb'] = array(
    '#type' => 'fieldset',
    '#title' => t('Breadcrumbs'),
  );
  $form['sasson_settings']['sasson_general']['sasson_breadcrumb']['sasson_breadcrumb_hideonlyfront'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide the breadcrumb if the breadcrumb only contains the link to the front page.'),
    '#default_value' => theme_get_setting('sasson_breadcrumb_hideonlyfront'),
  );
  $form['sasson_settings']['sasson_general']['sasson_breadcrumb']['sasson_breadcrumb_showtitle'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show page title on breadcrumb.'),
    '#default_value' => theme_get_setting('sasson_breadcrumb_showtitle'),
  );
  $form['sasson_settings']['sasson_general']['sasson_breadcrumb']['sasson_breadcrumb_separator'] = array(
    '#type' => 'textfield',
    '#title' => t('Breadcrumb separator'),
    '#default_value' => theme_get_setting('sasson_breadcrumb_separator'),
  );
  
  $form['sasson_settings']['sasson_general']['sasson_rss'] = array(
    '#type' => 'fieldset',
    '#title' => t('RSS'),
  );
  $form['sasson_settings']['sasson_general']['sasson_rss']['sasson_feed_icons'] = array(
    '#type' => 'checkbox',
    '#title' => t('Display Feed Icons'),
    '#default_value' => theme_get_setting('sasson_feed_icons'),
  );
}

/**
 * Flush the genrated css files so the get recompiled
 */
function sasson_flush_css() {
  // @todo find a better method of doing that
  variable_del('drupal_css_cache_files');
  file_scan_directory('public://css', '/.*/', array('callback' => 'file_unmanaged_delete'));
  drupal_set_message(t('Your SASS / SCSS files will be recompiled'), 'status');
}
