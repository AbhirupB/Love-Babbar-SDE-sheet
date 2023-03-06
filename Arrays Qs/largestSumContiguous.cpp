// find Largest sum contiguous Subarray V.IMP

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     int max_sum = INT_MIN;

//     int i, j, k, sum = 0;
//     for (i = 0; i < n; i++)
//     {
//         for (j = i; j < n; j++)
//         {
//             int sum = 0;
//             for (k = i; k <= j; k++)
//             {
//                 sum += arr[k];
//             }
//             if (sum > max_sum)
//                 max_sum = sum;
//         }
//     }
//     cout << max_sum << endl;
// }

// TC:0(n^3)
// SC:0(1)

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     int max_sum = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         int curr_sum = 0;
//         for (int j = i; j < n; j++)
//         {
//             curr_sum += arr[j];
//             if (curr_sum > max_sum)
//                 max_sum = curr_sum;
//         }
//     }
//     return max_sum;
// }

// TC:0(n^2)
// SC:0(1)

#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n)
{

    long long currSum = 0;
    long long maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum = max(0ll, currSum + arr[i]);

        maxSum = max(currSum, maxSum);

        if (currSum < 0)
            currSum = 0;
    }
    return maxSum;
}
int main()
{
    int numberOfElements;
    cin >> numberOfElements;

    int arrayOfElements[numberOfElements];
    for (int i = 0; i < numberOfElements; i++)
    {
        cin >> arrayOfElements[i];
    }
    cout << maxSubarraySum(arrayOfElements, numberOfElements) << endl;

    return 0;
}

// optimised-KADANE'S ALGO
// TC:O(N)
// SC:O(1)