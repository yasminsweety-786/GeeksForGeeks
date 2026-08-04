class Solution {
  public:
    int countPairs(vector<int>& arr, int k) {
        // code here
         sort ( arr.begin(), arr.end());
         int n= arr.size();
         int count =0;
         int j =0;
         for ( int i=0; i<n; i++){
             while ( j<n && arr[j]- arr[i]<k){
                 j++;
                 
             }
             count +=(j-i-1);
         }
        
        return count ;
    }
};