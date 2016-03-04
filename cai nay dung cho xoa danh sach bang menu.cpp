 lv=(ListView)findViewById(R.id.listView);
 class: Banbe banbe=new Banbe();
 lv.setOnItemLongClickListener(new AdapterView.OnItemLongClickListener() {

            @Override
            public boolean onItemLongClick(AdapterView<?> arg0, View arg1,
                                           int arg2, long arg3) {
                //l?u v?t contact ???c ch?n trong ListView
                banbe = arrayList.get(arg2);
                return false;
            }
        });
