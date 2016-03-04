chyen du lieu gia cac man hinh voi nhau;
o? man hinh 1;
Intent mh1=new Intent(Mainactivity.this,Mainactivity.class);
mh1.putExtra("nhap",edt.getText.tostring);
startActivity(mh1);
//chuyen? sang man hinh 2
  Bundle b=getIntent().getExtras();
if(b!=null){
	txtv.setText(b.getString("nhap"))
}



