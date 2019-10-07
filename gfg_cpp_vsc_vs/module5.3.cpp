
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
// Driver code
struct compare{
    // Your comparator here
    int operator() (const pair<string, int>& p1, const pair<string, int>& p2)
    {
        if (p1.second < p2.second) {
            return 1;
        } else {
            if (p1.second == p2.second) {
                //if (p1.first.compare(p2.first))
                if (p1.first < p2.first)
                return 1;
                else return 0;
            }
        }
        return 0;
    }
};
priority_queue<pair<string, int>, vector<pair<string, int>>, compare> insert(priority_queue<pair<string, int>, vector<pair<string, int>>, compare> &pq, string name, int marks){
    
    // Your code here
    pq.push(pair<string,int>(name,marks));
    return pq;
    
}
// Function to implement maxFromQueue to get student with maximum makrs from priority_queue
// If marks are same, return the student with lexicographically smallest name
pair<string, int> maxFromQueue(priority_queue<pair<string, int>, vector<pair<string, int>>, compare> &pq){
    
    // Your code here
    if (pq.empty())
        return pair<string,int>("empty", -1);
    pair<string,int> a = pq.top();
    //cout << a.first << " " << a.second << endl;
    
    return a;
}
int main() {
	
	int testcase;
	cin >> testcase;
	
	while(testcase--){
	    
	    // Declaring priority queue of pair 
	    priority_queue<pair<string, int>, vector<pair<string, int>>, compare> pq;
	    
	    int queries;
	    cin >> queries;
	    
	    for(int i = 0;i<queries;i++){
	        
	        // name and marks input
	        string input;
	        cin >> input;
	        
	        if(input == "i"){
	            string name;
	            int marks;
	            cin >> name >> marks;
	            
	            // inserting elements to priority queue
	            insert(pq, name, marks);
	            
	        }
	        else if(input == "o"){
	            
	            // deleting elements from priority queue
	            pair<string, int> ans = maxFromQueue(pq);
	            cout << ans.first << " " << ans.second << endl;
	            
	            if(!pq.empty())
	                pq.pop();
	        }
	    }
	    
	}
	system("pause");
	return 0;

}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++

// Function to implement function insert to insert data into the priority_queue
