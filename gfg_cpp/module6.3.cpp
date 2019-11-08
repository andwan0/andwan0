
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
	//cin >> testcase;
    testcase = 1;
	
	// declaring multimap
	multimap<string, int> mmp;
	
	while(testcase--){
	    int n;
	    //cin >> n;
        n = 5;
	    
string _s[5] = {"john", "ankit", "ankit", "john", "ankit"};
int _marks[5] = {50, 100, 100, 60, 30};

	    // taking input and inserting elements into multimap
	    for(int i = 0;i<5;i++){
	        string s;
	        //cin >> s;
	        int marks;
	        //cin >> marks;
	        mmp.insert({_s[i], _marks[i]});
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
    vector<int> arr;
    set<int, std::greater<int>> arr2;
    multimap<string, int> :: iterator itr;
    set <int, greater <int> > :: iterator itr2; 
    string name;
    int score;
    int count = 0;
    bool firstone = true;
    for (itr = mmp.begin(); itr != mmp.end(); ++itr) {
        if (firstone) {//temp store
            name = itr->first;
            score = itr->second;
            //count = 1;
            firstone = false;
            arr.push_back(score);
            arr2.insert(score);

        } else {
            if (name == itr->first) {//temp store
                score = itr->second;
                arr.push_back(score);
                arr2.insert(score);
                //count++;
            } else {
                sort(arr.rbegin(), arr.rend());
                //cout << name << " " << score << " " << count << endl;
                for (itr2 = arr2.begin(); itr2 != arr2.end(); ++itr2) {
                    int count_ = std::count(arr.begin(), arr.end(), *itr2);
                    cout << name << " " << *itr2 << " " << count_ << endl;
                }
                arr.clear();
                arr2.clear();
                name = itr->first;
                score = itr->second;
                arr.push_back(score);
                arr2.insert(score);
                //score = itr->second;
                //count = 1;
            }

        }
    }
    sort(arr.rbegin(), arr.rend());
    //cout << name << " " << score << " " << count << endl;
    for (itr2 = arr2.begin(); itr2 != arr2.end(); ++itr2) {
        int count_ = std::count(arr.begin(), arr.end(), *itr2);
        cout << name << " " << *itr2 << " " << count_ << endl;
    }
}