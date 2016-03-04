 //cai nay o class SinhVien
 public boolean isGender() {
 return gender;
 }
 public void setGender(boolean gender) {
 this.gender = gender;
 }
 
 
//cai nay o trong custonlistview

 if(SV.isGender())
 imgitem.setImageResource(R.drawable.girlicon);
 else//n?u là Nam thì l?y hình con trai
 imgitem.setImageResource(R.drawable.boyicon );
 }
 //cai nay o ben main chinh
 boolean gioitinh=false;//Nam =false
 if(genderGroup.getCheckedRadioButtonId()==R.id.radNu)
 gioitinh=true;
 
 SV.setGender(gioitinh);
 arraylist.add(SV)
 
 
