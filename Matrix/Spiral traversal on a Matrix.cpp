#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        int n=mat.size(), m=mat[0].size();
        
        vector<int> ans;
        int upr=0, leftc=0;
        int downr=n-1, rightc=m-1;
        while(upr<=downr && leftc<=rightc){
            //->->->->
            for(int i=leftc; i<=rightc; i++){
                ans.push_back(mat[upr][i]);
            }
            upr++;
            /*
            |
            v
            |
            v
            */
            for(int i=upr; i<=downr; i++){
                ans.push_back(mat[i][rightc]);
            }
            rightc--;
            if(upr<=downr){
                //<--<--<--<--
                for(int i=rightc; i>=leftc; i--){
                    ans.push_back(mat[downr][i]);
                }
                downr--;
            }
            if(leftc<=rightc){
                /*
                ^
                |
                ^
                |
                */
                for(int i=downr; i>=upr; i--){
                    ans.push_back(mat[i][leftc]);
                }
                leftc++;
            }
        }
        return ans;
    }
};