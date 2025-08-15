// Function to print N-Star Diamond pattern
void nStarDiamond(int n) {
    // First half of the diamond (upper part)
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << ' ';
        }
        // Print stars (odd count: 1, 3, 5, ...)
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << '*';
        }
        cout << endl; // Move to next line
    }

    // Second half of the diamond (lower part)
    for (int i = n - 1; i >= 0; i--) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << ' ';
        }
        // Print stars (odd count: 1, 3, 5, ...)
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << '*';
        }
        cout << endl; // Move to next line
    }
}
