 public void xulyXoa()
 {
 //ta nên di ngu?c danh sách, ki?m tra ph?n t? nào checked
 //thì xóa dúng v? trí dó ra kh?i arrEmployee
 for(int i=lvNhanvien.getChildCount()-1;i>=0;i--)
 {
 //l?y ra dòng th? i trong ListView
 //Dòng th? i s? có 3 ph?n t?: ImageView, TextView, Checkbox
 View v=lvNhanvien.getChildAt(i);
 //Ta ch? l?y CheckBox ra ki?m tra
 CheckBox chk=(CheckBox) v.findViewById(R.id.chkitem);
 //N?u nó Checked thì xóa ra kh?i arrEmployee
 if(chk.isChecked())
 {
 //xóa ph?n t? th? i ra kh?i danh sách
 arrEmployee.remove(i);
 }
 }
 //Sau khi xóa xong thì g?i update giao di?n
 adapter.notifyDataSetChanged();
