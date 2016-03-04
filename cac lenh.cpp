DecimalFormat dcf=new DecimalFormat(“#.0?);//dung de lay sap xi? 1 so float
editBMI.setText(dcf.format(BMI));


arrayList.add(chuoi);//them mot phan tu vao danh sach va hien len listView
arrayAdapter.notifyDataSetChanged();/reset lai danh sach
sau khi xoa trang cac dittext thi ta su dung  editMa.requestFocus();de dua con tro ve

 android:textAllCaps="false"//dung de viet text cho button(co the viet ch? to nh? du?c)
  android:textColor="#ff3300"//mau cua chu~;
android:visibility="invisible"//trong suot mot view
   android:hint="Enter Text"//hien textview.
  android:textSize="40dp"//to nho cua chu~
  android:gravity="center"//lenh de can bang chu trong texview
  android:pabding="30dp"//co chu~ so voi vien`
  android:maxLength="2"//so ki tu trong 1 dong nhap edittex hoac in ra nhu texview
  android:pabding="30px"//diem cham tren man hinh
  android:lines="1"//co dinh 1 dong edittext nhap vao se ko bi dan~ ra nua
  android:numeric="integer"//deo hieu? luon@@
  android:textStyle="bold"//to hay nho cua vien`chu~
  android:inputType="numberDecimal"//chi dc nhap so trong edittext
  android:inputType="textPersonName"//dc nhap ca so lan chu
  android:inputType="numberPassword"//lenh nay de viet mat khau cho tai khoan.
  android:layout_marginTop="10dp"//edit tren so voi edit duoi
 android:layout_toRightOf="@+id/textview"(de cho image nam ben canh phai? textview)
  android:rotation="180" dao nguoc view
  android:completionThreshold= "1"//lenh dung cho AutocompleteTextView
  	android:layout_centerInParent="true"//can chinh deu giua cac ben
android:background="@null"// lam cho view trong suot nhung van hien thi dc text
  android:numColumns="3" //lenh nay dung cho gridview 
   android:theme="@android:style/Theme.Dialog" >lenh nay tao theme dilog trong manifesf khi lam timepicker
   ----------------
   btn.setEnabled(false);cho phep tuong tac hay ko voi button
   
/////////
String string1 = "Sinh Vien CNTT";
String string2 = "sinh vien cntt";
if (string1.equals(string2))
{
  // Dòng này s? không du?c in ra vì hai chu?i không b?ng nhau
  System.out.println("Hai chuoi bang nhau.")
}
////////// ben duoi la link hoc android
http://android.appwhoosh.com/content/cac_activity,_fragment_va_intent/intent_va_viec_tuong_tac_giua_cac_activity.html
//2 lenh nay khai bao trong Manifest. de lam ung ung goi dien nhan tin.khai bao ngay ben duoi package="com.example.administrator.mygoidien" >
<uses-permission android:name="android.permission.CALL_PHONE" />
<uses-permission android:name="android.permission.SEND_SMS" />
<uses-permission android:name="android.permission.Internet" />//vao mang
---------------------------------------------
//giup co dinh cac button hay edtittext khi bi xoay mh
android:layout_alignParentLeft="true"//an theo canh.trai cua man hinh(ta co the thay doi tru bang 30dp)
android:layout_alignParentTop="true" //an theo canh tren cua man hinh
android:layout_alignParentRight="true"//an theo canh phai cua man hinh
android:layout_alignParentBottom="true"//an theo canh duoi man hinh
//////////////////
<uses-permission android:name="android.permission.RECEIVE_SMS"/>//xin phep de nhan tin nhan
 <uses-permission android:name="android.permission.WRITE_SMS"/>//xin phep de viet tin nhan
 <uses-permission android:name="android.permission.READ_EXTERNAL_STORAGE"/>//xin phep de doc file trong thiet bi
 <uses-permission android:name="android.permission.WRITE_EXTERNAL_STORAGE"/>//xin phep dc viet va luu trong thiet bi

<LinearLayout xmlns:android="http://schemas.android.com/apk/res/android"
    android:layout_width="match_parent"
    android:orientation="horizontal"
    android:layout_height="match_parent"
    android:baselineAligned="false">//day la lenh de co the chia muc do kich co~.(co 2 phan tu fragment)
    <fragment
        android:id = "@+id/article_fragment"
        android:layout_weight = "2"//cai nay de nhan duoc 2 phan
        android:layout_width = "match_parent"
        android:layout_height = "match_parent"  />
   <fragment
       android:id = "@+id/headlines_fragment"
       android:layout_weight = "1"//cai nay de nhan duoc 1 phan
       android:layout_width = "match_parent"
       android:layout_height = "match_parent" />
   
</LinearLayout>
/// cach dung su kien button don gian hon.
 	android:onClick="zoom"//them dong lenh nay
ben main thi chi can nhu vay thoi.
  public void zoom(View view){
    
   }


