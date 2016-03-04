public class MainActivity extends Activity implements SharedPreferences.OnSharedPreferenceChangeListener{
    RelativeLayout relaty;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Button btn=(Button)findViewById(R.id.button);

        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                Intent i=new Intent(MainActivity.this,Main2Activity.class);
                startActivityForResult(i,113);
            }
        });
        Context ctx=getApplicationContext();
        SharedPreferences pre=PreferenceManager.getDefaultSharedPreferences(ctx);
        pre.registerOnSharedPreferenceChangeListener(this);

    }


    @Override
    public void onSharedPreferenceChanged(SharedPreferences sharedPreferences, String key) {
        boolean data=sharedPreferences.getBoolean(key,false);
        relaty=(RelativeLayout)findViewById(R.id.anhtuan);

        if (data){
            relaty.setBackgroundColor(Color.RED);
        }
        else relaty.setBackgroundColor(Color.GREEN);
        Toast.makeText(this,"check="+data,Toast.LENGTH_LONG).show();

    }
}
/////////////
public class Main2Activity extends PreferenceActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        addPreferencesFromResource(R.xml.myapppreferences);

    }


}

