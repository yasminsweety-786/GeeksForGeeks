class Solution {
  public:
    int closestNumber(int n, int m) {
        // code here
        
          int q = n / m;
        int cand1 = m * q;
        int cand2 = m * (q + 1);
        int cand3 = m * (q - 1);

        
        int ans = cand1;

        
        if (abs(cand2 - n) < abs(ans - n) ||
           (abs(cand2 - n) == abs(ans - n) && abs(cand2) > abs(ans))) {
            ans = cand2;
        }

    
        if (abs(cand3 - n) < abs(ans - n) ||
           (abs(cand3 - n) == abs(ans - n) && abs(cand3) > abs(ans))) {
            ans = cand3;
        }

        return ans;
    }
};