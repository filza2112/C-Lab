 //wap to find the maximum and minimum sums of contiguous subarrays within a given array also print the subarrays 


#include <bits/stdc++.h>
using namespace std;
int sub(int arr[], int n, int k)
{
    int max_sum = 0;
    for (int i = 0; i + k <= n; i++) {
        int temp = 0;
        for (int j = i; j < i + k; j++) {
            temp += arr[j];
        }
        if (temp > max_sum)
            max_sum = temp;
    }
 
    return max_sum;
}
int main()
{
    int arr[] = { 1, 4, 2, 10, 2, 3, 1, 0, 20 };
    int k = 4;
    int n = sizeof(arr) / sizeof(int);
    int max_sum;
 
    // by brute force
    max_sum = sub(arr, n, k);
    cout << max_sum << endl;
 
    return 0;
}