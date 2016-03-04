package com.example.administrator.myapplication;

import android.app.Activity;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.ImageView;
import android.widget.ListView;

import com.squareup.picasso.Picasso;

/**
 * Created by Administrator on 11/19/2015.
 */

public class CustomGridview1 extends BaseAdapter {

    private Activity context;
    private String[] mang;

    public CustomGridview1(Activity context) {
        this.context = context;
    }

    public CustomGridview1(Activity context, String[] mang) {
        this.context = context;
        this.mang = mang;
    }

    public int getCount() {
        return mang.length;
    }

    public Object getItem(int arg0) {
        return null;
    }

    public long getItemId(int arg0) {
        return 0;
    }

    public View getView(int position, View convertView, ViewGroup arg2) {
        ImageView imgView;
        if (convertView == null) {
            imgView = new ImageView(context);
            imgView.setLayoutParams(new GridView.LayoutParams(85, 85));//grid view
            imgView.setLayoutParams(new ListView.LayoutParams(85, 85));//listview
            imgView.setLayoutParams(new Gallery.LayoutParams(150, 120));//Gallery
            imgView.setScaleType(ImageView.ScaleType.CENTER_CROP);
            imgView.setPadding(8, 8, 8, 8);//anh?so voi vien` anh?.
        } else {
            imgView = (ImageView) convertView;
        }

        Picasso.with(context).load(mang[position]).into(imgView);
        return imgView;
    }
}

 // compile 'com.squareup.picasso:picasso:2.5.2'//cho cai nay vao build.gradle

