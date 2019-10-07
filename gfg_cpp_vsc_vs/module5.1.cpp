
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
stack<int> _push(int arr[],int n);
void _pop(stack<int>s);
queue<int> _enqueue(int arr[],int n);
void _dequeue(queue<int>q);
//Position this line where user code will be pasted.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[100];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    stack<int>s=_push(arr,n);
	    _pop(s);
	    cout<<endl;
	    queue<int>q=_enqueue(arr,n);
	    _dequeue(q);
	    cout<<endl;
	    
	}
	return 0;


}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
stack<int> _push(int arr[],int n)
{
    //insert the elements of the array in to a stack
    stack<int> s;
    for (int i=0; i<n; i++) {
        s.push(arr[i]);
    }
    return s;
}
void _pop(stack<int>s)
{
    //Print the elements and pop the stack while stack is not empty
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
}
queue<int> _enqueue(int arr[],int n)
{
   //insert the elements of the array in to a queue
   queue<int> q;
       for (int i=0; i<n; i++) {
           q.push(arr[i]);
    }
    return q;
}
void _dequeue(queue<int>q)
{
       //Print the elements and dequeue the queue while queue is not empty
           while(!q.empty()) {
            cout << q.front() << " ";
            q.pop();
    }
}