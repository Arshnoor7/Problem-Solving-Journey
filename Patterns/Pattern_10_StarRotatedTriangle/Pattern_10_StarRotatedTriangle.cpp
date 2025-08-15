// Function to print the N-Star Rotated Triangle pattern
void nStarTriangle(int n) {
    // Upper half of the rotated triangle
    for (int i = 0; i < n; i++) {
        // Print stars equal to row number (i+1)
        for (int j = 0; j <= i; j++) {
            cout << '*';
        }
        cout << endl; // Move to next line
    }

    // Lower half of the rotated triangle
    for (int i = n - 2; i >= 0; i--) {
        // Print stars equal to row number (i+1)
        for (int j = 0; j <= i; j++) {
            cout << '*';
        }
        cout << endl; // Move to next line
    }
}
