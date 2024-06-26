#include <iostream>
using namespace std;

int main(){
    int a = 20;
    int b = 15;
    int ans = 0;
    for(int i = 0; i<a; i++){
        if(a%i == 0 && b%i == 0)
        {
            ans = i;
        }
        
    }
    cout << "GCD of 20 and 15 is " << ans << endl;
}