// Checking Palindrome

#include <iostream>
using namespace std;

char toLowerCase(char ch) {
    if(ch >= 'a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n){
    int s = 0; 
    int e = n -1;

    while(s<e) {
        if(toLowerCase( a[s] ) != toLowerCase( a[e] ))
        {
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int getLength(char name[]) {
    int count = 0;

    for(int i = 0; name[i] != '\0'; i++) {
        count++;
    }

    return count;
}

int main() {
    char name[20];
    cout << "Enter Your Name : ";
    cin >> name;
    cout << endl;

    cout << "Your Name is: " << name << endl;
    
    int len = getLength(name);

    if(checkPalindrome(name, len) == 1){
        cout << "Yes Your Name is Palindrome" << endl;
    }
    else{
        cout << "No Your Name is Not a Palindrome" << endl;
    }
}