public class MainActivity extends Activity {
    private Button btShow;
    ProgressDialog progressBar;
 
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        btShow = (Button) findViewById(R.id.btShow);
        btShow.setOnClickListener(new View.OnClickListener() {
 
            @Override
            public void onClick(View v) {
             
                // Khoi tao progressBar voi doi là Context
                progressBar = new ProgressDialog(MainActivity.this);
                // Cho phép huy progressBar neu an nút Back
                progressBar.setCancelable(true);
                // Ðat tiêu de cho ProgressBar
                progressBar.setMessage("Ðang x? lý, vui lòng d?i...");
                // Ðat giao dien cho ProgressBar
                progressBar.setProgressStyle(ProgressDialog.STYLE_HORIZONTAL);
                // Ðat giá tri dau tiên, dây là giá tri the hien muc de hoàn thành công 
                // viec có thang tu 0 - > 100
                // do hien tai công viec chua hoàn thành duoc chút nào nên ta dat là 0
                progressBar.setProgress(0);
                // Ðat cho giá tri lon nhat the hien muc de hoàn thành công viec là 100
                progressBar.setMax(100);
                // Hien ProgressBar
                progressBar.show();
                 
                // T?o m?t lu?ng x? lý công vi?c.
                new MyThread().start();
         
            }
        });
 
    }
 
    class MyThread extends Thread{
         
        @Override
        public void run(){
            // xu lý công viec can hoàn thành
            for(int i =0; i< 30; i++){
                // Tam dung 1s, thuc te thì cho này là xu lý công vi?c
                try {
                    Thread.sleep(1000);
                } catch (InterruptedException e) {
                    // TODO Auto-generated catch block
                    e.printStackTrace();
                }
                 
                // tính xem công vi?c dã hoàn thành bao nhiêu ph?n tram và dua lên progressbar
                progressBar.setProgress((i * 100) / 30);
            }
            // dóng brogressbar.
            progressBar.dismiss();
        }
    }
     
}
///hoac don gian nhat thi:
ProgressDialog mProgressDialog = new ProgressDialog(MainActivity.this);
            mProgressDialog.setTitle("Android Basic JSoup Tutorial");
            mProgressDialog.setMessage("Loading...");
            mProgressDialog.setIndeterminate(false);
            mProgressDialog.show();
		sau khi show ra ta cho chay. 1 cai gi do o? day(lam cong viec)
		 mProgressDialog.dismiss();lam viec song no se chay toi dismiss de tat progcess.
