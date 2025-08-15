class Solution {
  public:
    // Function to print a square pattern of '*' with side length n
    void printSquare(int n) {
        
        // Outer loop for number of rows
        for (int i = 0; i < n; i++) {
            
            // Inner loop for number of columns
            for (int j = 0; j < n; j++) {
                cout << "* "; // Print star with space
            }
            
            cout << endl; // Move to the next line after each row
        }
    }
};
