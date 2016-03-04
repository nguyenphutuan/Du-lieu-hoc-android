Intent myIntent=new Intent(MainActivity.this, Main2Activity.class);
                Bundle bundle = new Bundle();
               
                bundle.putString("soa",edt.getText().toString());
                bundle.putString("sob",edt2.getText().toString());
                myIntent.putExtra("MyPackage", bundle);
                startActivity(myIntent);
 ///////////////////////////////////
 Intent mh2=getIntent();

 Bundle bd=mh2.getBundleExtra("MyPackage");
 String a=bd.getString("soa");
 String b=bd.getString("sob");
 ///////////sang cai 2
 dong goi 1 class;
Intent myIntent=new Intent(MainActivity.this, Main2Activity.class);
Bundle bundle = new Bundle();
 person p=new person();//day la 1 class peson co 1 ham construct co 2 gt int va string
 p.setTen(edt.getText.toString);
 p.setHo(edt2.getText.toString);
 bundle.putSerializable("t1",p);

myIntent.putExtra("MyPackage", bundle);
startActivity(myIntent);
////////////
Intent mh2=getIntent();
Bundle bd= mh2.getBundleExtra("MyPackage");
person t1=(person)bd.getSerializable("t1");
txtv.setText(t1.getTen+t1.getHo);//toString la kieu get trong ham person tra ve gt String 
