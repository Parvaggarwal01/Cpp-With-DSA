#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
    // Creation
    unordered_map<string, int> m;
    // Insertion

    // Method 1
    pair<string, int> p = make_pair("parv", 3);
    m.insert(p);

    // Method 2
    pair<string, int> pair2("aggarwal", 2);
    m.insert(pair2);

    // Method 3
    m["LPU"] = 1;

    // Searching    
    cout << "Searching LPU... :- "; 
    cout << m["LPU"] << endl;
    cout << "Searching parv... :- "; 
    cout << m.at("parv") << endl;

    cout << "Searching unknown... :- "; 
    cout << m["unknown"] << endl;


    // size

    cout << "Size Before Delection :- " << m.size() << endl;

    // To check presence 
    // 0 -> absent
    // 1 -> present
    cout << "Is parv present :- " << m.count("parv") << endl;
    cout << "Is bro present :- " << m.count("bro") << endl;

    // Erase
    m.erase("aggarwal");
    cout << "Size After Delection :- " << m.size() << endl;

    // Iterating

    // Method 1
    cout << "ITERATING METHOD 1..." << endl;  // Iterating through map will print keys in sorted order by default in C++11 onwards.
    for(auto i:m){
        cout << i.first << " :- " << i.second << endl;
    }

    // Method 2
    cout << "ITERATING METHOD 2..." << endl;
    unordered_map<string, int> :: iterator it = m.begin();
    while(it != m.end()){
        cout << it->first << " :- " << it->second << endl;
        it++;
    }
 
    return 0;
}