#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void threeWayPartition(vector<int>& arr, int a, int b) {
        int k=0;
        for(int i=k; i<arr.size(); i++){
            if(arr[i] < a){
                swap(arr[i], arr[k]);
                k++;
            }
        } for(int i=k; i<arr.size(); i++){
            if(arr[i]>=a && arr[i]<=b){
                swap(arr[i], arr[k]);
                k++;
            }
        }
    }
};