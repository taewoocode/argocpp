#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> filenames(N);
    
    for (int i = 0; i < N; ++i) {
        cin >> filenames[i];
    }

    // Initialize the pattern with the first filename
    string pattern = filenames[0];

    // Compare with other filenames
    for (int i = 1; i < N; ++i) {
        for (int j = 0; j < pattern.size(); ++j) {
            if (pattern[j] != filenames[i][j]) {
                pattern[j] = '?';
            }
        }
    }

    // Output the resulting pattern
    cout << pattern << endl;

    return 0;
}
