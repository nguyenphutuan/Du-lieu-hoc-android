
//kieu? 1 tao tieu de va cac menu con
 public boolean onCreateOptionsMenu(Menu menu) {
        getMenuInflater().inflate(R.menu.menu_main, menu);
        SubMenu subMenu = menu.addSubMenu("Moi chon OS");//tieu de cho munu
        subMenu.add(0, 1, 0, "Android");
        subMenu.add(0, 2, 0, "Ios");
        subMenu.add(0, 3, 0, "Windown phone");
        subMenu.add(0, 4, 0, "Win8");
        subMenu.add(0, 5, 0, "Linux ubuntu");

        return true;
    }


    public boolean onOptionsItemSelected(MenuItem item) {//dung de su li su kien cua munu
        switch (item.getItemId()) {
            case 1:
                Toast.makeText(Main2Activity.this, "Ban vua lua chon nut Android", Toast.LENGTH_SHORT).show();
                return true;

            case 2:
                Toast.makeText(Main2Activity.this, "Ban vua lua chon nut ios", Toast.LENGTH_SHORT).show();
                return true;

            case 3:
                Toast.makeText(Main2Activity.this, "Ban vua lua chon nut Windown phone", Toast.LENGTH_SHORT).show();
                return true;

            case 4:
                Toast.makeText(Main2Activity.this, "Ban vua lua chon nut Win 8", Toast.LENGTH_SHORT).show();
                return true;

            case 5:
                Toast.makeText(Main2Activity.this, "Ban vua lua chon nut Linux ubuntu", Toast.LENGTH_SHORT).show();
                return true;

            default:
                return super.onOptionsItemSelected(item);
        }
    }
////////////////////////////////////////
kieu? thu 2.chi co cac menu chinh
    public boolean onOptionsItemSelected(MenuItem item) {
        switch (item.getItemId()) {
            case R.id.menu_bookmark:
                Toast.makeText(MainActivity.this, "Ban vua chon nut Selected",
                        Toast.LENGTH_SHORT).show();
                return true;

            case R.id.menu_save:
                Toast.makeText(MainActivity.this, "Ban vua chon nut Save",
                        Toast.LENGTH_SHORT).show();
                return true;

            case R.id.menu_search:
                Toast.makeText(MainActivity.this, "Ban vua chon nut Search",
                        Toast.LENGTH_SHORT).show();
                return true;

            case R.id.menu_share:
                Toast.makeText(MainActivity.this, "Ban vua chon nut Share",
                        Toast.LENGTH_SHORT).show();
                return true;

            case R.id.menu_delete:
                Toast.makeText(MainActivity.this, "Ban vua chon nut Delete",
                        Toast.LENGTH_SHORT).show();
                return true;

            case R.id.menu_preferences:
                Toast.makeText(MainActivity.this, "Ban vua chon nut Preferences",
                        Toast.LENGTH_SHORT).show();
                return true;

            default:
                return super.onOptionsItemSelected(item);
        }
///////////
//cai nay trong ham xml cua menu
 <item android:id="@+id/menu_save"//dia chi?
        android:title="setting2"ten cua menu
        android:orderInCategory="100"
        app:showAsAction="never" />
//--------------------------------------------------
kieu?3 don gian nhat de tao cac menu chinh ko can phai them ite trong menu.xml;
trong ham mac dinh cua menu: 
public boolean onCreateOptionsMenu(Menu menu) 
ta chi can viet them: menu.add(0,1,0,"menu1");->la dc 1 me nu chinh
sau do su li su kien menu cung bang ham menu mac dinh thu 2 do la public boolean onOptionsItemSelected(MenuItem item) 
