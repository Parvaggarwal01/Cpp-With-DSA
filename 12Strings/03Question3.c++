// remove all occurence of substring

#include <iostream>

using namespace std;

string remove(string s, string part) {

    while(s.length() != 0 && s.find(part) < s.length()) {
        s.erase(s.find(part), part.length());
    }

    return s;
}

int main () {

    string s;
    string p;
    cout << "Enter your String: ";
    getline(cin, s);
    cout << "Enter your Part: ";
    getline(cin, p);

    cout << "Your Answer: " << remove(s, p) << endl;

}