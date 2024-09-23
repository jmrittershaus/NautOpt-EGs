function showTab(tabSet, tabToShow)
{
  $('.tab-pane').each(function(){
    var thisTab = this.id;
    if (thisTab.startsWith(tabSet)) {
      if (thisTab==tabToShow)
      {
        $(this).addClass('active-pane');
      } else {
        $(this).removeClass('active-pane');
      }
    }
  })
  $('.tab').each(function(){
    var thisTab = $(this).attr('showTab');
    if (thisTab.startsWith(tabSet)) {
      if (thisTab==tabToShow)
      {
        $(this).addClass('active-tab');
      } else {
        $(this).removeClass('active-tab');
      }
    }
  })
}
$('.tab-link').click(function(e){
  e.preventDefault();
  var tabToShow = $(this).attr('showTab');
  var tabSet = $(this).attr('tabSet');
  showTab(tabSet, tabToShow);
});
// enable linking to tab
var url = document.location.toString();
if (url.match('#')) {
  var hashID = url.split('#')[1];
  if (hashID.indexOf('stq') == -1)
  {
    // this is not from site search, which uses "#stq=" to populate the
    // querystring with the search keywords
    if ($('.tab-content #' + hashID).length) {
      showTab(hashID);
      // scroll to the tab position in 1 sec; offset by 110px because of
      // the breadcrumb in position:fixed at the top
      $([document.documentElement, document.body]).animate({
          scrollTop: $('.tab-content #' + hashID).offset().top - 125
      }, 1000);
    }
  }
}
