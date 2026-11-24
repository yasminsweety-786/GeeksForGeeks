class Solution {
public:
    vector<int> findPairs(vector<int>& arr) {
        int n = arr.size();
        unordered_map<long long, pair<int, int>> mp;
        mp.max_load_factor(0.7);
        mp.reserve(1LL * n * (n - 1) / 2);

        vector<int> ans = {-1, -1, -1, -1};

        // Generate all pairs in lexicographical order.
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                long long sum = (long long)arr[i] + arr[j];

                if (mp.find(sum) == mp.end()) {
                    // Store only the first pair for each sum.
                    mp[sum] = {i, j};
                }
                else {
                    auto [a, b] = mp[sum];

                    // Check whether all four indices are distinct.
                    if (a != i && a != j &&
                        b != i && b != j) {

                        vector<int> curr = {a, b, i, j};

                        // Keep the lexicographically smallest answer.
                        if (ans[0] == -1 || curr < ans) {
                            ans = curr;
                        }
                    }
                }
            }
        }
        return ans;
    }
};