/*
LeetCode 2125 - Number of Laser Beams in a Bank

Problem Statement:
------------------
You are given a string array 'bank' where each string represents a row of a bank.
Each character in the string is either:
- '1' → a security device
- '0' → empty space

A laser beam can be formed between two different rows if:
1. Both rows contain at least one security device ('1').
2. All rows between them contain zero security devices.

The number of laser beams between two such rows is equal to:
(number of devices in first row) × (number of devices in second row).

Your task is to return the total number of laser beams in the bank.

------------------------------------------------
 Approach:
-------------------
1. Traverse the bank row by row.
2. For each row, count the number of '1's (security devices).
3. Ignore rows that contain 0 devices.
4. For every valid row:
   - Multiply the current row's device count with the previous valid row's device count.
   - Add the result to the answer.
5. Update the previous row device count.

Key Insight:
------------
Only consecutive rows that contain at least one device can form laser beams.
Rows with zero devices break the connection.

------------------------------------------------

Time Complexity:  O(n × m)
Space Complexity: O(1)

Where:
- n = number of rows
- m = number of columns in each row
*/
#include <iostream>
#include <vector>
using namespace std;

int numberOfBeams(vector<string>& bank) {
    int prev = 0;   // devices in previous valid row
    int ans = 0;

    for (string row : bank) {
        int curr = 0;

        // Count devices in current row
        for (char ch : row) {
            if (ch == '1') {
                curr++;
            }
        }

        // If current row has devices
        if (curr > 0) {
            ans += prev * curr;
            prev = curr;
        }
    }

    return ans;
}

int main() {
    vector<string> bank = {
        "011001",
        "000000",
        "010100",
        "001000"
    };

    cout << numberOfBeams(bank);
    return 0;
}