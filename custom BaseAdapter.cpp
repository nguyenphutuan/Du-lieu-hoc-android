 public class CustomGridview extends BaseAdapter {

    private Activity context;
    private Integer []mang;

    public CustomGridview1(Activity context){
        this.context=context;
    }
    public CustomGridview1(Activity context,Integer []mang){
        this.context=context;
        this.mang=mang;
    }
    public int getCount()
    {
        return mang.length;
    }

    public Object getItem(int arg0)
    {
        return null;
    }
    public long getItemId(int arg0) {
        return 0;
    }
    public View getView(int position, View convertView, ViewGroup arg2) {
        ImageView imgView;
        if(convertView==null){
            imgView=new ImageView(context);

            imgView.setLayoutParams(new GridView.LayoutParams(85, 85));//grid view
            imgView.setLayoutParams(new ListView.LayoutParams(85, 85));//listview
            imgView.setLayoutParams(new Gallery.LayoutParams(150, 120));//Gallery
            
            imgView.setScaleType(ImageView.ScaleType.CENTER_CROP);
            imgView.setPadding(8, 8, 8, 8);//anh?so voi vien` anh?.
        }else{
            imgView=(ImageView) convertView;
        }

        imgView.setImageResource(mang[position]);
        return imgView;
    }

