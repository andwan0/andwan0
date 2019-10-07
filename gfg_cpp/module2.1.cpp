{
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
long long findLoner(long long,int);
//Position this line where user code will be pasted.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    long long arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cout<<findLoner(arr,n)<<endl;
	}
	return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//Complete this function
long long findLoner(long long arr[],int n)
{
    //Your code here
	int res = 0;
	if (n <= 0)
		return -1;
	res = arr[0];
	for (int i = 1; i < n; i++) {
		res = res ^ arr[i];
	}
	if (res)
		return res;
	else
		return -1;
}
