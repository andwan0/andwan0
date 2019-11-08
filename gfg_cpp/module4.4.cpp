
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
vector<pair<long long, long long>> sortWithFrequency(vector<long long> v);
//Position this line where user code will be pasted.
int main() {
	
	long long testcase;
	testcase = 1;//cin>>testcase;
	
	while(testcase--){
	    long long N;
	    N = 19;//cin >> N;
	    
	    // declaring vector
	    vector<long long> v{1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 4, 3, 2, 5, 5, 3};
	    
	    /*for(long long i = 0;i<N;i++){
	        long long k;
	        cin >> k;
	        v.push_back(k);
	    }*/
	    
	    // calling function to perform required operation
	    vector<pair<long long, long long>> v_new = sortWithFrequency(v);
	    
	    for(auto it = v_new.begin();it!=v_new.end();it++){
	        cout << it->first << " " << it->second << " ";
	    }
	    cout << endl;
	    
	}
	
	system("pause");
	return 0;

}
bool mycomp(pair<long, long> a, pair<long, long> b) {
	if (a.second > b.second) return 1;//if first marks are greater
	else if (b.second == a.second) //if marks are same
		if (b.first >= a.first) return 1;//then comparing them by name
		else return 0;
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
// Function to sort vector based 
// on frequence of integers
vector<pair<long long, long long>> sortWithFrequency(vector<long long> v) {

	vector<pair<long long, long long>> v_new;

	map<long long, long long> dict;
	// Your code here
	for (auto it = v.begin(); it != v.end(); it++) {
		if (dict.find(*it) == dict.end()) {
			dict.insert(pair<long long, long long>(*it, *it));
			long long coun = count(v.begin(), v.end(), *it);
			v_new.push_back(pair<long long, long long>(*it, coun));
		}
	}
	sort(v_new.begin(), v_new.end(), mycomp);

	return v_new;

}