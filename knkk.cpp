#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to calculate Hamming distance
int calculateHammingDistance(const string& original, const string& rearranged) {
    int distance = 0;
    for (size_t i = 0; i < original.size(); ++i) {
        if (original[i] != rearranged[i]) {
            ++distance;
        }
    }
    return distance;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        string binaryString;
        int costA, costB;
        cin >> binaryString;
        cin >> costA >> costB; // Read A and B, though not needed here

        // Check for invalid input
        if (binaryString.find_first_not_of("01") != string::npos) {
            cout << "INVALID" << endl;
            continue;
        }

        // Process the string to calculate the minimum Hamming distance
        int count0 = count(binaryString.begin(), binaryString.end(), '0');
    int count1 = binaryString.size() - count0;

    // Generate two possible minimized-cost strings
    string arrangement1(count0, '0'); // "000...111" form
    arrangement1 += string(count1, '1');

    string arrangement2(count1, '1'); // "111...000" form
    arrangement2 += string(count0, '0');

    // Calculate Hamming distances for both arrangements
    int hammingDistance1 = calculateHammingDistance(binaryString, arrangement1);
    int hammingDistance2 = calculateHammingDistance(binaryString, arrangement2);

    // Output the minimum Hamming distance
    cout << min(hammingDistance1, hammingDistance2) << endl;
    }

    return 0;
}
