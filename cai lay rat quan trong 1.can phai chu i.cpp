setContentView(R.layout.solo_picture);//dung lenh nay de lien ket ham main.java voi ham main.xml sau do ta co the su dung cac textview hay buton cua no
txtv =(TextView) findViewById(R.id.textView3);
txtv.setText("Image at "+position);
ivSoloPicture=(ImageView) findViewById(R.id.imageView);
ivSoloPicture.setImageResource(mang[position]);

btnBack=(Button) findViewById(R.id.button);
btnBack.setOnClickListener(new View.OnClickListener() {
    public void onClick(View arg0) {
        onCreate(myBackupBundle);//giup ta tro lai main chinh.
    }
});

chu i:
	Bundle myBackupBundle;//buoc1:khai bao la bien toan cuc.
	 myBackupBundle=savedInstanceState;//buoc2 de lenh nay o ben tren ham setContentView(R.layout.activity_main);
	 onCreate(myBackupBundle);//buoc 3 /giup ta tro lai main chinh.
chu y: ham main phai? extenders Activity
	 
android:name=".Main2Activity"2 dong lenh nay la trong android manifest.xml.va dong lenh cuoi dung de thay doi giao dien
android:label="@string/title_activity_main2"

android:theme="@android:style/Theme.Dialog"
