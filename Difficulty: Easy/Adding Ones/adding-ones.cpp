class Solution {
  public:
    vector<int> update(int n, vector<int>& updates) {
        // code here
        vector<int>mp(n,0);

                for(auto it:updates){
                    mp[it-1]++;
                }

                int mul = 0;
                vector<int>v(n,0);

                for(int i = 0;i<n;i++){
                    mul += mp[i];
                    v[i] = mul;
                }
                return v;
    }
};