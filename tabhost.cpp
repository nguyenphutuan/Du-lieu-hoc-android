 TabHost TB= getTabHost();
		 TabHost.TabSpec tab1=TB.newTabSpec("photo");
        TabHost.TabSpec tab2=TB.newTabSpec("song");
        TabHost.TabSpec tab3=TB.newTabSpec("music");

        tab1.setIndicator("tab1",getResources().getDrawable(R.mipmap.ic_launcher));
        tab1.setContent(new Intent(this, Main2Activity.class));

        tab2.setIndicator("tab2", getResources().getDrawable(R.mipmap.ic_launcher));
        tab2.setContent(new Intent(this, Main3Activity.class));

        tab3.setIndicator("tab3", getResources().getDrawable(R.mipmap.ic_launcher));
        tab3.setContent(new Intent(this,Main4Activity.class));

        TB.addTab(tab1);
        TB.addTab(tab2);
        TB.addTab(tab3);
        
tab.setOnTabChangedListener(newTabHost.OnTabChangeListener() {//ham su kien coa tabhost
 public void onTabChanged(String arg0) {
 
 });
 
  final TabHost tab=(TabHost) findViewById (android.R.id.tabhost);
 tab.setup();
 TabHost.TabSpec tab1;
 //T?o tab1
 tab1=tab.newTabSpec("t1");
 tab1.setContent(R.id.tab1);
 tab1.setIndicator("1-Calculator");
 tab.addTab(tab1);
 //T?o tab2
 spec=tab.newTabSpec("t2");
 spec.setContent(R.id.tab2);
 spec.setIndicator("2-History");
 tab.addTab(spec);
 

                <LinearLayout
                    android:id="@+id/tab1"
                    android:layout_width="match_parent"
                    android:layout_height="match_parent"
                    android:orientation="vertical">
                    <include layout="@layout/layout_tabhost1"/>//day la dong giup lien ket voi 1 xml khac
                </LinearLayout>
