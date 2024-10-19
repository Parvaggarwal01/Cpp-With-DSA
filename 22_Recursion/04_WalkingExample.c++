#include <iostream>
using namespace std;

void reacHome(int src, int dest){

    // cout << "src: " << src << " dest: " << dest << endl;
    // base case
    if(src ==dest){
        cout << "Reached Home" << endl; 
        return;
    }

    // recursive case
    src++;

    reacHome(src, dest);

}
int main(){
    int dest = 10;
    int src = 1;

    cout << endl;
    reacHome(src, dest);
}