class Solution {
  public:
  int missingNum(vector<int>& arr) {
        int n = arr.size() + 1;

        int x1 = 0, x2 = 0;

        for(int i = 1; i <= n; i++)
            x1 ^= i;

        for(int x : arr)
            x2 ^= x;

        return x1 ^ x2;
    }
};