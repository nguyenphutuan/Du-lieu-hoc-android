WebView cho ph�p ch�ng ta nh�ng tr�nh duyet web 
v�o b�n trong ung dung cua m�nh. Su dung web view rat huu 
dung trong truong hop ch�ng ta can hien thi noi dung mot trang web b�n trong
 ung dung, cung nhu khi ch�ng ta muan thiet ke mot phan hoac tham ch� to�n bo giao dien
  bang ng�n ngu web quen thuoc (HTML5, Javascript, CSS).


WebView wv = (WebView) findViewById(R.id.webView);

WebSettings webSettings = wv.getSettings();
webSettings.setBuiltInZoomControls(true);
wv.loadUrl("http://android.appwhoosh.com/content/thiet_ke_giao_dien_nguoi_dung_voi_cac_view_co_ban/hien_thi_noi_dung_trang_web_voi_webview.html");


