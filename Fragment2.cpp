public class Fragment1 extends Fragment{
    Button btn;
    View v;
    @Nullable
    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {
        v=inflater.inflate(R.layout.activity_fragment1,container,false);
        btn=(Button)v.findViewById(R.id.button);
        final Fragment2 frag2 = (Fragment2) getFragmentManager().findFragmentById(R.id.frag2);
        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (frag2 == null||!frag2.isInLayout()){
                    Toast.makeText(getActivity(),"ko tim thay",Toast.LENGTH_SHORT).show();
                }
                else {
                    Toast.makeText(getActivity(),"tim thay",Toast.LENGTH_SHORT).show();
                    frag2.hienthi("xin chao");

                }

            }
        });
        return v;
    }


