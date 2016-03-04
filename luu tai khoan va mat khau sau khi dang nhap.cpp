public class MainActivity extends AppCompatActivity {
    Button btnlogin;
    EditText edituser,editpassword;
    CheckBox chksaveaccount;
    //??t tên cho t?p tin l?u tr?ng thái
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
     * hàm ??ng nh?p h? th?ng
     */
    public void doLogin()
    {
        if (edituser.length()==0||editpassword.length()==0){
            Toast.makeText(MainActivity.this,"Ban phai nhap day du thong tin", Toast.LENGTH_SHORT).show();
            return;
        }

      //  finish();//?óng màn hình hi?n t?i
        Intent i=new Intent(this,Main2Activity.class);
        //truy?n d? li?u qua màn hình m?i
        i.putExtra("user", edituser.getText().toString());
        startActivity(i);//m? màn hình m?i
    }
    @Override
    protected void onPause() {//cai nay khi dong ham main chinh thi no tu dong goi ham lu trang thai o ben duoi
        // TODO Auto-generated method stub
        super.onPause();
        //g?i hàm l?u tr?ng thái ? ?ây
        savingPreferences();
    }
    @Override
    protected void onResume() {//cai nay khi quay lai ham main chinh no du dong load du lieu cu~ len luon
        // TODO Auto-generated method stub
        super.onResume();
        //g?i hàm ??c tr?ng thái ? ?ây
        restoringPreferences();
    }
    /**
     * hàm l?u tr?ng thái
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
            //xóa m?i l?u tr? tr??c ?ó
            editor.clear();
        }
        else
        {
            //l?u vào editor
            editor.putString("user", user);
            editor.putString("pwd", pwd);
            editor.putBoolean("checked", bchk);
        }
        //ch?p nh?n l?u xu?ng file
        editor.commit();
    }
    /**
     * hàm ??c tr?ng thái ?ã l?u tr??c ?ó
     */
    public void restoringPreferences()
    {
        SharedPreferences pre=getSharedPreferences
                (prefname,MODE_PRIVATE);
        //l?y giá tr? checked ra, n?u không th?y thì giá tr? m?c ??nh là false
        boolean bchk=pre.getBoolean("checked", false);
        if(bchk)
        {
            //l?y user, pwd, n?u không th?y giá tr? m?c ??nh là r?ng
            String user=pre.getString("user", "");
            String pwd=pre.getString("pwd", "");
            edituser.setText(user);
            editpassword.setText(pwd);
        }
        chksaveaccount.setChecked(bchk);
    }

}


