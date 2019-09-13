
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;
// Function Prototype
void forkCPP(int N);
//Position this line where user code will be pasted.
// Driver Code
int main(){
    
    int testcase;
    cin >> testcase;
    
    while(testcase-- > 0){
        
        int N;
        
        cin >> N;
        
        forkCPP(N);
        
    }
    system("pause");
    
}


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
// Function to print ForkCPP
// N : input number
void forkCPP(int N){
    
    // Your code here
    if ((N % 3 == 0) && (N % 5 == 0))
        cout << "Fork CPP";
    else if (N%3 == 0)
        cout << "Fork";
    else if (N%5 ==0)
        cout << "CPP";
  
    cout << endl;  
}