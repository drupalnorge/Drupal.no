jQuery(document).ready(function() {
	
		jQuery('ul.slider li').css({opacity: 0.0});
		jQuery('ul.slider li:first').css({opacity: 1.0});
		jQuery('.morelink').css({opacity: 0.0});
		jQuery('.slider-pager').css({opacity: 0.0});
		
		jQuery('#slider-container').hover(function(){
				jQuery('.morelink').animate({opacity:1.0}, 500);
				jQuery('.slider-pager').animate({opacity:1.0}, 500);
		}, function(){
				jQuery('.morelink').animate({opacity:0.0}, 500);
				jQuery('.slider-pager').animate({opacity: 0.0}, 500);
				});
		
		var total = jQuery("ul.slider li").size();
		var count = 1;
		
		jQuery('.slider-pager .numbers').text("side "+count+" av "+total);
		
		jQuery('.slider-pager .next').click(function(){
				next();
		});
		
		jQuery('.slider-pager .previous').click(function(){
				back();
		});
		
		function next() {
			count++;
			if (count > total) {
				count = 1;
			}
			jQuery('ul.slider li.show').animate({opacity:0.0}, 500);
			jQuery('ul.slider li.show').removeClass('show');
			jQuery('ul.slider li:nth-child('+count+')').animate({opacity:1.0}, 1500);
			jQuery('ul.slider li:nth-child('+count+')').addClass('show');
			jQuery('.slider-pager .numbers').text("side "+count+" av "+total);
			
		}
		
		function back() {
			count--;
			if (count == 0) {
				count = total;
			}
			jQuery('ul.slider li.show').animate({opacity:0.0}, 500);
			jQuery('ul.slider li.show').removeClass('show');
			jQuery('ul.slider li:nth-child('+count+')').animate({opacity:1.0}, 1500);
			jQuery('ul.slider li:nth-child('+count+')').addClass('show');
			jQuery('.slider-pager .numbers').text("side "+count+" av "+total);
		}	
		
		var pause;
		pause = 0;
		
		var intervalID = setInterval(function(){
		next();
		}, 6000);
		
		
		jQuery('#slider-container').hover(function(){
				clearInterval(intervalID);
				pause++;
		}, function() { //hover out
				if ( pause == 1 ){
				intervalID = setInterval(function(){
						next();		
				}, 6000);
				}
				pause = 0;
		});
		
				

	
});
