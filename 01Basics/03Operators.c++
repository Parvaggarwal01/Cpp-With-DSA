#include <iostream>
using namespace std;

int main(){

    int a = 2 + 5;
    cout << "2 plus 5: " << a << endl;

    int b = 5 - 2;
    cout << "5 minus 2: " << b << endl;

    int c = 5 * 2;
    cout << "5 multiply 2: " << c << endl;

    float d = 2.0/5;
    cout << "2 divide by 5: " << d << endl;

    int e = 2;
    int f = 3;
    bool first = (e == f);
    cout << "Is e equal to f: " << first << endl;

    bool second = (e > f);
    cout << "Is e greater than f: " << second << endl;

    bool third = (e < f );
    cout << "Is e less than f: " << third << endl;

    bool forth = (e >= f);
    cout << "Is e greater than and equal to f: " << forth << endl;

    bool fifth = (e <= f);
    cout << "Is e less than and equal to f: " << fifth << endl;

    bool sixth = (e != f);
    cout << "Is e not equal to f: " << sixth << endl;

    int g = 0;
    cout << "Not of g: " << !g << endl;
}