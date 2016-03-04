WebView cho phép chúng ta nhúng trình duyet web 
vào bên trong ung dung cua mình. Su dung web view rat huu 
dung trong truong hop chúng ta can hien thi noi dung mot trang web bên trong
 ung dung, cung nhu khi chúng ta muan thiet ke mot phan hoac tham chí toàn bo giao dien
  bang ngôn ngu web quen thuoc (HTML5, Javascript, CSS).


WebView wv = (WebView) findViewById(R.id.webView);

WebSettings webSettings = wv.getSettings();
webSettings.setBuiltInZoomControls(true);
wv.loadUrl("http://android.appwhoosh.com/content/thiet_ke_giao_dien_nguoi_dung_voi_cac_view_co_ban/hien_thi_noi_dung_trang_web_voi_webview.html");


