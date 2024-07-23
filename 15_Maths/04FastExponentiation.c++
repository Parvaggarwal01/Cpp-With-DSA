#include <iostream>
using namespace std;

int modularExponentiation(int x, int n, int m) {
	int result = 1;

	while(n>0)
	{
		if(n&1)
		{
			result = (1LL*(result) * (x)%m)%m;
		}
		x = (1LL * (x)%m * (x)%m)%m;
		n = n>>1;
	}
	return result;
}


int main() {

    int a,b,m;

    cout << "Enter the value of n: ";
    cin >> a; 
    cout << "Enter the value of x: ";
    cin >> b;
    cout << "Enter the value of m: ";
    cin >> m;

    int ans = modularExponentiation(a,b,m); 

    cout << "Answer is " << ans << endl;
}