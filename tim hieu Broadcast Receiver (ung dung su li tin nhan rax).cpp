 
        IntentFilter filter=new IntentFilter("android.provider.Telephony.SMS_RECEIVED");
        receiver=new BroadcastReceiver() {
            public void onReceive(Context arg0, Intent arg1) {
                Toast.makeText(arg0, "Hello .. có tin nh?n t?i ?ó", Toast.LENGTH_LONG).show();
                TextView lbl=(TextView) findViewById(R.id.textView);
                String sms_extra="pdus";
                Bundle bundle=arg1.getExtras();
                Object []objArr= (Object[]) bundle.get(sms_extra);
                String sms="";
                for(int i=0;i<objArr.length;i++)
                {
                    SmsMessage smsMsg=SmsMessage.createFromPdu((byte[]) objArr[i]);
                    String body=smsMsg.getMessageBody();
                    String address=smsMsg.getDisplayOriginatingAddress();
                    sms+=address+":\n"+body+"\n";
                }
                lbl.setText(sms);
            }
        };
        registerReceiver(receiver, filter);
        //h?y b? ??ng ký khi t?t ?ng d?ng: unregisterReceiver(receiver);
