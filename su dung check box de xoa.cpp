 public void xulyXoa()
 {
 //ta n�n di ngu?c danh s�ch, ki?m tra ph?n t? n�o checked
 //th� x�a d�ng v? tr� d� ra kh?i arrEmployee
 for(int i=lvNhanvien.getChildCount()-1;i>=0;i--)
 {
 //l?y ra d�ng th? i trong ListView
 //D�ng th? i s? c� 3 ph?n t?: ImageView, TextView, Checkbox
 View v=lvNhanvien.getChildAt(i);
 //Ta ch? l?y CheckBox ra ki?m tra
 CheckBox chk=(CheckBox) v.findViewById(R.id.chkitem);
 //N?u n� Checked th� x�a ra kh?i arrEmployee
 if(chk.isChecked())
 {
 //x�a ph?n t? th? i ra kh?i danh s�ch
 arrEmployee.remove(i);
 }
 }
 //Sau khi x�a xong th� g?i update giao di?n
 adapter.notifyDataSetChanged();
