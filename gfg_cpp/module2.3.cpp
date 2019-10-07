{
//Initial Template for C++
#include <bits/stdc++.h>
#include <fstream>
using namespace std;
// findPairs() Prototype
void findPairs(int[], int, int);
//Position this line where user code will be pasted.
// Driver code to test findPairs function
int main()
 {
    int testcase;
    cin >> testcase;
    while(testcase--)
    {
        // n : size of array
        int n;
        cin>>n;
        // array
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long sum=0;
        cin>>sum;
        // calling function to find all pairs
        findPairs(arr, n, sum);
       
    }
	return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/* Function to find pairs with different sum
* arr[] : array containing elements
* n : size of array
* sum : given sum to find pairs with sum equal to given sum
*/
void findPairs(int arr[], int n, int sum){
        // Your code here
}