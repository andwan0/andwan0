
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
set<int> uncommonElements(int arr1[],int n1,int arr2[],int n2);
//Position this line where user code will be pasted.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n1,n2;
	    cin>>n1>>n2;
	    int arr1[n1];
	    int arr2[n2];
	    
	    for(int i=0;i<n1;i++)
	    {
	        cin>>arr1[i];
	    }
	    
	    for(int i=0;i<n2;i++)
	    cin>>arr2[i];
	    
	    
	    set<int>ans=uncommonElements(arr1,n1,arr2,n2);
	    if(ans.size()==0)
	    cout<<"empty";
	    else
	    for(auto x:ans)
	    cout<<x<<" ";
	    cout<<endl;
	    
	    
	    
	}
    system("pause");
	return 0;
}


/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
set<int> uncommonElements(int arr1[],int n1,int arr2[],int n2)
{
    //set <int, greater<int>> uncommon;
    set<int> uncommon;
    map<int, int> seen;
    map<int, int> :: iterator itr;
    set <int, greater<int>>::iterator itr2;
    for (int a = 0; a < n1; a++) {
        if (seen.find(arr1[a]) == seen.end()) {
            //cout << "seen " << arr1[a] << endl;
            seen.insert(pair<int,int>(arr1[a], 1));
        }
    }
    for (int b = 0; b < n2; b++) {
        if (seen.find(arr2[b]) == seen.end()) {
            //seen.insert(arr1[b], 1);
            uncommon.insert(arr2[b]);
            //cout << "uncommon " << arr1[a] << endl;
        } else {
            seen[arr2[b]]++;
        }
    }
    for (itr = seen.begin(); itr != seen.end(); ++itr) {
        if (itr->second == 1)
            uncommon.insert(itr->first);
    }
    for (itr2 = uncommon.begin(); itr2 != uncommon.end(); ++itr2) {
        //uncommon2.insert(*itr2);
    }
    return uncommon;
    //Your code here
}