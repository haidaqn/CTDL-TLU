#include <bits/stdc++.h>
#include <fstream>
using namespace std;

void inCard(string name,string cv, string sdt, string email, string dc){
    ofstream fout( name + ".html");
    fout << "<!DOCTYPE html>" << endl;
    fout << "<html>" << endl;
    fout << "<head>" << endl;
    fout << "<style>" << endl;
    fout << "body{" << endl;
    fout << "padding : 0;" << endl;
    fout << "margin : 0;" << endl;
    fout << "box-sizing : border-box;" << endl;
    fout << "height: 100vh;" << endl;
    fout << "}" << endl;
    fout << ".main{" << endl;
    fout << "width:100%;" << endl;
    fout << "height:100%;" << endl;
    fout << "display:flex;" << endl;
    fout << "justify-content:center;" << endl;
    fout << "align-items:center;" << endl;
    fout << "}" << endl;
    fout << ".container{" << endl;
    fout << "position:relative;" << endl;
    fout << "}" << endl;
    fout << ".img-item{" << endl;
    fout << "width:800px" << endl;
    fout << "}" << endl;
    fout << ".item-1{" << endl;
    fout << "position: absolute;" << endl;
    fout << "color:white;" << endl;
    fout << "opacity:0.9;" << endl;
    fout << "right: 90px;" << endl;
    fout << "}" << endl;
    fout << ".item-2{" << endl;
    fout << "position: absolute;" << endl;
    fout << "color:white;" << endl;
    fout << "opacity:0.9;" << endl;
    fout << "left: 120px;" << endl;
    fout << "}" << endl;
    fout << ".name {" << endl;
    fout << "top: 188px;" << endl;
    fout << "}" << endl;
    fout << " .cv{" << endl;
    fout << " top: 243px;}" << endl;
    fout << ".sdt{top:275px;}" << endl;
    fout << ".email{top:311px;};" << endl;
    fout << ".address{top:351px;}" << endl;
    fout << "</style>" << endl;
    fout << "</head>" << endl;
    fout << "<body>" << endl;
    fout << "<div class='main'>" << endl;
    fout << "<div class='container'>" << endl;
    fout << "<img class='img-item' src='./bg.jpg/>"<< endl;
    fout << "<h1 class='item-1 name'>";
    fout<< name;
    fout << "</h1>" << endl;
    fout << "<h2 class='item-1 cv'>";
    fout << cv ;
    fout << "</h2>" << endl;
    fout << "<h3 class='item-2 sdt'>";
    fout << sdt;
    fout << "</h3>" << endl;
    fout << "<h4 class='item-2 email'>";
    fout<< email;
    fout << "</h4>" << endl;
    fout << "<h4 class='item-2 address'>";
    fout<<dc;
    fout<<"</h4>" << endl;
    fout << "</div>" << endl;
    fout << "</div>" << endl;
    fout<< "</body>" << endl;
    fout << "</html>" << endl;
    fout.close();
}
int main()
{
    string name, cv, sdt, email, dc;
    cout << "Moi ban nhap ten : ";
    getline(cin, name);
    cout << "Moi ban nhap chuc vu : ";
    getline(cin, cv);
    cout << "Nhap so dien thoai cua ban : ";
    cin >> sdt;
    cout << "Nhap email : ";
    cin >> email;
    cout << "Nhap dia chi : ";
    cin.ignore();
    getline(cin, dc);
    inCard(name, cv, sdt, email, dc);
    return 0;
}