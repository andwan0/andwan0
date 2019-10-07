{
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
struct Cuboid //struture of a cuboid
{
    int l,b,h;
    
    
};
//Position this line where user code will be pasted.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   int l,b,h;
	   cin>>l>>b>>h; //input l b and h
	   Cuboid c;
	   c.l=l;
	   c.b=b;
	   c.h=h;
	   volume(c); //function to find area
	}
	return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
void volume(Cuboid c)
{
    //Your code here
	long long int vol = c.l * c.b * c.h;
	cout << vol;
    cout<<endl;
}
