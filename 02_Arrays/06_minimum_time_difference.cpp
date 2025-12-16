// Problem:

// Check the minimum difference (in minutes) between any two time points given in 24-hour format (HH:MM).
// Time is circular, meaning after 23:59 it continues from 00:00.

//  Approach:
// 1. Convert each time string into total minutes.
// 2. Store all times in a vector.
// 3. Sort the vector of minutes.
// 4. Find the minimum difference between adjacent times.
// 5. Also check the circular difference between the last and first time.
// 6. Return the minimum of all differences.
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

int findMinDifference(vector<string>& timePoints) {
vector<int> minutes;

    // Convert time to minutes 
    for (string time : timePoints) {

        int hours = (time[0] - '0') * 10 + (time[1] - '0');
        int mins  = (time[3] - '0') * 10 + (time[4] - '0');

        int totalMinutes = hours * 60 + mins;
        minutes.push_back(totalMinutes);
    }

sort(minutes.begin(), minutes.end());

 int minDiff = INT_MAX;
    for (int i = 1; i < minutes.size(); i++) {
        minDiff = min(minDiff, minutes[i] - minutes[i - 1]);
    }

 int circularDiff = 1440 - minutes.back() + minutes.front();
    minDiff = min(minDiff, circularDiff);

    return minDiff;
}

int main() {

    vector<string> timePoints = {"05:30", "22:10", "00:15", "12:00"};

    cout << "Minimum Time Difference: "
         << findMinDifference(timePoints)
         << " minutes" << endl;

    return 0;
}