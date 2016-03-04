buoc 1: tao them 2 layout xml;
cho vao layout xml chinh 1 cai tabhost;
buoc2;thay doi dia chi id cua cai tabhost thanh @android:id/tabHost
buoc3: trong cai tabhost do ta them cai dong lenh (1).
<LinearLayout
                    android:id="@+id/tab1"
                    android:layout_width="match_parent"
                    android:layout_height="match_parent"
                    android:orientation="vertical">
               (1)     <include layout="@layout/layout_tabhost1"/>//day la dong giup lien ket voi 1 xml khac
                </LinearLayout>
buoc4: viet ntn;
	  final TabHost tab=(TabHost) findViewById(android.R.id.tabhost);
        tab.setup();
        TabHost.TabSpec spec;

        spec=tab.newTabSpec("t1");
        spec.setContent(R.id.tab1);
        spec.setIndicator("1-Calculator");
        tab.addTab(spec);

        spec=tab.newTabSpec("t2");
        spec.setContent(R.id.tab2);
        spec.setIndicator("2-History");
        tab.addTab(spec);

