public class MainActivity extends AppCompatActivity {
    Button btnlogin;
    EditText edituser,editpassword;
    CheckBox chksaveaccount;
    //??t t�n cho t?p tin l?u tr?ng th�i
    String prefname="my_data";
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        btnlogin=(Button) findViewById(R.id.button);
        edituser =(EditText) findViewById(R.id.editText);
        editpassword=(EditText) findViewById(R.id.editText2);
        chksaveaccount=(CheckBox) findViewById(R.id.checkBox);

        btnlogin.setOnClickListener(
                new View.OnClickListener() {
                    public void onClick(View arg0) {
                        doLogin();
                    }
                });
    }
    /**
     * h�m ??ng nh?p h? th?ng
     */
    public void doLogin()
    {
        if (edituser.length()==0||editpassword.length()==0){
            Toast.makeText(MainActivity.this,"Ban phai nhap day du thong tin", Toast.LENGTH_SHORT).show();
            return;
        }

      //  finish();//?�ng m�n h�nh hi?n t?i
        Intent i=new Intent(this,Main2Activity.class);
        //truy?n d? li?u qua m�n h�nh m?i
        i.putExtra("user", edituser.getText().toString());
        startActivity(i);//m? m�n h�nh m?i
    }
    @Override
    protected void onPause() {//cai nay khi dong ham main chinh thi no tu dong goi ham lu trang thai o ben duoi
        // TODO Auto-generated method stub
        super.onPause();
        //g?i h�m l?u tr?ng th�i ? ?�y
        savingPreferences();
    }
    @Override
    protected void onResume() {//cai nay khi quay lai ham main chinh no du dong load du lieu cu~ len luon
        // TODO Auto-generated method stub
        super.onResume();
        //g?i h�m ??c tr?ng th�i ? ?�y
        restoringPreferences();
    }
    /**
     * h�m l?u tr?ng th�i
     */
    public void savingPreferences()
    {
        //t?o ??i t??ng getSharedPreferences
        SharedPreferences pre=getSharedPreferences(prefname, MODE_PRIVATE);
        //t?o ??i t??ng Editor ?? l?u thay ??i
        SharedPreferences.Editor editor=pre.edit();
        String user=edituser.getText().toString();
        String pwd=editpassword.getText().toString();
        boolean bchk=chksaveaccount.isChecked();
        if(!bchk)
        {
            //x�a m?i l?u tr? tr??c ?�
            editor.clear();
        }
        else
        {
            //l?u v�o editor
            editor.putString("user", user);
            editor.putString("pwd", pwd);
            editor.putBoolean("checked", bchk);
        }
        //ch?p nh?n l?u xu?ng file
        editor.commit();
    }
    /**
     * h�m ??c tr?ng th�i ?� l?u tr??c ?�
     */
    public void restoringPreferences()
    {
        SharedPreferences pre=getSharedPreferences
                (prefname,MODE_PRIVATE);
        //l?y gi� tr? checked ra, n?u kh�ng th?y th� gi� tr? m?c ??nh l� false
        boolean bchk=pre.getBoolean("checked", false);
        if(bchk)
        {
            //l?y user, pwd, n?u kh�ng th?y gi� tr? m?c ??nh l� r?ng
            String user=pre.getString("user", "");
            String pwd=pre.getString("pwd", "");
            edituser.setText(user);
            editpassword.setText(pwd);
        }
        chksaveaccount.setChecked(bchk);
    }

}


