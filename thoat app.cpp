  public void thoatapp(){
        AlertDialog.Builder b=new AlertDialog.Builder(this);

        b.setTitle("Mymaytinh");
        b.setMessage("Are you sure you want to exit");
        b.setPositiveButton("yes", new DialogInterface.OnClickListener() {
            @Override
            public void onClick(DialogInterface dialog, int which) {
                finish();
            }});
        b.setNegativeButton("No", new DialogInterface.OnClickListener() {
            @Override
            public void onClick(DialogInterface dialog, int which)
            {
                dialog.cancel();
            }
        });
        b.create().show();
    }
    //
    final AlertDialog ThongBao = new AlertDialog.Builder(MainActivity.this).create();
                    ThongBao.setTitle("Thông Báo");
                    ThongBao.setMessage("Tôi yêu Bách Khoa Computer!");
                    ThongBao.setButton("Xong", new DialogInterface.OnClickListener() {
                        @Override
                        public void onClick(DialogInterface dialog, int which) {
                            ThongBao.dismiss();
                        }
                    });
                ThongBao.show();
