class Solution {
  public:
    void printTriangle(int n) {
        // Outer loop runs for each row
        for (int i = 1; i <= n; i++) {
            
            // Inner loop prints '*' for the current row
            for (int j = 1; j <= i; j++) {
                cout << "* ";
            }
            
            // Move to the next line after printing stars
            cout << endl;
        }
    }
};
