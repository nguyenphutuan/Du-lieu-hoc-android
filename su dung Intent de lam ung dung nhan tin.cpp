o ben ham chinh khi ta button 1 su kien nhan tin thi goi ham doMakeSms()
de? chuyen? sang ham main thu 2(ham main SMS) va dong thoi dong goi 1 doi tuong class.vi du ben duoi la
1 class Banbe.de? tao 1 listView ve ban be.

public void doMakeSms()
    {
        Intent i=new Intent(this, Main2Activity.class);
        Bundle b=new Bundle();
        b.putSerializable("CONTACT", banbe);
        i.putExtra("DATA", b);
        startActivity(i);
    }
//o ben ham MSM 
//Lay thông tin tu Intent
        Intent i =getIntent();
        Bundle b=i.getBundleExtra("DATA");
        final Banbe c=(Banbe) b.getSerializable("CONTACT");
        
	txtvsms.setText("Send to : "+c.getPhone());//hien SDT cua thang muon goi.
  btnSendSMS.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {
                sendSms(c);
            }
        });
        ///////////////////////
	 public void sendSms(Banbe c)
    {
        //lay mac dinh SmsManager
        final SmsManager sms = SmsManager.getDefault();
        Intent msgSent = new Intent("ACTION_MSG_SENT");
        //Khai báo pendingintent ?? kiem tra ket qua
        final PendingIntent pendingMsgSent = PendingIntent.getBroadcast(this, 0, msgSent, 0);
        registerReceiver(new BroadcastReceiver() {
            public void onReceive(Context context, Intent intent) {
                int result = getResultCode();
                String msg = "Send OK";
                if (result != Activity.RESULT_OK) {
                    msg = "Send failed";
                }
                Toast.makeText(Main2Activity.this, msg, Toast.LENGTH_LONG).show();
            }
        }, new IntentFilter("ACTION_MSG_SENT"));
        //Goi hàm gui tin nhan di
        sms.sendTextMessage(c.getPhone(), null, editContent.getText()+"",
                pendingMsgSent, null);

        editContent.setText("");
    }

