
//Initial Template for C++
// CPP code to arrange names 
// according to marks and count
#include <bits/stdc++.h>
using namespace std;
void countStudents(multimap<string, int> &mmp);
//Position this line where user code will be pasted.
// Driver code
int main() {
	
	int testcase;
	cin >> testcase;
	
	// declaring multimap
	multimap<string, int> mmp;
	
	while(testcase--){
	    int n;
	    cin >> n;
	    
	    // taking input and inserting elements into multimap
	    for(int i = 0;i<n;i++){
	        string s;
	        cin >> s;
	        int marks;
	        cin >> marks;
	        mmp.insert({s, marks});
	    }
	    
	    // function to count students with same name and marks
	    countStudents(mmp);
	    
	    mmp.clear();
	    
	}
	system("pause");
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
// Comparator
bool compare(pair<string, int> p1, pair<string, int> p2){
    
    // Your code here
    if (p1.first.compare(p2.first))
        return true;
    else
        return false;
    
}
/*Function to count students with same name and marks
* mmp : multimap having students name and their marks
*/
void countStudents(multimap<string, int> &mmp){
    
    // Your code here
    //sort(mmp.begin(), mmp.end(), compare);
    multimap <string, int> :: iterator itr;
    string name;
    int score;
    int count = 0;
    bool firstone = true;
    for (itr = mmp.begin(); itr != mmp.end(); ++itr) {
        if (firstone) {
            name = itr->first;
            score = itr->second;
            count = 1;
            firstone = false;
        } else {
            if (name == itr->first && score == itr->second) {
                count++;
            } else {
                cout << name << " " << score << " " << count << endl;
                name = itr->first;
                score = itr->second;
                count = 1;
            }
        }
    }
}