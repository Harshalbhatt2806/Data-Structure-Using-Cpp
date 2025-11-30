#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  bool isPalindrome(int a){
    
    string s = to_string(a);
    int start = 0;
    int end = s.size()-1;
    
    bool flag = true;
    
    while(start<end){
        if(s[start]!=s[end]){
            flag = false;
            break;
        }
        start++;
        end--;
    }
    
    return flag;
  }
    int isPalinArray(vector<int> &arr) {
        // code here
        for (int num : arr) {
        if (!isPalindrome(num)) {
            return 0; // not all palindrome
        }
    }
    return 1;
    }
};