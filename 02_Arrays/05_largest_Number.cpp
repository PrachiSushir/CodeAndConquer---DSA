#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Custom comparator
bool compare(string a, string b) {
    return a + b > b + a;
}

string largestNumber(vector<int>& nums) {
    vector<string> arr;

    // Convert integers to strings
    for (int num : nums) {
        arr.push_back(to_string(num));
    }

    // Sort using custom comparator
    sort(arr.begin(), arr.end(), compare);

    // Edge case: if the largest element is "0"
    if (arr[0] == "0") {
        return "0";
    }

    // Combine result
    string result = "";
    for (string s : arr) {
        result += s;
    }

    return result;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    string answer = largestNumber(nums);
    cout << "Largest Number: " << answer << endl;

    return 0;
}