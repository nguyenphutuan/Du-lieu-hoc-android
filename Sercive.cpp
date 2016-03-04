public class HelloService extends Service {
 
/** Chi ra lam the nao de cu xu neu dich vu bi giet */
int mStartMode;
 
/** giao dien cho khach hang ma rang buoc */
IBinder mBinder; 
 
/** chi ra cho du onRebind nen duoc su dung */
boolean mAllowRebind;
 
/** duoc goi khi cac dich vu duoc tao ra. */
@Override
public void onCreate() {
 
}
 
/** dich vu duoc bat dau do mot cuoc goi den startService() */
@Override
public int onStartCommand(Intent intent, int flags, int startId) {
return mStartMode;
}
 
/** mot khach hang duoc lien ket voi cac dich du voi bindService() */
@Override
public IBinder onBind(Intent intent) {
return mBinder;
}
 
/** duoc goi khi tat ca khach hang da khong bi rang buoc voi unbindService() */
@Override
public boolean onUnbind(Intent intent) {
return mAllowRebind;
}
 
/** duoc goi khi mot khach hang duoc lien ket voi cac dich vu voi bindService()*/
@Override
public void onRebind(Intent intent) {
 
}
 
/**duoc goi khi dich du khong con duoc su dung va dang bi pha huy*/
@Override
public void onDestroy() {
 
}
}
