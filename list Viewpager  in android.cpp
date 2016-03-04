buoc 1: tao main activity,trong ham actyvity_main.xml tao.
	<android.support.v4.view.ViewPager
        android:id="@+id/view_pager"
        android:layout_width="fill_parent"
        android:layout_height="fill_parent"
        android:layout_alignParentRight="true"
        android:layout_alignParentEnd="true">
    </android.support.v4.view.ViewPager>
trong ham main.java ta anh xa no.:
  ViewPager viewPager=(ViewPager)findViewById(R.id.view_pager);
        SwipeAdapter adapter=new SwipeAdapter(getSupportFragmentManager());//tao class.SwipeAdapter
        viewPager.setAdapter(adapter);//song viec voi ham main chinh.
        
buoc2: vao java tao new fragment(blank) va sua no nhu sau:
	
	public class Fragment1 extends android.support.v4.app.Fragment{
    TextView textView,tx4;
    ImageView iv;
    int a;
    Bundle bd;

    public Fragment1() {
        // Required empty public constructor
    }


    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container,
                             Bundle savedInstanceState) {
        // Inflate the layout for this fragment
        View v=inflater.inflate(R.layout.fragment_fragment1,container,false);
        textView =(TextView)v.findViewById(R.id.textView);
        tx4 =(TextView)v.findViewById(R.id.textView4);//day la cac view cua ben fragmen.xml.
        iv=(ImageView)v.findViewById(R.id.imageView);//day la cac view cua ben fragmen.xml.
        bd=getArguments();

        a=bd.getInt("data2");
        String chuoi=bd.getInt("data2")+"";

        textView.setText("day la " + chuoi);

        iv.setImageResource(bd.getInt("data"));
        Picasso.with(getContext()).load(bd.getString("data")).into(iv);

        iv.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (a == 1) {
                    Toast.makeText(getContext(),"day la 1",Toast.LENGTH_SHORT).show();
                    tx4.setText(""+a);
                }
                if (a == 2) {
                    Toast.makeText(getContext(),"day la 2",Toast.LENGTH_SHORT).show();
                    tx4.setText("" + a);
                }
                if (a == 3) {
                    Toast.makeText(getContext(),"day la 3",Toast.LENGTH_SHORT).show();
                    tx4.setText(""+a);
                }
            }
        });

        return v;
    }
}
buoc3.:
	tao 1 java class co ten nhu la: SwipeAdapter va sua doi noi dung cho no:
		public class SwipeAdapter extends FragmentStatePagerAdapter {
    String []chuoi=new String[]{//vi du tao 1 mang? anh? co dang string va put sang ben frangment.
            "http://anhdep.pro/wp-content/uploads/2015/04/anh-dep-6.jpg","http://file.vforum.vn/hinh/2013/10/hinh-anh-dep-ve-tinh-yeu-6.jpg",
            "http://hinhanhdep.pro/content/uploads/2015/01/hinh-anh-hoa-bo-cong-anh-dep-670-13.jpg","http://tapchianhdep.com/wp-content/uploads/2015/04/nhung-hinh-anh-dep-ve-thien-nhien-khi-mua-thu-toi-4.jpg",
            "http://anhdep.pro/wp-content/uploads/2015/08/tai-hinh-nen-91.jpg"
    };

    public SwipeAdapter(FragmentManager fm) {
        super(fm);
    }

    @Override
    public Fragment getItem(int position) {
        Fragment fragment=new Fragment1();
        Bundle bd =new Bundle();
        bd.putString("data",chuoi[position]);
        bd.putInt("data2",position+1);
        fragment.setArguments(bd);
        return fragment;
    }

    @Override
    public int getCount() {
        return 5;//gia tri 5 la co 5 cai fragment
    }
}
//   Picasso.with(context).load(item.hinh).into(imageView); load anh tren mang
 // compile 'com.squareup.picasso:picasso:2.5.2'//cho cai nay vao build.gradle

