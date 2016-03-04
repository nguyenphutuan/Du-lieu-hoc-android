				 db.open();
                Cursor c = db.getAllContacts();
                if (c.moveToFirst())
                {
                    do {
                            String chuoi=c.getString(0);
                            Integer a=Integer.parseInt(chuoi);
                            db.deleteContact(a);
                    } while (c.moveToNext());
                    adapter.notifyDataSetChanged();
                }
                db.close();
                break;
