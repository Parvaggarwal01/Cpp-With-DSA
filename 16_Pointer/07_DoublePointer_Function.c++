#include <iostream>
using namespace std;

void update(int **p){
    // p = p + 1;
    // kuch change hoga = No

    // *p = *p + 1;
    // kuch change hoga = Yes

    **p = **p + 1;
    // kuch change hoga = Yes
}


int main(){
    int i = 5;
    int* p = &i;
    int** p2 = &p;

    cout << " before: " << i << endl;
    cout << " before: " << p << endl;
    cout << " before: " << p2 << endl;
    update(p2);
    cout << " after: " << i << endl;
    cout << " after: " << p << endl;
    cout << " after: " << p2 << endl;

}