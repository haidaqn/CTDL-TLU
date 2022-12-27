
#include <iostream>
using namespace std;

int ThucDon()
{
  cout<<"\t\t\tCHUONG TRINH QUAN LY DANH BA\n";
  cout<<"\t1. Them moi\n";  
  cout<<"\t2. Hien thi tat ca danh ba\n";
  cout<<"\t3. Tim danh ba\n";
  cout<<"\t4. Xoa\n";
  cout<<"\t0. Thoat\n";
  cout<<"Moi chon chuc nang: ";
  int chon;
  cin>>chon;
  return chon;

}
void ThemMoi()
{
  char ht[50], dt[12], email[50];
  cout<<"Nhap cac thong tin sau de them moi\n";
  cout<<"Nhap ho ten: ";
  cin.ignore();
  cin.getline(ht, 50);
  cout<<"Nhap dien thoai: ";
  cin.getline(dt, 12);
  cout<<"Nhap email: ";
  cin.getline(email, 50);
  db.AddContact(Contact(ht, dt, email));
  cout<<"Hoan thanh them mot danh ba\n";
}
void HienThiTatCa()
{
  cout<<"DANH BA\n";
  for(int i = 1; i<= db.Count(); i++)
  {
    Contact c = db.GetContact(i);
    cout<<"\tContact thu "<<i<<": \n";
    cout<<"\t\tHo ten    : "<<c.GetHoTen()<<endl;
    cout<<"\t\tDien thoai: "<<c.GetDienThoai()<<endl;
    cout<<"\t\tEmail     : "<<c.GetEmail()<<endl;
  }
}

void TimDanhBa()
{
  char tk[10];
  cout<<"Moi nhap tu can tim: ";
  cin.ignore();
  cin.getline(tk, 50);

  for(int i = 1; i<= db.Count(); i++)
  {
    Contact c = db.GetContact(i);
    char *p = strstr(c.GetHoTen(),tk);
    if(p != NULL) {
        cout<<"\tContact thu "<<i<<": \n";
        cout<<"\t\tHo ten    : "<<c.GetHoTen()<<endl;
        cout<<"\t\tDien thoai: "<<c.GetDienThoai()<<endl;
        cout<<"\t\tEmail     : "<<c.GetEmail()<<endl;
    }
  }

}

void Xoa()
{
  char tk[10];
  cout<<"Moi nhap ten can xoa: ";
  cin.ignore();
  cin.getline(tk, 50);
  int vt = 0;
  for(int i = 1; i<= db.Count(); i++)
  {
    Contact c = db.GetContact(i);
    if (strcmp(c.GetHoTen(),tk)==0)
    {
      vt = i;
      break;
    }
  }
  if (vt != 0)
  {
    db.DeleteContact(vt);
    cout<<"Xoa thanh cong "<<tk<<endl;
  }
  else
  {
    cout<<"Khong co contact nao co ten = "<<tk<<endl;
  }
}