
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;
// Function Prototype with arguments a, b and c
void operations(int a, int b, int c);
//Position this line where user code will be pasted.
// Driver Code
int main(){
    
    int testcase;
    cin >> testcase;
    
    while(testcase-- > 0){
        
        int a, b, c;
        
        cin >> a >> b >> c;
        
        operations(a, b, c);
        
    }
    system("pause");
    
}


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
/* Function to do the operations.
* Arguments : a, b and c
*/
void operations(int a, int b, int c){
    
    // Your code here
    long long int P = (long long int)pow((double)a, (double)b);
    long long int XOR = P ^ c;
    long long int REMAINDER = P % c;

    cout << P << endl;
    cout << XOR << endl;
    cout << REMAINDER << endl;
    
}