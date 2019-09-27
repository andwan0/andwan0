
//Initial Template for C++
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void findJumps(int, int);
//Position this line where user code will be pasted.
int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        long long N, X;
        cin >> N >> X;
        
        findJumps(N, X);
    }
    system("pause");
    return 0;
}


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
// Function to find number of jumps
// N : number inscribed on the last stone.
// X : number on which we have to reach
void findJumps(int N, int X){
    
    // Your code here
    int left = 0, right = 0;
    
    int START;
    if (X%2==0)//if even, then right-side has 1 less stone
        START = 2;
    for (int a = 0; a < N; a+=2) {
        if (X == a || X == a+1)
            break;
        left++;
    }
    if(N%2!=0)
        N--;
    for (int b = N; b > 0; b-=2) {
        if (X == b || X == b+1)
            break;
        right++;
    }
    cout << std::min(left, right);//if we jumping from land
    //cout << left << " " << right;
    
    cout << endl;
    
}