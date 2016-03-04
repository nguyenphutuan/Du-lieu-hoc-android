Handler hangido=new Handler(); //da tien trinh

 Thread thCon=new Thread(new Runnable() {//cai nay cho no vao trong button

            @Override
            public void run() {
                for(int i=0;i<so;i++)//so=Integer.param(edt.gettext.toString)
                {
                    SystemClock.sleep(150);//milixencen
                    hangido.post(new Runnable() {
                        @Override
                        public void run() {
                           
                        }
                    });
                }
                hangido.post(new Runnable() {//co them cai nay de lam 1 cai gi do sau khi ket thec ham ben tren

                    @Override
                    public void run() {
                       
                    }
                });
            }
        });
        thCon.start();
