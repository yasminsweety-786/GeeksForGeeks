class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        vector <int> ans;
        int d= b*b -4*a*c;
        if ( d<0){
            ans.push_back(-1);
            
        }else{
            double root1 = (-b + sqrt(d)) /(2.0*a);
            double root2 = (-b - sqrt(d)) /(2.0*a);
            ans.push_back((int) floor(max(root1,root2)));
            ans.push_back((int) floor(min(root1,root2)));
        }
        return ans;
    }
};