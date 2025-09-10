#include <iostream>
#include <string>
using namespace std;

// Naive pattern matching function
int naiveSearch(const string& text, const string& pattern) {
    int n = text.size();
    int m = pattern.size();

    if (m == 0) return 0; // Empty pattern convention

    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && text[i + j] == pattern[j]) {
            j++;
        }
        if (j == m) return i; // Found at index i
    }
    return -1; // Not found
}

int main() {
    // Test cases

    // 1. Pattern at the beginning
    cout << naiveSearch("hello world", "hello") << endl; // 0

    // 2. Pattern at the end
    cout << naiveSearch("this is a test", "test") << endl; // 10

    // 3. Pattern not present
    cout << naiveSearch("abcdefg", "xyz") << endl; // -1

    // 4. Empty pattern
    cout << naiveSearch("abcdef", "") << endl; // 0

    return 0;
}