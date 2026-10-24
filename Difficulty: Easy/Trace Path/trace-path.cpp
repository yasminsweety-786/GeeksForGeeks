class Solution {
public:
    bool isPossible(int n, int m, string& s) {

        int vertical_offset = 0;
        int horizontal_offset = 0;
        int minH = 0, maxH = 0;
        int minV = 0, maxV = 0;

        for (auto it : s) {
            if (it == 'L')
                minH = min(minH, --horizontal_offset);
            else if (it == 'R')
                maxH = max(maxH, ++horizontal_offset);
            else if (it == 'U')
                minV = min(minV, --vertical_offset);
            else if (it == 'D')
                maxV = max(maxV, ++vertical_offset);

            if (abs(minH) + maxH >= m)
                return false;
            if (abs(minV) + maxV >= n)
                return false;
        }

        return true;
    }
};