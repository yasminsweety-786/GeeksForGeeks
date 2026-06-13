class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        int i = 0, j = 0;
        int n = a.size(), m = b.size();
        
        // Traverse both arrays
        while (i < n && j < m) {
            if (a[i] == b[j]) {
                i++; j++;   // match found, move both
            } else if (a[i] < b[j]) {
                i++;        // move in a[] to find match
            } else {
                return false; // b[j] not found in a[]
            }
        }
        return (j == m);
    } 
        
    
};