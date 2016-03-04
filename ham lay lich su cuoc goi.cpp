 /**
     * hàm l?y danh sách l?ch s? cu?c g?i
     * v?i th?i gian nh? h?n 30 giây và s?p x?p theo ngày g?i
     */
    public void accessTheCallLog()
    {
        String [] projection=new String[]{
                CallLog.Calls.DATE,
                CallLog.Calls.NUMBER,
                CallLog.Calls.DURATION
        };
        Cursor c=getContentResolver().query(
                CallLog.Calls.CONTENT_URI,
                projection,
                CallLog.Calls.DURATION+"<?",new String[]{"30"},
                CallLog.Calls.DATE +" Asc");
        c.moveToFirst();
        String s="";
        while(c.isAfterLast()==false){
            for(int i=0;i<c.getColumnCount();i++){
                s+=c.getString(i)+" - ";
            }
            s+="\n";
            c.moveToNext();
        }
        c.close();
        Toast.makeText(this, s, Toast.LENGTH_LONG).show();
    }
