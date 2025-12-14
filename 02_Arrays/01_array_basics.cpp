#include <iostream>
using namespace std;

// --------------------------------------------------------------------
// 1. Function to calculate SUM of all numbers in an array
// --------------------------------------------------------------------
int sumOfArray(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

// --------------------------------------------------------------------
// 2. Function to calculate PRODUCT of all numbers in an array
// --------------------------------------------------------------------
int productOfArray(int arr[], int n) {
    int product = 1;
    for(int i = 0; i < n; i++) {
        product *= arr[i];
    }
    return product;
}

// --------------------------------------------------------------------
// 3. Function to REVERSE an array
// --------------------------------------------------------------------
void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1;
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    cout << "Array elements: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Calling SUM function
    cout << "Sum of array = " << sumOfArray(arr, n) << endl;

    // Calling PRODUCT function
    cout << "Product of array = " << productOfArray(arr, n) << endl;

    // Calling REVERSE function
    reverseArray(arr, n);

    cout << "Reversed array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

 return 0;
}
