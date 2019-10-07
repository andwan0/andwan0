{
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
bool search(long long[], long long, long long);
//Position this line where user code will be pasted.
// Driver code to test search function
int main() {
	
	long long testcase;
	cin >> testcase;
	
	while(testcase--){
	    // n : size of array
	    long long n;
	    cin >> n;
	    
	    long long a[n];
	    
	    for(long long i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    
	    // Number to find
	    long long x;
	    cin >> x;
	    
	    // Check if x is present in array
	    if(search(a, n, x)){
	        cout << "Yes" << endl;
	    }
	    else{
	        cout << "No" << endl;
	    }
	}
	
	return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
// Function to find x in array a
// a : array
// x : element to be searched
// n : size of array
bool search(long long a[], long long n, long long x){
    
    // Find x in array by comaring with elements
    for(long long i = 0;i<n;i++){
        
        // Your code here
		if (x == a[i]) {
			return true;
		}
    }
    return false;
}