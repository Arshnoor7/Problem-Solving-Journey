class Solution {
  public:
    // Function to print the pattern
    void printTriangle(int n) {
        // Outer loop controls the number of rows
        for (int i = n; i > 0; i--) {
            // Inner loop prints numbers from 1 to i
            for (int j = 1; j <= i; j++) {
                cout << j << ' '; // Print number and space
            }
            cout << "\n"; // Move to the next line after each row
        }
    }
};
