#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        int n = a.size();
        int m = b.size();
        vector<bool>isPresent(1e6+1 , false);
        vector<int>ans;
        for(int i = 0 ; i < n ; ++ i ){
             if( isPresent[a[i]] == false ){
                 isPresent[a[i]] = 1;
                 ans.push_back(a[i]);
             }
             
        }
        for(int i = 0 ; i < m ; ++ i ){
            if( isPresent[b[i]] == false ){
                isPresent[b[i]] = 1;
                ans.push_back(b[i]);
            }
        }
        return ans;
    }
};