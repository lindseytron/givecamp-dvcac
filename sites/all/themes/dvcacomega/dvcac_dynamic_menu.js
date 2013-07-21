/*
 * Dynamically collapse all sidebar menus, allowing the submenus to be
 * expandable. Leave open the current page's active trail
 */

(function($) {

  $(document).ready(function() {
    //Auto collapse non active menus
    var item = jQuery(".menu li a").not(".active-trail");
    item.parent().toggleClass("collapsed expanded");
    item.next().toggle();

    //Attach click handler to all menus
    jQuery(".menu li a").click(function() {
      jQuery(this).parent().toggleClass("collapsed expanded");
      jQuery(this).next().toggle();
    });
  });

})(jQuery);