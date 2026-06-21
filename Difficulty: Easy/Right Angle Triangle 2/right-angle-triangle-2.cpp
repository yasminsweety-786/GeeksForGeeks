class Solution {
  public:
    void printPattern(int n) {
        
        for (int i = 1; i <= n; i++) {

            // First row
            if (i == 1) {
                cout << "*";
            }

            // Last row (base)
            else if (i == n) {
                for (int j = 1; j <= n; j++) {
                    cout << "* ";
                }
            }

            // Middle rows
            else {
                cout << "*";

                for (int j = 1; j <= 2 * i - 3; j++) {
                    cout << " ";
                }

                cout << "*";
            }

            cout << endl;
        }
    }
};