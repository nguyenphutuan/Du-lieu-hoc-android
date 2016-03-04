public class ArrayAdapterView extends ArrayAdapter<SinhVien> {
    Activity context;
    int LayoutID;
    ArrayList<SinhVien> arrayList;
    public ArrayAdapterView(Activity context, int LayoutID, ArrayList<SinhVien> arrayList) {
        super(context, LayoutID,arrayList);
        this.context=context;
        this.LayoutID=LayoutID;
        this.arrayList=arrayList;
    }
    public View getView(int positon,View convertView,ViewGroup parent){
        LayoutInflater inflater=context.getLayoutInflater();
        convertView=inflater.inflate(LayoutID,null);
        //
        ImageView imageView=(ImageView)convertView.findViewById(R.id.imageView);
        TextView textView=(TextView)convertView.findViewById(R.id.textView);
        //
        SinhVien item= arrayList.get(positon);
        imageView.setImageResource(item.getHinh());
        textView.setText(item.getTen());
        //
        return convertView;
    }
 //   Picasso.with(context).load(item.hinh).into(imageView); load anh tren mang
 // compile 'com.squareup.picasso:picasso:2.5.2'//cho cai nay vao build.gradle

cach thu 2 cung don gion: o ben ham main su dung no thi chi thay List<SinhVien> list=new ArrayList<SinhVien>(); la dc roi.ko khac nhau la may. 
public class CustomListView extends ArrayAdapter<SinhVien> {
    Context context;
    int layoutID;
    List<SinhVien> objects;
    public CustomListView(Context context, int resource, List<SinhVien> objects) {
        super(context, resource, objects);
        this.context=context;
        this.layoutID=resource;
        this.objects=objects;
    }

    @Override
    public View getView(int position, View convertView, ViewGroup parent) {
        View v=View.inflate(context, layoutID,null);
        TextView textView=(TextView)v.findViewById(R.id.textView);
        TextView textView2=(TextView)v.findViewById(R.id.textView2);
        SinhVien item=objects.get(position);
        textView.setText(item.getTen());
        textView2.setText(item.getTuoi());

        return v;
    }
}