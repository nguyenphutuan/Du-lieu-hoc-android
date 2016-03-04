buoc 1:
	tao ra 2 bien public static final int A=1,B=2;
buoc 2:
	Intent intent=new Intent(MainActivity.this, Main2Activity.class);
     startActivityForResult(intent, A);
buoc3:tao 1 ham onActivityResult();
@Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);

        if (requestCode ==A) {
            switch (resultCode) {
                case B:

                    int v1 = data.getIntExtra("data", 0);
                    arraylist.add( v1);
                    adapter.notifyDataSetChanged();
                    break;
                

            }
        }
    }
buoc 4 ://o ben main2Activity
 btnSave1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View arg0) {
                Intent intent=getIntent();
                int value= Integer.parseInt(editNumber.getText()+"");
                intent.putExtra("data", value);
                setResult(MainActivity.B, intent);
                finish();
            }
        });
mh1(buoc1 buoc2)-->mh2(buoc4)->>>mh1(buoc3)
//trong truong hop ta phai chuyen? nhieu du lieu thi ta su dung Bundle dong goi du lieu:
btn.setOnClickListener(new View.OnClickListener() {// ben ham main 1
            @Override
            public void onClick(View v) {
                Intent intent=new Intent(MainActivity.this,Main2Activity.class);
                startActivityForResult(intent,A);
            }
        });

    }
    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);

        if (requestCode ==A) {
            switch (resultCode) {
                case B:
                    Bundle bd = data.getBundleExtra("data");
                    txtv.setText(bd.getString("a")+":"+bd.getString("a2"));
                    break;

            }
        }
    }
->>>ben ham main 2:
	 btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View arg0) {
                Intent intent=getIntent();
                Bundle bd=new Bundle();
                bd.putString("a",timePicker.getCurrentHour()+"");
                bd.putString("a2",timePicker.getCurrentMinute()+"");

                intent.putExtra("data", bd);
                setResult(MainActivity.B, intent);
                finish();
            }
        });


