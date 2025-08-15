class Solution {
  public:
    void printTriangle(int n) {
        // Outer loop → Controls the number of rows (from 1 to n)
        for (int i = 1; i <= n; i++) {
            
            // Inner loop → Prints the same number 'i' exactly 'i' times
            for (int j = 1; j <= i; j++) {
                cout << i << ' '; // print the number with space
            }
            
            // Move to the next line after printing each row
            cout << endl;
        }
    }
};
