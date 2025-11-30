#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int ans = INT_MIN;
        
        int cur = 0;
        for(int x: arr){
            cur += x;
            if(ans < cur)
              ans = cur;
            if(cur < 0)
              cur = 0;
        }
        
        return ans;
    }
};

