
//day la 2 ham de lay danh ba dien thoai roi do? vao 1 cai listView.
//day la 2 cach ban co the dung 1 trong 2 ham.


public void showAllContacts1()
    {
        Uri uri= Uri.parse("content://contacts/people");
        ArrayList<String> list=new ArrayList<String>();
        CursorLoader loader=new CursorLoader(this, uri, null, null, null, null);
        Cursor c1=loader.loadInBackground();
        c1.moveToFirst();
        while(c1.isAfterLast()==false){
            String s="";
            String idColumnName= ContactsContract.Contacts._ID;
            int idIndex=c1.getColumnIndex(idColumnName);
            s=c1.getString(idIndex)+" - ";
            String nameColumnName=ContactsContract.Contacts.DISPLAY_NAME;
            int nameIndex=c1.getColumnIndex(nameColumnName);
            s+=c1.getString(nameIndex);
            c1.moveToNext();
            list.add(s);
        }
        c1.close();
        ListView lv=(ListView) findViewById(R.id.listView);
        ArrayAdapter<String> adapter=new ArrayAdapter<String>(this,
                android.R.layout.simple_list_item_1, list);
        lv.setAdapter(adapter);
    }
    /**
     * hàm danh toàn b? danh b?
     * dùng getContentResolver
     */
    public void showAllContacts2()
    {
        Uri uri=Uri.parse("content://contacts/people");
        ArrayList<String> list=new ArrayList<String>();
        Cursor c1=getContentResolver()
                .query(uri, null, null, null, null);
        c1.moveToFirst();
        while(c1.isAfterLast()==false)
        {
            String s="";
            String idColumnName=ContactsContract.Contacts._ID;
            int idIndex=c1.getColumnIndex(idColumnName);
            s=c1.getString(idIndex)+" - ";
            String nameColumnName=ContactsContract.Contacts.DISPLAY_NAME;
            int nameIndex=c1.getColumnIndex(nameColumnName);
            s+=c1.getString(nameIndex);
            c1.moveToNext();
            list.add(s);
        }
        c1.close();
        ListView lv=(ListView) findViewById(R.id.listView);
        ArrayAdapter<String>adapter=new ArrayAdapter<String>(this,
                android.R.layout.simple_list_item_1, list);
        lv.setAdapter(adapter);
    }
    //chu i la phai khai bao quyen su dung trong manifest
	<uses-permission android:name="android.permission.READ_CONTACTS" />//doc danh ba
    <uses-permission android:name="android.permission.READ_CALL_LOG" />//doc lich su cuoc goi
    <uses-permission android:name="android.permission.READ_EXTERNAL_STORAGE" />
    <uses-permission android:name="com.android.browser.permission.READ_HISTORY_BOOKMARKS" />    
    
    
