    TextView txtv;
    Spinner sp;
    String[]mang={"hang dien tu",
            "hang dien thoai",
            "hang manh"};
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        String[]mang={"hang dien tu",
                        "hang dien thoai",
                        "hang manh"};
        txtv=(TextView)findViewById(R.id.textView);
        sp=(Spinner)findViewById(R.id.spinner);

        ArrayAdapter<String> adapter=new ArrayAdapter<String>(this,android.R.layout.simple_spinner_item,mang);
        adapter.setDropDownViewResource(android.R.layout.simple_list_item_single_choice);//hoac thay bang :simple_spinner_dropdown_item

        sp.setAdapter(adapter);
        sp.setOnItemSelectedListener(new MyProcessEvent());//o doan nay ta co the su dung ngay bang ham (1)
    }
    ///////////////////////////////
    private class MyProcessEvent implements
            AdapterView.OnItemSelectedListener
    {
        //Khi có ch?n l?a thì vào hàm này
        public void onItemSelected(AdapterView<?> arg0,
                                   View arg1,
                                   int arg2,
                                   long arg3) {
            //arg2 là ph?n t? ???c ch?n trong data source
            String chuoi[]={"mac dinh","anh yeu em","anh khong yeu em","anh sap yeu em"};
            txtv.setText(chuoi[arg2]);
        }
        //N?u không ch?n gì c?
        public void onNothingSelected(AdapterView<?> arg0) {
            txtv.setText("");
        }
        //////////////////////////////////
    1:
    	 spinDm.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() {

            @Override
            public void onItemSelected(AdapterView<?> arg0, View arg1,
                                       int arg2, long arg3) {
                //m?i l?n ch?n danh m?c trong Spinner thì c?p nh?p ListView
                loadListProductByCatalog(arraySpinner.get(arg2));
            }

            @Override
            public void onNothingSelected(AdapterView<?> arg0) {
                // TODO Auto-generated method stub

            }
