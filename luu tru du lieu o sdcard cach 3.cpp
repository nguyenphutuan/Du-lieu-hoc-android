public class MainActivity extends Activity {
    EditText edt;
    static final int READ_BLOCK_SIZE = 100;
    Button btn,btn2;
     TextView txtv;
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        edt = (EditText) findViewById(R.id.txtText1);
        btn=(Button)findViewById(R.id.btnSave);
        btn2=(Button)findViewById(R.id.btnLoad);
        txtv=(TextView)findViewById(R.id.textView);

        btn.setOnClickListener(new View.OnClickListener() {////////////luu du lieu tu edt
            @Override
            public void onClick(View v) {
                String str = edt.getText().toString();
                try {
                		File sdCard = Environment.getExternalStorageDirectory();
						File directory = new File(sdCard.getAbsolutePath() + "/MyFiles");
						directory.mkdirs();
						File file = new File(directory, "textfile.txt");
						FileOutputStream fOut = new FileOutputStream(file);
               		////////
                    	OutputStreamWriter osw = new OutputStreamWriter(fOut);
                    	osw.write(str);
                    	osw.flush();
                   		osw.close();
                   	 	Toast.makeText(getBaseContext(),"File saved successfully!", Toast.LENGTH_SHORT).show();
                    	edt.setText("");
                }
                catch (IOException ioe){
                    ioe.printStackTrace();
                }
            }
        });
        btn2.setOnClickListener(new View.OnClickListener() {//xuat du lieu duoc luu
            @Override
            public void onClick(View v) {
                try{
                	File sdCard = Environment.getExternalStorageDirectory();
					File directory = new File (sdCard.getAbsolutePath() + "/MyFiles");
					File file = new File(directory, "textfile.txt");
					FileInputStream fIn = new FileInputStream(file);
				
                   /////////
                    InputStreamReader isr = new InputStreamReader(fIn);
                    char[] inputBuffer = new char[READ_BLOCK_SIZE];
                    String s = "";
                    int charRead;
                    while ((charRead = isr.read(inputBuffer))>0) {
                        String readString = String.copyValueOf(inputBuffer, 0, charRead);
                        s += readString;
                        inputBuffer = new char[READ_BLOCK_SIZE];
                    }
                    txtv.setText(s);
                    Toast.makeText(getBaseContext(),"File loaded successfully!", Toast.LENGTH_SHORT).show();
        }
        catch (IOException ioe) {
            ioe.printStackTrace();}
            }
        });

    }

