//cach ma 1 inten vao web;
// chu y la phai khai bao  <uses-permission android:name="android.permission.INTERNET"> trong manifest
Intent i = new Intent("android.intent.action.VIEW");
i.setData(Uri.parse("http://www.amazon.com"));
startActivity(i);
//cach2:
Intent i = new Intent(android.content.Intent.ACTION_VIEW,
Uri.parse("http://www.amazon.com"));
startActivity(i);

--------------------------------------------


///mo Intent goi dt;
Intent i = new Intent(android.content.Intent.ACTION_DIAL, Uri.parse("tel:+651234567"));///hoac dung ACTION_CALL thay cho ACTION_DIAL
startActivity(i);
---------------------------------------------
////mo Intent ban do
Intent i = new Intent(android.content.Intent.ACTION_VIEW, Uri.parse("geo:37.827500,-122.481670"));
startActivity(i);
---------------------------------------------
Intent i = new
Intent(android.content.Intent.ACTION_PICK);
i.setType(ContactsContract.Contacts.CONTENT_TYPE);
Hàm setType() chi ra kieu du lieu (MIME data type) cua thông tin tra ve cho activity hien tai. Kieu du lieu cua ContactsContract.Contacts.CONTENT_TYPE là xâu “vnd.android.cursor.dir/contact”.

Intent i = new Intent(android.content.Intent.ACTION_PICK);//lay thong tin danh ba dt
        i.setType("vnd.android.cursor.dir/contact");
        startActivity(i);


