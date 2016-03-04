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
                    FileOutputStream fOut = openFileOutput("textfile.txt", MODE_PRIVATE);//textfile.txt ten cua file. ( MODE_PRIVATE khi xuat se ra cai chuoi gan nhat.MODE_APPEND se xuat ra tat ca cac chuoi
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
                    FileInputStream fIn = openFileInput("textfile.txt");
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
    //khai bao them 2 cai nay trong manifest
<uses-permission android:name="android.permission.WRITE_EXTERNAL_STORAGE" />
<uses-permission android:name="android.permission.READ_EXTERNAL_STORAGE" />
//hoac ta co the dung 2 ham duoi de viet va doc file thay cho cai ben tren .
  public void readData()
    {
        try {
            FileInputStream in= openFileInput("myfile.txt");
            BufferedReader reader=new
                    BufferedReader(new InputStreamReader(in));
            String data="";
            StringBuilder builder=new StringBuilder();
            while((data=reader.readLine())!=null)
            {
                builder.append(data);
                builder.append("\n");
            }
            in.close();
            txtv.setText(builder.toString());
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
    /**
     * Hàm ghi t?p tin trong Android
     * dùng openFileOutput ?? ghi
     * openFileOutput t?o ra FileOutputStream
     */
    public void writeData()
    {

        try {
            FileOutputStream out=
                    openFileOutput("myfile.txt",0);
            OutputStreamWriter writer=
                    new OutputStreamWriter(out);
            writer.write(editdata.getText().toString());
            writer.close();
            editdata.setText("");
            Toast.makeText(MainActivity.this," Save ok",Toast.LENGTH_SHORT).show();

        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

