#include <iostream>
using namespace std;

int main(){
    int a = 4;
    int b = 6;
    int c = a&b;
    int d = a|b;
    int e = ~a;
    int f = a^b;

    cout << "a&b: " << c << endl;
    cout << "a|b: " << d << endl;
    cout << "~a: " << e << endl;
    cout << "a^b: " << f << endl;
}