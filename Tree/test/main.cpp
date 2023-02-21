#include <iostream>
using namespace std;
#include "tree.h"
int main()
{
    Tree<string> dd;
    dd.add("Viet Nam");
    dd.add("Ha Noi", "Viet Nam");
    dd.add("TP. Ho Chi Minh", "Viet Nam");
    dd.add("Da Nang", "Viet Nam");
    dd.add("Hai Phong", "Viet Nam");
    dd.add("Hoan Kiem", "Ha Noi");
    dd.add("Ba Dinh", "Ha Noi");
    dd.add("Dong Da", "Ha Noi");
    dd.add("Hai Ba Trung", "Ha Noi");
    dd.add("Bach Mai", "Hai Ba Trung");
    dd.add("Pho Hue", "Hai Ba Trung");
    List<string> r = dd.GetNode("Ha Noi");
    r.PrintAll();
    cout << endl;
}
