#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
 

    // Max Heap
    priority_queue<int> pq;

    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout << "Element at Top " << pq.top() << endl;
    pq.pop();
    cout << "Element at Top " << pq.top() << endl;
    cout << "Size is " << pq.size() << endl;
    if(pq.empty()){
        cout << "Priority Queue is empty" << endl;
    } else {
        cout << "Priority Queue is empty" << endl;
    }

    // Min Heap
    priority_queue<int, vector<int>, greater<int> > minpq;

    minpq.push(4);
    minpq.push(2);
    minpq.push(5);
    minpq.push(3);

    cout << "Element at Top " << minpq.top() << endl;
    minpq.pop();
    cout << "Element at Top " << minpq.top() << endl;
    cout << "Size is " << minpq.size() << endl;
    if(minpq.empty()){
        cout << "Priority Queue is empty" << endl;
    } else {
        cout << "Priority Queue is empty" << endl;
    }
    

}