public class MainActivity extends AppCompatActivity {
    Button btn;
    TextView txtv;
    int year_,month_,day_;
    static final int DILOG_ID = 0;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        btn=(Button)findViewById(R.id.button);
        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                showDialog(DILOG_ID);
            }
        });

    }
    @Override
    protected Dialog onCreateDialog(int id){
        if (id==DILOG_ID){
        	return new DatePickerDialog(this,dpickerLister,year_,month_,day_);
		}
        
        return null;
    }
    private DatePickerDialog.OnDateSetListener dpickerLister=new DatePickerDialog.OnDateSetListener(){

        @Override
        public void onDateSet(DatePicker view, int year, int monthOfYear, int dayOfMonth) {
            year_=year;
            month_=monthOfYear+1;
            day_=dayOfMonth;
            txtv=(TextView)findViewById(R.id.textView);
            txtv.setText(day_+"/"+month_+"/"+year_);
           // Toast.makeText(MainActivity.this,year_+"/"+month_+"/"+day_,Toast.LENGTH_SHORT).show();

        }
    };
