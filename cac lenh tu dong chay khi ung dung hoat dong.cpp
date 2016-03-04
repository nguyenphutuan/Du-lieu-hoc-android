onCreate() – duoc goi khi Activity duoc khoi tao(chinh la cai ham day tien).

onStart() – duoc goi khi Activity bat dau hien ra (chúng ta bat dau nhìn thay giao dien)-----------
public void onStart()
    {
        super.onStart();
       
    }

onResume() – bat dau nhan các tuong tác voi nguoi dùng------------
 public void onResume()
    {
        super.onResume();
       
    }
onPause() – duoc goi khi activity bi dung lai di chuyen qua activity khác-------------
public void onPause()
    {
        super.onPause();
        
    }
onStop() – duoc goi khi activity bien mat khoi màn hình-------------
public void onStop()
    {
        super.onStop();
       
    }
onDestroy() – duoc goi khi activity bi huy (huy chu dong hoac bi huy boi he ----------
thong trong truong hop he dieu hành xác nhan thieu RAM)
public void onDestroy()
    {
        super.onDestroy();
      
    }
onRestart() – du?c g?i khi activity du?c kh?i d?ng l?i sau khi dã b? d?ng-------------
 public void onRestart()
    {
        super.onRestart();
        
    }
