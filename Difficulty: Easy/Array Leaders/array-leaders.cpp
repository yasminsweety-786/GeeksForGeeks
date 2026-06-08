
class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
         int n = arr.size();
        vector<int> ans;
        
        int max_from_right = arr[n-1];
        ans.push_back(max_from_right);  
        
        
        for (int i = n-2; i >= 0; i--) {
            if (arr[i] >= max_from_right) {
                ans.push_back(arr[i]);
                max_from_right = arr[i];
            }
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};