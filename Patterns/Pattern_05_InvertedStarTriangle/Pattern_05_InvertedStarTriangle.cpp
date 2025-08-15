/*
Author: Arshnoor
Date: 15 August 2025
Problem: Pattern 5 - Print an inverted triangle star pattern
Platform: GeeksforGeeks
Difficulty: Basic
*/

class Solution {
  public:
    // Function to print the star pattern
    void printTriangle(int n) {
        // Outer loop for each row (from n stars down to 1)
        for (int i = n; i > 0; i--) {

            // Inner loop to print stars for the current row
            for (int j = i; j > 0; j--) {
                cout << '*';       // print star
                if (j > 1) cout << ' '; // print space except after last star
            }

            // Move to the next line after each row
            cout << "\n";
        }
    }
};
