#include <bits/stdc++.h>

using namespace std;

int main() {

    string ten[100], sdt[100];
    int n;
    cout<<"Ban muon nhap bao nhieu contact ?  ";
    cin>>n;
    cin.ignore();

    for(int i = 1; i <= n ; i++) {
        cout<<"Nhap contact so "<<i<<endl;
        cout<<"\tNhap ten : ";
        getline(cin,ten[i]);
        cout<<"\tNhap so dien thoai : ";
        getline(cin,sdt[i]);
    }

    cout<<"\n Danh sach contact cua ban la : \n";

    for(int i = 1; i <= n ;i++) {
        cout<<"Contact so "<<i<<endl;
        cout<<"\t Ten : "<<ten[i]<<endl;
        cout<<"\t So : "<<sdt[i]<<endl;
    }

    return 0;
}