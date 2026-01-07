
/*
# PROBLEM STATEMENT:
Given an array arr[] of N integers where arr[i] represents the number of pages 
in the i-th book, and an integer M representing the number of students.

The task is to allocate all the books to M students such that:
1. Each student is assigned at least one book.
2. Books are allocated in contiguous order.
3. A book cannot be split between students.

The objective is to minimize the maximum number of pages assigned to any student.
If allocation is not possible, return -1.

# APPROACH
1. The minimum possible value of the answer is the maximum number of pages in a single book,
   because a book cannot be split.
2. The maximum possible value of the answer is the sum of all pages,
   when one student reads all books.
3. Apply Binary Search on this range [max(arr), sum(arr)].
4. For a mid value (maxAllowedPages), check whether it is possible to allocate books
   to students such that no student reads more than maxAllowedPages.
5. Use a greedy approach for validation:
   - Assign books to the current student until the page limit is exceeded.
   - If exceeded, assign books to a new student.
6. If allocation is possible, try to minimize the result by moving left in binary search.
   Otherwise, move right.
7. The final answer is the minimum valid maxAllowedPages.

# TIME COMPLEXITY
Let N be the number of books and S be the sum of pages.

Binary Search Complexity: O(log S)
Validation (Greedy Check): O(N)

Overall Time Complexity: O(N log S)

# SPACE COMPLEXITY
O(1) extra space (excluding input array)

# REAL LIFE APPLICATIONS
1. Task Distribution:
   Allocating workloads to employees such that no employee is overburdened.

2. CPU Scheduling:
   Distributing processes among processors while minimizing the maximum load.

3. Library Management:
   Assigning books to readers so that reading effort is balanced.

4. Data Partitioning:
   Dividing large datasets among servers to reduce maximum processing time.

5. Project Management:
   Assigning project modules to teams ensuring fair workload distribution.

*/
// LOGIC:
#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int>&arr,int n, int m, int maxAllowedPages){
    int students = 1, pages = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]> maxAllowedPages){
           return false;

        } 
        if(pages+ arr[i]<= maxAllowedPages){
            pages+=arr[i];
        }else {
            students++;
            pages = arr[i];

        }
    }
    return students > m? false : true;

}
int allocateBooks(vector<int>arr,int n, int m){
    // if number of student is greater than size of array
    if(m>n){
return -1;
    }

    int sum = 0;
    for(int i=0; i<n; i++){
        sum +=arr[i];
    }
    int ans = -1;
    int st = 0;
    int end = sum;
    while(st<= end){
        int mid = st +(end - st)/2;
        if(isValid(arr, n, m, mid)){
            ans = mid;
            end = mid-1;
        } else {
           st = mid+1;
        }
    }
    return ans;
}

int main(){
vector<int>arr = {2,1,3,4};
int n = 4, m = 2;
cout<<allocateBooks(arr, n, m);
    return 0;
}