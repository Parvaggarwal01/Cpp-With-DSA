// Finding Square Root Using Binary Search 

#include <iostream>
using namespace std;

long long int sqrtInteger(int n){
    int s = 0;
    int e = n;
        long long int mid = s + (e-s)/2;
    int ans = 0;

    while(s <= e)
    {
        long long int square = mid * mid;
        if(square == n)
        {
            return mid;
        }
        else if(square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else if(square > n)
        {
             e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans; 
}

double morePrecision(int n, int precision, int tempSol){
    double factor = 1;
    double ans = tempSol; 
    for(int i =0; i<precision; i++)
    {
        factor = factor / 10;
        for(double j =ans; j*j<n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans ;
}

int main(){
    int n;
    cout << "Enter the number you want me to find the square root of: ";
    cin >> n;
    
    int tempSol = sqrtInteger(n); 
    cout << "Answer is " << morePrecision(n, 3, tempSol) << endl;
}