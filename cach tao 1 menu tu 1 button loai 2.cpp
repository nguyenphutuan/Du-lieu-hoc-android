 btn=(Button) findViewById(R.id.button);
       registerForContextMenu(btn);


@Override
    public void onCreateContextMenu(ContextMenu menu, View v, ContextMenu.ContextMenuInfo menuInfo) {
        // TODO Auto-generated method stub
        super.onCreateContextMenu(menu, v, menuInfo);
        //g?n context menu vào
        getMenuInflater().inflate(R.menu.menu_main, menu);
        menu.setHeaderTitle("Call- Sms");
        menu.getItem(0).setTitle("Call to "+banbe.getPhone());
        menu.getItem(1).setTitle("Send sms to "+banbe.getPhone());
        menu.getItem(2).setTitle("remove to "+banbe.getName());
    }
    @Override
    public boolean onContextItemSelected(MenuItem item) {
        //ki?m tra xem Menu Item nào ???c ch?n
        switch(item.getItemId())
        {
            case R.id.action_settings:
                break;
            case R.id.action_settings2:
                break;
            case R.id.action_settings3:
                arrayList.remove(banbe);
                adapter.notifyDataSetChanged();
                break;
        }
        return super.onContextItemSelected(item);
    }


