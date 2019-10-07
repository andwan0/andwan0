{
//Initial Template for C++
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> commonElements(vector<int>v1,vector<int>v2);
//Position this line where user code will be pasted.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    vector<int>v1,v2;
	    int n,m;
	    cin>>n>>m;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        v1.push_back(x); //Taking input of first vector
	    }
	    
	    for(int i=0;i<m;i++)
	    {
	        int x;
	        cin>>x;
	        v2.push_back(x); //Taking input of second vector
	    }
	    
	    vector<int>v3=commonElements(v1,v2); //Third vector that holds return value of function
	    if(v3.size()!=0)
	    for(int i=0;i<v3.size();i++)
	      cout<<v3[i]<<" ";
	    else
	    cout<<"Empty"; //If v3 empty then print this
	    cout<<endl;
	}
	return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
vector<int> commonElements(vector<int>v1, vector<int>v2)
{
    vector<int>v3;
    
	map<int, int> dict;
	//Your Code here
	for (int i : v1) {
		dict.insert(pair<int, int>(i, i));
	}
	for (int i : v2) {
		if (dict.find(i) != dict.end()) {
			v3.push_back(i);
		}
	}
    
    return v3;
}