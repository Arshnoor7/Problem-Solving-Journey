/*
Author: Arshnoor
Date: 15 August 2025
Problem: Pattern 8 - Inverted Centered Star Pyramid
Platform: GeeksforGeeks
Difficulty: Basic
Problem Link: https://www.geeksforgeeks.org/problems/triangle-pattern-1661493231/1
*/


class Solution {
  public:
    // Function to print inverted centered star pyramid of height n
    void printTriangle(int n) {
        // Outer loop → for each row
        for (int i = 0; i < n; i++) {

            // Print leading spaces
            for (int j = 0; j < i; j++) {
                cout << ' ';
            }

            // Print stars: decreasing count per row
            for (int k = 0; k < 2 * n - 2 * i - 1; k++) {
                cout << '*';
            }

            // Move to the next line after each row
            cout << endl;
        }
    }
};
