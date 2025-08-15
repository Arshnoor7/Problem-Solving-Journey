// Pattern 3: Right-Angled Number Pyramid
// Example for n = 5:
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

class Solution {
  public:
    void printTriangle(int n) {
        // Outer loop controls the number of rows
        for (int i = 1; i <= n; i++) {
            // Inner loop prints numbers from 1 to i for each row
            for (int j = 1; j <= i; j++) {
                cout << j << ' '; // Print current number with a space
            }
            cout << endl; // Move to next line after each row
        }
    }
};
