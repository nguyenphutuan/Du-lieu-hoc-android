txt1.setOnFocusChangeListener(new View.OnFocusChangeListener() {//ham su kien cua edittex
            @Override
            public void onFocusChange(View v, boolean hasFocus) {
                
            }
        });
-------------------------------------
 btn.setOnClickListener(new View.OnClickListener() {//ham su kien cua but ton
            @Override
            public void onClick(View v) {
                
            }
 btn.setOnLongClickListener(new View.OnLongClickListener() {
            @Override
            public boolean onLongClick(View v) {
                Toast.makeText(getBaseContext(),"anh tuan",Toast.LENGTH_SHORT).show();
                return false;
            }
        });
-------------------------------------
lv.setOnItemClickListener(new AdapterView.OnItemClickListener() {//ham su kien cua listview
            @Override
            public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
                Toast.makeText(getBaseContext(),arraylist.get(position),Toast.LENGTH_LONG).show();
            }
        });
 lv.setOnItemLongClickListener(new AdapterView.OnItemLongClickListener() {
           @Override
           public boolean onItemLongClick(AdapterView<?> parent, View view, int position, long id) {
               return false;
           }
       });
----------------------------------------
  sp.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() {//ham su kien cua spinner

            @Override
            public void onItemSelected(AdapterView<?> arg0, View arg1,
                                       int arg2, long arg3) {
                Toast.makeText(MainActivity.this,mang[arg2]+"",Toast.LENGTH_SHORT).show();
            }

            @Override
            public void onNothingSelected(AdapterView<?> arg0) {


            }
        });
        
 sb.setOnSeekBarChangeListener(new SeekBar.OnSeekBarChangeListener() {//ham su kien cua seekbar
            @Override
            public void onProgressChanged(SeekBar seekBar, int progress, boolean fromUser) {
                song.seekTo (progress);
            }

            @Override
            public void onStartTrackingTouch(SeekBar seekBar) {

            }

            @Override
            public void onStopTrackingTouch(SeekBar seekBar) {

            }
        });






