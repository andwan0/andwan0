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
    double findMedianSortedArrays(int A[], int m, int B[], int n) {
        if ((m + n) & 1) {
            return findk(A, m, B, n, (m + n - 1) / 2);
        }
        return (findk(A, m, B, n, (m + n - 1) / 2) + findk(A, m, B, n, (m + n) / 2)) / 2.0;
    }
};
