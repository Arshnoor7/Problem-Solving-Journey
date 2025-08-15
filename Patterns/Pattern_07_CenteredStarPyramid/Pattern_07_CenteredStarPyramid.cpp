class Solution {
  public:
    // Function to print a centered star pyramid of height n
    void printTriangle(int n) {
        // Outer loop → for each row
        for (int i = 0; i < n; i++) {
            
            // Print leading spaces to center the stars
            for (int j = 0; j < n - i - 1; j++) {
                cout << ' ';
            }

            // Print stars: 2*i + 1 stars per row
            for (int k = 0; k < 2 * i + 1; k++) {
                cout << '*';
            }

            // Move to the next line after each row
            cout << endl;
        }
    }
};
