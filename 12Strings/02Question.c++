// Replace Space with @40

#include <iostream>
#include <string.h>

using namespace std;

string replaceSpace(string s) {
    string temp;
    for(int i = 0; i<s.length(); i++)
    {
        if(s[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(s[i]);
        }
    }
    return temp;    
}

int main() {
    string s;

    cout << "Enter your String: ";
    getline(cin, s);

    cout << "Output: " << replaceSpace(s) << endl;
 
}