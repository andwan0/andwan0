#include <iostream>

#include <vector>
using namespace std;
 //Compiler version g++ 6.3.0


 

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> r = vector<int>(2);
        for (int i = 0; i < numbers.size(); ++i) {
            for (int j = i + 1; j < numbers.size(); ++j) {
                if (numbers[i] + numbers[j] == target) {
                    r[0] = i + 1;
                    r[1] = j + 1;
                    return r;
                }
            }
            
        }
        
    }
};
int main()
 {
 	cout << "Hello, Dcoder!";
 	Solution a;
 	vector<int> number = {
 		1,2,3,4,5,6
 	};
 	int target = 6;
 	vector<int> res = a.twoSum(number, target);
 	
 	
 	for(int i=0;i<res.size();i++) {
 		cout << res[i];
 	}
 	
 	
 }