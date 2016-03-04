Loi ích cua cache files là gì? Ðe tang toc do xu lý cua ung dung khi ban
 thuong xuyên truy cap internet thì ban nên luu cache.

 txtv=(TextView)findViewById(R.id.textView);
        Button btn=(Button)findViewById(R.id.button);
        editdata=(EditText)findViewById(R.id.editText);
        Button btn2=(Button)findViewById(R.id.button2);
        loadAllCache();
        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                createCache();
            }
        });
        btn2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
               readCache();
            }
        });

    }
    public void loadAllCache()
    {
        File pathCacheDir = getCacheDir();
        File []listCache= pathCacheDir.listFiles();
        for(File f :listCache)
        {
            //process f here
            f.delete();
        }
    }
    /**
     * ??c cache file
     * getCacheDir() tr? v? ?úng th? m?c cache
     */
    public void readCache() {
        try {
            File pathCacheDir = getCacheDir();
            String strCacheFileName = "myCacheFile.cache";
            File newCacheFile = new
                    File(pathCacheDir, strCacheFileName);
            Scanner sc=new Scanner(newCacheFile);
            String data="";
            while(sc.hasNext())
            {
                data+=sc.nextLine()+"\n";
            }
            txtv.setText(data);
            sc.close();
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }
    }
    /**
     * L?u cache file
     */
    public void createCache()
    {
        try {
            File pathCacheDir = getCacheDir();
            String strCacheFileName = "myCacheFile.cache";
            String strFileContents = editdata.getText()+"";
            File newCacheFile = new
                    File(pathCacheDir, strCacheFileName);
            newCacheFile.createNewFile();
            FileOutputStream foCache =
                    new FileOutputStream(
                            newCacheFile.getAbsolutePath());
            foCache.write(strFileContents.getBytes());
            foCache.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

