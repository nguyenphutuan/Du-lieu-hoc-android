   CountDownTimer countDownTimer=new CountDownTimer(10000,1000) {//1000=1s;
            @Override
            public void onTick(long millisUntilFinished) {
                String a=txtv.getText().toString();
                a=a+"*";
                txtv.setText(a);
            }

            @Override
            public void onFinish() {//sau khi ket thuc ta toat ra 1 cau thong bao.

            }
        };

