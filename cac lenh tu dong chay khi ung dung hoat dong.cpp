onCreate() � duoc goi khi Activity duoc khoi tao(chinh la cai ham day tien).

onStart() � duoc goi khi Activity bat dau hien ra (ch�ng ta bat dau nh�n thay giao dien)-----------
public void onStart()
    {
        super.onStart();
       
    }

onResume() � bat dau nhan c�c tuong t�c voi nguoi d�ng------------
 public void onResume()
    {
        super.onResume();
       
    }
onPause() � duoc goi khi activity bi dung lai di chuyen qua activity kh�c-------------
public void onPause()
    {
        super.onPause();
        
    }
onStop() � duoc goi khi activity bien mat khoi m�n h�nh-------------
public void onStop()
    {
        super.onStop();
       
    }
onDestroy() � duoc goi khi activity bi huy (huy chu dong hoac bi huy boi he ----------
thong trong truong hop he dieu h�nh x�c nhan thieu RAM)
public void onDestroy()
    {
        super.onDestroy();
      
    }
onRestart() � du?c g?i khi activity du?c kh?i d?ng l?i sau khi d� b? d?ng-------------
 public void onRestart()
    {
        super.onRestart();
        
    }
