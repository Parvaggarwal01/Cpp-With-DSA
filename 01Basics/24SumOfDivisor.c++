#include <iostream>
using namespace std;

int main(){
    int N = 36;
    int ans = 0;
        for(int i = 0; i<=N; i++)
        {
            if(N%i == 0)
            {
                ans += i;
            }
        }
        cout << ans;
}