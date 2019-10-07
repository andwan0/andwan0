
//Initial Template for C++
// CPP code to implement functions of priority_queue
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
// Driver code
int main() {
	
priority_queue <int> pq; 
    pq.push(10); 
    pq.push(30); 
    pq.push(20); 
    pq.push(5); 
    pq.push(1); 
  
    pq.pop();
    cout << "Maximum element after deletion " << pq.top(); 
	system("pause");
	return 0;
}