#include <iostream>
using namespace std;

int main() {
    int num = 5;

    cout << num << endl;

    // address of Operator - &

    cout << "Address of num is " << &num <<  endl;

    int *ptr = &num;

    cout << "Value of ptr : " << *ptr << endl;
    cout << "Address of ptr : " << ptr << endl;

    double d = 4.3;
    double *ptr2 = &d;

    cout << "Value of ptr2 : " << *ptr2 << endl;
    cout << "Address of ptr2 : " << ptr2 << endl;

    cout << "Size of Integer is " << sizeof(num) << endl;
    cout << "Size of ptr is " << sizeof(ptr) << endl;
    cout << "Size of ptr2 is " << sizeof(ptr2) << endl;
}