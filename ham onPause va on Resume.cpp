 @Override
    protected void onPause() {//cai nay khi dong ham main chinh thi no tu dong goi ham lu trang thai o ben duoi
        // TODO Auto-generated method stub
        super.onPause();
        Toast.makeText(MainActivity.this,"Da dong ham main chinh", Toast.LENGTH_SHORT).show();
        //g?i h�m l?u tr?ng th�i ? ?�y
       
    }
    @Override
    protected void onResume() {//cai nay khi quay lai ham main chinh no du dong load du lieu cu~ len luon
        // TODO Auto-generated method stub
        super.onResume();
        //g?i h�m ??c tr?ng th�i ? ?�y
        Toast.makeText(MainActivity.this,"Da mo lai main chinh", Toast.LENGTH_SHORT).show();
       
    }
