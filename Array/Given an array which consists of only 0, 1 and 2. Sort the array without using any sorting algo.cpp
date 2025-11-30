#include<iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        // sort(arr.begin(),arr.end());
        
        int cnt0 = 0 ;
        int cnt1 = 0 ;
        int cnt2 = 0 ;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i] == 0) cnt0++; 
            if(arr[i] == 1) cnt1++; 
            if(arr[i] == 2) cnt2++; 
        }
        
        for(int i=0 ;i < cnt0; i++){
            arr[i] = 0 ;
        }
        
        for(int i = cnt0 ;i < (cnt1+cnt0); i++){
            arr[i] = 1 ;
        }
        
        for(int i=cnt1 + cnt0 ;i < (cnt2+cnt1+cnt0); i++){
            arr[i] = 2 ;
        }
    }
        
};