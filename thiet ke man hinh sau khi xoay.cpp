thiet ke giao dien khi xoay man hinh.
 �e tao layout ri�ng cho Activity tr�n theo m�n h�nh ngang, ta tao thu muc layout-land trong 
 thu muc res, sau d� tao file main.xml (tr�ng t�n voi file layout trong thu muc res/layout), voi noi dung:
 	tu minh thiet ke ung ung sau khi xoay se nhu the nao.
 	vi khi xoay ma them cac view khac nua thi gia tri se bi bien mat ko lien quan toi nhau len ta phai
 	co them  2 ham:
 		
neu ban chi? xoay man hinh binh thuong,thi cac id cua ben layout-land cho cac view co cung dia chi voi ben kia 
thi ko can toi 2 ham ben duoi.
	  @Override
    public void onSaveInstanceState(Bundle outState) {//day la man hinh luc dung'
        //---save whatever you need to persist---
        outState.putString("ID", edt.getText.toString);//gt edt chuyen sang 
        super.onSaveInstanceState(outState);
    }

    @Override
    public void onRestoreInstanceState(Bundle savedInstanceState) {//day la man hinh sau khi xoay
        super.onRestoreInstanceState(savedInstanceState);
        //---retrieve the information persisted earlier---
        String ID = savedInstanceState.getString("ID");//gt sau khi xoay nhan vao
        edt.setText(ID);
    } 

 setRequestedOrientation(ActivityInfo.SCREEN_ORIENTATION_LANDSCAPE); app luon nam ngang
  setRequestedOrientation(ActivityInfo.SCREEN_ORIENTATION_FULL_USER); app khong xoay
  
  
