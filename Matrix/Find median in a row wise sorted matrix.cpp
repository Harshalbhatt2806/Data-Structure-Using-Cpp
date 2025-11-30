#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        int minValue = INT_MAX, maxValue = INT_MIN;
        for (int i = 0; i < n; i++) {
            minValue = min(minValue, mat[i][0]);
            maxValue = max(maxValue, mat[i][m - 1]);
        }
        
        int desired = (n * m + 1) / 2;
        int low = minValue, high = maxValue;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                cnt += upper_bound(mat[i].begin(), mat[i].end(), mid) - mat[i].begin();
            }
            
            if (cnt < desired)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return low;
    }
};