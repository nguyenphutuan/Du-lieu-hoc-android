//datapick
buoc1://khai bao 2 cai nay bien toan cuc.
	int year_,month_,day_;
    static final int DILOG_ID = 0;
buoc2://khai bao cai nay trong su kien button.
	showDialog(DILOG_ID);
buoc3://viet cai nay o ham ben ngoai ham: protected void onCreate(Bundle savedInstanceState) {}cai nay la ham chinh
	@Override
    protected Dialog onCreateDialog(int id){
        if (id==DILOG_ID)
            return new DatePickerDialog(this,dpickerLister,year_,month_,day_);
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
        }
    };
  /////time pickdilog  
buoc1:	int hour_,minute_;
    	static final int DILOG_ID2 = 1;
buoc2:    showDialog(DILOG_ID2);
buoc3:
	 @Override
    protected Dialog onCreateDialog(int id){
        if (id==DILOG_ID)
            return new TimePickerDialog(this,dpickerLister2,hour_,minute_,false);
        return null;
    }
    private TimePickerDialog.OnTimeSetListener dpickerLister2=new TimePickerDialog.OnTimeSetListener(){

        @Override
        public void onTimeSet(TimePicker view, int hour, int minute) {
           hour_=hour;
            minute_=minute;
            txtv=(TextView)findViewById(R.id.textView);
            txtv.setText(hour_+":"+minute_);
        }

    };
    
    chu y:
    	neu co 2 cai nay o cung 1 app thi ta bo? 1 ham: protected Dialog onCreateDialog(int id) va su dung if else.static final int DILOG_ID = 0;static final int DILOG_ID2 = 1;
