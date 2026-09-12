class Solution {
  public:
    int maxProduct(vector<int> &arr, int k) {
        // code here
        int n = arr.size();

               vector<long long> mx(k + 1, LLONG_MIN);
               vector<long long> mn(k + 1, LLONG_MAX);

               mx[0] = 1;
               mn[0] = 1;

               for (int x : arr) {
                   for (int j = k; j >= 1; j--) {

                       long long oldMax = mx[j - 1];
                       long long oldMin = mn[j - 1];

                       if (oldMax != LLONG_MIN) {
                           mx[j] = max(mx[j], oldMax * x);
                           mn[j] = min(mn[j], oldMax * x);
                       }

                       if (oldMin != LLONG_MAX) {
                           mx[j] = max(mx[j], oldMin * x);
                           mn[j] = min(mn[j], oldMin * x);
                       }
                   }
               }

               return (int)mx[k];
    }
};