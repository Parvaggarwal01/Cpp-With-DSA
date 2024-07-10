// Length of Character Array

#include <iostream>
using namespace std;

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

    cout << "Length of Your Name: " << getLength(name) << endl;
}