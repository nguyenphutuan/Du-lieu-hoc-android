      runOnUiThread(new Runnable() {
            @Override
            public void run() {
                new docjson().execute("http://extjs.org.cn/extjs/examples/grid/survey.html");
            }
        });


    }
    class docjson extends AsyncTask<String,Integer,String> {
        @Override
        protected String doInBackground(String... params) {
            return docNoiDung_Tu_URL(params[0]);
        }

        @Override
        protected void onPostExecute(String s) {
            // Toast.makeText(MainActivity.this,s,Toast.LENGTH_SHORT).show();
            ArrayList<String> arrayList = new ArrayList<String>();//do? json vao mang.loai1
            try {
                JSONArray mang = new JSONArray(s);
                for (int i = 0; i < mang.length(); i++) {
                    JSONObject khoahoc = mang.getJSONObject(i);
                    arrayList.add(khoahoc.getString("surveyDate"));
                }
                ArrayAdapter adapter = new ArrayAdapter(MainActivity.this, android.R.layout.simple_list_item_1, arrayList);
                lv.setAdapter(adapter);
            } catch (JSONException e) {
                e.printStackTrace();
            }
//			try {doc json do len textview loai 2 kho hon
//                JSONArray mang = new JSONArray(s);
//                JSONObject khoahoc = mang.getJSONObject(0);
//                String chuoi = khoahoc.getString("appeId");
//                txtv.setText(chuoi);
//
//            } catch (JSONException e1) {
//                e1.printStackTrace();
//            }

/* TextView txtv=(TextView)findViewById(R.id.textView);doc json do len textview loai 1 don gian.
            try {
                JSONObject root=new JSONObject(s);
                txtv.setText(root.getString("monhoc"));
            } catch (JSONException e) {
                e.printStackTrace();
            }

        }*/
    }

    private static String docNoiDung_Tu_URL(String theUrl)
    {
        StringBuilder content = new StringBuilder();
        try
        {
            URL url = new URL(theUrl);
            URLConnection urlConnection = url.openConnection();
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(urlConnection.getInputStream()));
            String line;
            while ((line = bufferedReader.readLine()) != null) {
                content.append(line + "\n");
            }
            bufferedReader.close();
        }
        catch(Exception e)
        {
            e.printStackTrace();
        }
        return content.toString();
    }
    
    
				JSONObject root=new JSONObject(s);//hoc json .mang?tring 1 doi tuong
                JSONArray mang=root.getJSONArray("danhsach");
                ArrayList mangkhoahoc=new ArrayList();

                for (int i=0;i<mang.length();i++){
                    JSONObject son=mang.getJSONObject(i);
                   mangkhoahoc.add(son.getString("khoahoc"));
                }
                ArrayAdapter adapter=new ArrayAdapter(MainActivity.this,android.R.layout.simple_list_item_1,mangkhoahoc);
                lv.setAdapter(adapter);

