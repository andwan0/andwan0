#include <iostream>
#include <algorithm> // std::find_if
#include <vector>
#include <string>
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

//taken from leetcode's debug playground
string integerVectorToString(vector<int> list, int length = -1) {
    if (length == -1) {
        length = list.size();
    }

    if (length == 0) {
        return "[]";
    }

    string result;
    for(int index = 0; index < length; index++) {
        int number = list[index];
        result += to_string(number) + ", ";
    }
    return "[" + result.substr(0, result.length() - 2) + "]";
}

int main()
{
    vector<int> nums = {
        1, 2, 3, 4, 5, 6};
    int target = 6;

    vector<int> ret = Solution().twoSum(nums, target);

    string out = integerVectorToString(ret);
    cout << out << endl;
    system("pause");
}