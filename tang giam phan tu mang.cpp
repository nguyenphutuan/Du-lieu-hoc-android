 iv=(ImageView)findViewById(R.id.imageView);
        selIdx = 0;
        iv.setImageResource(mang[selIdx]);
        btnback.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                if (selIdx > 0){
                    selIdx --;
                }
                iv.setImageResource(mang[selIdx]);
                Toast.makeText(MainActivity.this, ""+selIdx,Toast.LENGTH_SHORT).show();



            }
        });

        btnnext.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                if (selIdx < mang.length-1){
                    selIdx ++;
                }
                iv.setImageResource(mang[selIdx]);
                Toast.makeText(MainActivity.this,selIdx+"",Toast.LENGTH_SHORT).show();


            }
        });
    }
