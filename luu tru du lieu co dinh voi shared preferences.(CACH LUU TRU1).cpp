http://android.appwhoosh.com/content/luu_tru_du_lieu/luu_tru_du_lieu_co_dinh_voi_shared_preferences.html
ta t?o file �res/xml/myapppreferences.xml� voi noi dung nhu sau:
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
�e lay gi� tri cua c�c cau h�nh n�y trong code, ta l�m nhu sau:

SharedPreferences appPrefs = getSharedPreferences("appPreferences", MODE_PRIVATE);
Toast.makeText(this, appPrefs.getString("editTextPref", ""), Toast.LENGTH_LONG).show();

Trong d�, appPreferences l� t�n cua file cau h�nh can mo
 (duoc dat o h�m prefMgr.setSharedPreferencesName("appPreferences"); ph�a tr�n), 
 c�n editTextPref l� t�n cua thuoc t�nh can lay gi� tri 
(duoc dat trong file res/xml/myappprefererences.xml o tr�n).
-----------------------------------------
Ngo�i ra, ta cung c� the dat lai gi� tri cua c�c cau h�nh n�y bang tay m� kh�ng
 can th�ng qua PreferenceActivity bang c�ch su dung SharedPreferences.Editor nhu sau:

SharedPreferences appPrefs = getSharedPreferences("appPreferences", MODE_PRIVATE);
SharedPreferences.Editor prefsEditor = appPrefs.edit();
prefsEditor.putString("editTextPref","dat_lai_gia_tri_o_day";
prefsEditor.commit();

