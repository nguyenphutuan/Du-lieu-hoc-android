public class MainActivity extends Activity {
    TextView tvshow;
    CountDownTimer count;
    int index=0;
    int index2=0;
    Button btstart;
    Button btstop;
    Button close;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        tvshow  = (TextView)findViewById(R.id.tvshow);
        btstart = (Button)findViewById(R.id.btstart);
        btstop= (Button)findViewById(R.id.btstop);
        close=(Button)findViewById(R.id.btntry);
        close.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                tvshow.setText("0" + ":" + "0");
                index=0;
                index2=0;
                btstart.setEnabled(true);
                count.cancel();
            }
        });

        btstart.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View arg0) {
                btstart.setEnabled(false);
                // TODO Auto-generated method stub
                count = new CountDownTimer(100000,1000) {
                    @Override
                    public void onTick(long millisUntilFinished) {
                        index++;
                        if (index==60){
                            index2++;
                            index=0;
                        }

                        tvshow.setText(index2+":"+index);
                    }
                    @Override
                    public void onFinish() {

                        tvshow.setText("total:"+ index2+":"+index);
                    }
                };
                count.start();
            }
        });


        btstop.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View arg0) {
                btstart.setEnabled(true);
                count.cancel();
            }
        });



    }

}

