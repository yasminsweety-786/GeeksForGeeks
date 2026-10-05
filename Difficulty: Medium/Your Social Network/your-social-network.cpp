class Solution {
  public:
    vector<vector<int>> socialNetwork(vector<int>& arr) {
        // code here
        vector<vector<pair<int,int>>>vec(arr.size()+2);
        int curr = 2;
        for(int &i: arr){
               for(auto &[x , y]: vec[i]){
                   vec[curr].push_back({x , y+1});
               }

           vec[curr].push_back({i , 1});
           curr++;
        }
        vector<vector<int>>ans;
        for(int i = 1 ; i<vec.size() ; i++){
            for(auto &[x , y]: vec[i]){
                ans.push_back({i , x , y});
            }
        }
        return ans;
    }
};