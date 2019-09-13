#include <iostream>
#include <vector>
#include <string>
#include <limits.h>
using namespace std;

class Solution {
public:
    double findk(int a[], int m, int b[], int n, int k) {
        if (m == 0) return b[k];
        if (n == 0) return a[k];
        int i, j;
        int la = 0, lb = 0;
        while (true) {
            i = (m - la) * k / (m - la + n - lb);
            j = k - i;
            i += la;
            j += lb;
            int ai = (i < m) ? a[i] : INT_MAX;
            int bj = (j < n) ? b[j] : INT_MAX;
            int ai_ = (i > 0) ? a[i - 1] : INT_MIN;
            int bj_ = (j > 0) ? b[j - 1] : INT_MIN;
            if (ai <= bj && ai >= bj_) return ai;
            else if (bj <= ai && bj >= ai_) return bj;
            else if (ai < bj_) {
                k -= i - la + 1;
                la = i + 1;
            }
            else {
                k -= j - lb + 1;
                lb = j + 1;
            }
        }
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    //double findMedianSortedArrays(int A[], int m, int B[], int n) {
        int m = nums1.size();
        int n = nums2.size();
        int* A = &nums1[0];
        int* B = &nums2[0];

        if ((m + n) & 1) {
            return findk(A, m, B, n, (m + n - 1) / 2);
        }
        return (findk(A, m, B, n, (m + n - 1) / 2) + findk(A, m, B, n, (m + n) / 2)) / 2.0;
    }
};

int main() {
    string line;

    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    int A[2] = {1, 3};
    int m = 2;
    int B[1] = {2};
    int n = 1;
    
    //double ret = Solution().findMedianSortedArrays(A, m, B, n);
    double ret = Solution().findMedianSortedArrays(nums1, nums2);

    string out = to_string(ret);
    cout << out << endl;
    system("pause");
    return 0;
}