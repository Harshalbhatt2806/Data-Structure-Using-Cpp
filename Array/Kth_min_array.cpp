#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
         int x,n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=1;i<=n;i++)
        {
            x=arr[k-1];
        }
        return x;
    }
};