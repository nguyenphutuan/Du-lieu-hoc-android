//cacnh tao 1 munu tu 1 button
 btn=(Button) findViewById(R.id.button);
       registerForContextMenu(btn);

    }
    @Override
    public void onCreateContextMenu(ContextMenu menu, View v,ContextMenu.ContextMenuInfo menuInfo) {

        super.onCreateContextMenu(menu, v, menuInfo);
        getMenuInflater().inflate(R.menu.menu_main, menu);

    }
    ////////////////////
    @Override
    public boolean onContextItemSelected(MenuItem item) {
        switch(item.getItemId())
        {
            case R.id.action_settings:
                txtv=(TextView)findViewById(R.id.textView);
                txtv.setText("anh tuan");
               // btn.setTextColor(getResources().getColor(R.color.clrred));
                break;
            case R.id.action_settings2:
                btn.setTextColor(getResources().getColor(R.color.clrgreen));
                break;
            case R.id.action_settings3:
                btn.setTextColor(getResources().getColor(R.color.clrblue));
                break;
        }
        return super.onContextItemSelected(item);
    }
