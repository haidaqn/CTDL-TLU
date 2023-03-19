#include <iostream>
#include "tree.h"
using namespace std;

int main() {

    Tree<string> dd;
    dd.addRoot("Viet Nam");
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

    // dd.Delete("Viet Nam");
    dd.Delete("Hai Ba Trung");

    dd.print();

    return 0;
}