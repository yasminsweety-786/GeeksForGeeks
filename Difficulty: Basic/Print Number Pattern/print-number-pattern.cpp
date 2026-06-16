class Solution {
  public:
    vector<int> printPat(int n) {
        vector<int> ans;
        // write code here
        for (int i=n; i>=1; i--){
            for ( int j =n;j>=1;j--){
                 for ( int r=0; r<i;r++){
                     ans.push_back(j);
                 }
            
            }
            ans.push_back(-1);
        } 
        return ans ;
    }
};