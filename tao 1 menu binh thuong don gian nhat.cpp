 @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        getMenuInflater().inflate(R.menu.menu_main, menu);
        return true;
    }
    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        switch(item.getItemId())
        {
            case R.id.menu1:
                break;
            case R.id.tt1:
                Toast.makeText(this,"ban vua an tt1",Toast.LENGTH_SHORT).show();
                break;
            case R.id.tt2:
                Toast.makeText(this,"ban vua an tt2",Toast.LENGTH_SHORT).show();
                break;


        }
        return super.onOptionsItemSelected(item);
    }
}
vao trong res tao. menu tao.menu_main.ben trong :
	<?xml version="1.0" encoding="utf-8"?>
<menu xmlns:android="http://schemas.android.com/apk/res/android">
    <item
        android:id="@+id/menu1"
        android:title="mune" >
    </item>
    <item
        android:id="@+id/munu2"
        android:title="mune2">
        <menu>
            <item
                android:id="@+id/tt1"
                android:title="tt1"/>
            <item
                android:id="@+id/tt2"
                android:title="tt2"/>

        </menu>
    </item>


</menu>
