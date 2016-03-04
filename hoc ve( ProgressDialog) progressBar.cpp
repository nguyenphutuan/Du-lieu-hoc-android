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
             
                // Khoi tao progressBar voi doi l� Context
                progressBar = new ProgressDialog(MainActivity.this);
                // Cho ph�p huy progressBar neu an n�t Back
                progressBar.setCancelable(true);
                // �at ti�u de cho ProgressBar
                progressBar.setMessage("�ang x? l�, vui l�ng d?i...");
                // �at giao dien cho ProgressBar
                progressBar.setProgressStyle(ProgressDialog.STYLE_HORIZONTAL);
                // �at gi� tri dau ti�n, d�y l� gi� tri the hien muc de ho�n th�nh c�ng 
                // viec c� thang tu 0 - > 100
                // do hien tai c�ng viec chua ho�n th�nh duoc ch�t n�o n�n ta dat l� 0
                progressBar.setProgress(0);
                // �at cho gi� tri lon nhat the hien muc de ho�n th�nh c�ng viec l� 100
                progressBar.setMax(100);
                // Hien ProgressBar
                progressBar.show();
                 
                // T?o m?t lu?ng x? l� c�ng vi?c.
                new MyThread().start();
         
            }
        });
 
    }
 
    class MyThread extends Thread{
         
        @Override
        public void run(){
            // xu l� c�ng viec can ho�n th�nh
            for(int i =0; i< 30; i++){
                // Tam dung 1s, thuc te th� cho n�y l� xu l� c�ng vi?c
                try {
                    Thread.sleep(1000);
                } catch (InterruptedException e) {
                    // TODO Auto-generated catch block
                    e.printStackTrace();
                }
                 
                // t�nh xem c�ng vi?c d� ho�n th�nh bao nhi�u ph?n tram v� dua l�n progressbar
                progressBar.setProgress((i * 100) / 30);
            }
            // d�ng brogressbar.
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
