{
//Initial Template for C++
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void vectorAdd(vector<int>v);
//Position this line where user code will be pasted.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>v;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        v.push_back(x);
	    }
	    
	    vectorAdd(v);
	   
	   
	   
	}
	return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
void vectorAdd(vector<int>v)
{
    //Your code here
	int sum = 0;
	for (int i : v) {
		sum+=i;
	}
	cout<<sum;
    cout<<endl;
}