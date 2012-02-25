jQuery(document).ready(function() {
	
		jQuery('ul.slider li').css({opacity: 0.0});
		jQuery('ul.slider li:first').css({opacity: 1.0});
		
		var total = jQuery("ul.slider li").size();
		var count = 1;
		
		jQuery('.slider-pager .numbers').text(count);
		
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
			jQuery('ul.slider li.show').animate({opacity:0.0});
			jQuery('ul.slider li.show').removeClass('show');
			jQuery('ul.slider li:nth-child('+count+')').animate({opacity:1.0});
			jQuery('ul.slider li:nth-child('+count+')').addClass('show');
			jQuery('.slider-pager .numbers').text(count);
		}
		
		function back() {
			count--;
			if (count == 0) {
				count = total;
			}
			jQuery('ul.slider li.show').animate({opacity:0.0});
			jQuery('ul.slider li.show').removeClass('show');
			jQuery('ul.slider li:nth-child('+count+')').animate({opacity:1.0});
			jQuery('ul.slider li:nth-child('+count+')').addClass('show');
			jQuery('.slider-pager .numbers').text(count);
		}	
	
});
