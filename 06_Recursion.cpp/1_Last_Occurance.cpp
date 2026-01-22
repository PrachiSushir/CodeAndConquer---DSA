
#include <iostream>
using namespace std;

int lastOccurrence(int arr[], int n, int i, int x) {
    // Base case
    if (i == n)
        return -1;

    // Recursive call
    int ans = lastOccurrence(arr, n, i + 1, x);

    // If found later, return it
    if (ans != -1)
        return ans;

    // Else check current index
    if (arr[i] == x)
        return i;

    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4};
    int n = 5;
    int x = 2;

    cout << lastOccurrence(arr, n, 0, x);
    return 0;
}
