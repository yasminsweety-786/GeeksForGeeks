class Solution {
  public:
    int marks(int a) {
        // code here
        
          try {
            if (a < 0 || a > 100) {
                throw a;   // throw exception if marks are invalid
            }
            return a;      // valid marks
        }
        catch (int) {
            return -1;     // invalid marks handled here
        }
    }
};