#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> m;

    m[1] = "Parv";
    m[2] = "Aggarwal";
    m[13] = "LPU";
    m[5] = "Haryana";


    cout << "Before Erase "<< endl; 
    for(auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "finding 13: " << m.count(13) << endl;

    m.erase(13);
    cout << "After Erase "<< endl; 
    for(auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    auto it = m.find(5);

    for(auto i = it; i!=m.end(); i++){
        cout << (*i).first << endl;
    }

}