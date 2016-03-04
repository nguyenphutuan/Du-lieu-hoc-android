doi voi autocompletetextview:
 av.addTextChangedListener(this);//sau khi them this vao thi ta phat sinh them 3 ham(cai nay ko can thiet cho lam)
        av.setAdapter(new ArrayAdapter<String>(this, android.R.layout.simple_list_item_1, arr));
/////////////////////////////////////////////


doi voi MultiAutoCompleteTextView:
	mv.addTextChangedListener(this);//
        mv.setAdapter(
                new ArrayAdapter<String>(this, android.R.layout.simple_list_item_1, arr));
        //doi voi MultiAutoCompleteTextView bat buoc phai gui dòng lenh này
        mv.setTokenizer(new MultiAutoCompleteTextView.CommaTokenizer());
