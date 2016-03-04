 private  class MyClass extends AsyncTask<String,Long,Void>{//moi lan thay doi <String,Long,Void> la ta lai co ham doInbackground khac nhau
 		 //khai báo Activity ?? l?u tr? ??a ch? c?a MainActivity
        Activity contextCha;
        //constructor này ???c truy?n vào là MainActivity
        public MyAsyncTask(Activity ctx)////////khi xu dung thi ta lam nhu sau.MyClass mcl=new MyClass(this); mcl.execute();
        {
            contextCha=ctx;
        }
 	
 	
		protected void onPreExcute(){//ham nay chay dau tien ta co toat len 1 dong chu la bat dau
            super.onPreExecute();
        }
		
        @Override
        protected Void doInBackground(String... params) {//ham nay la ham chinh bat buoc phai co de xu li cong viec(ko dc xu li giao dien o day)
        	for(int i=0;i<100;i++)
        	{
        		 publishProgress(i);//dong nay de goi ham onProgressUpdate().moi lan i tang len 1 la goi ham do 1 lan
			}
        	
        
            return null;
        }
        protected void  onProgressUpdate(Long...value){//sau khi chay song doInbackground thi den pham nay de su li giao dien chay. % tren ProcessBar

        }
        protected void onPostExecute(final Void unused){//su li sau khi chay song

        }
    }
    /////////////
    private class MyAsytask extends AsyncTask<Person,Long,ArrayList<Person>>{
        protected void onPreExcute(){
            super.onPreExecute();
        }

        @Override
        protected ArrayList<Person> doInBackground(Person... params) {//
            return null;
        }
        protected void onProgressUpdate(Long...values){
            super.onProgressUpdate(values);
        }
        protected void onPostExecute(ArrayList<Person> result){
            super.onPostExecute(result);
        }
    }
