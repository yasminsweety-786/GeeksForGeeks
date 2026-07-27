class Solution {
  public:
    int getMaxVal(vector<int> &arr, int k) {
        // code here
         sort(arr.begin(), arr.end(), greater<int>());
        
        // Sum the top k elements
        long long sum = 0;
        for (int i = 0; i < k; i++) {
            sum += arr[i];
        }
        
        return (int)sum;
        
    }
};