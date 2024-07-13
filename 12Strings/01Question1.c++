// Maximum Occuring Character

#include <iostream>

using namespace std;

char getMax(string s) {
    int arr[26] = {0};

    for(int i = 0; i<s.length(); i++)
    {
        int num = 0;
        char ch = s[i];
        if(ch >= 'a' && ch <= 'z'){
            num = ch - 'a';
        }
        else{
            num = ch - 'A';
        }
        arr[num]++;
    }

    int maxi = -1;
    int ans = 0;
    for(int i = 0; i<26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    char final = 'a' + ans;
    return final;
}

int main() {
    string s;
    cin >> s;

    cout << getMax(s) << endl;
}