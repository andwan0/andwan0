
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
multiset<string> frequency(string arr[],int n);
//Position this line where user code will be pasted.
int main() {
	int t;
	t=1;//cin>>t;
	while(t--)
	{
	   int n;
	   n=5;//cin>>n;
	   string arr[n] = {"geeks", "abcd", "hello", "world", "geeks"};
	   //for(int i=0;i<n;i++)
	   //cin>>arr[i];
	   
	   multiset<string>s=frequency(arr,n);
	   
	}
    system("pause");
	return 0;
}


/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
multiset<string> frequency(string arr[],int n)
{
   //Your code here
   multiset<string> result;
   map<string, int> list;
   for (int i = 0; i<n; i++) {
       int count = list.count(arr[i]);//silly, the count is the key-value
      if (count == 0) {
          list.insert(pair<string,int>(arr[i], 1));
      } else {
          count = list[arr[i]];
          list[arr[i]] = count+1;
      }
      result.insert(arr[i]);
   }
   
   map<string, int>::iterator itr;
   for (itr = list.begin(); itr != list.end(); ++itr) { 
       //string eh = itr->first + " ";
       //eh = eh + to_string(itr->second);
       
       cout << itr->first << " " << itr->second << endl;
   }
   return result;
}
