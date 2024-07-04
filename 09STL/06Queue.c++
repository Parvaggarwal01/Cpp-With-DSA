#include <iostream>
#include <queue>

using namespace std;

int main() {

    queue<string> q;

    q.push("Parv");
    q.push("Aggarwal");
    
    cout << "Size before Pop: " << q.size() << endl;
    cout << "First Element: " << q.front() << endl;
    q.pop();
    cout << "First Element: " << q.front() << endl;

    cout << "Size after Pop: " << q.size() << endl;
}