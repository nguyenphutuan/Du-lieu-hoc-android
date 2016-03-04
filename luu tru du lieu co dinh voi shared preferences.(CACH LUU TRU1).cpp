http://android.appwhoosh.com/content/luu_tru_du_lieu/luu_tru_du_lieu_co_dinh_voi_shared_preferences.html
ta t?o file “res/xml/myapppreferences.xml” voi noi dung nhu sau:
	<?xml version="1.0" encoding="utf-8"?>
<PreferenceScreen
    xmlns:android="http://schemas.android.com/apk/res/android"
    android:layout_height="match_parent"
    android:layout_width="match_parent">
    <PreferenceCategory--------------------------
        android:title="Category 1">
        <CheckBoxPreference
            android:title="Checkbox" //tieu de 1
            android:defaultValue="false"//mac dinh ko check
            android:summary="True or False" //tieu de ben duoi tieu de 1
            android:key="checkboxPref" />//dia chi cua no
    </PreferenceCategory>------------------------
    <PreferenceCategory
        android:title="Category 2">
        <EditTextPreference
            android:summary="Enter a string"
            android:defaultValue="[Enter a string here]"/>//tieu de khi nhap vao edittext
            android:title="Edit Text"
            android:key="editTextPref"
            />
        <RingtonePreference
            android:summary="Select a ringtone"
            android:title="Ringtones"
            android:key="ringtonePref"
            />
        <PreferenceScreen//sang main.xml khac
            android:title="Second Preference Screen"
            android:summary="Click here to go to the second Preference Screen"
            android:key="secondPrefScreenPref" >
            <EditTextPreference
                android:summary="Enter a string"
                android:title="Edit Text (second Screen)"
                android:key="secondEditTextPref"
                />
            <CheckBoxPreference
                android:title="anh tuan"
                android:summary="teo"
                android:key="checkBoxPref2"/>
        </PreferenceScreen>
    </PreferenceCategory>
</PreferenceScreen>
ben ham main:
	public class AppPreferenceActivity extends PreferenceActivity {/////chu la nhp phai? extender PreferenceActivity
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        
        
         PreferenceManager prefMgr = getPreferenceManager();
        prefMgr.setSharedPreferencesName("appPreferences");
        addPreferencesFromResource(R.xml.myapppreferences);
    }
}
---------------------------------------
Ðe lay giá tri cua các cau hình này trong code, ta làm nhu sau:

SharedPreferences appPrefs = getSharedPreferences("appPreferences", MODE_PRIVATE);
Toast.makeText(this, appPrefs.getString("editTextPref", ""), Toast.LENGTH_LONG).show();

Trong dó, appPreferences là tên cua file cau hình can mo
 (duoc dat o hàm prefMgr.setSharedPreferencesName("appPreferences"); phía trên), 
 còn editTextPref là tên cua thuoc tính can lay giá tri 
(duoc dat trong file res/xml/myappprefererences.xml o trên).
-----------------------------------------
Ngoài ra, ta cung có the dat lai giá tri cua các cau hình này bang tay mà không
 can thông qua PreferenceActivity bang cách su dung SharedPreferences.Editor nhu sau:

SharedPreferences appPrefs = getSharedPreferences("appPreferences", MODE_PRIVATE);
SharedPreferences.Editor prefsEditor = appPrefs.edit();
prefsEditor.putString("editTextPref","dat_lai_gia_tri_o_day";
prefsEditor.commit();

