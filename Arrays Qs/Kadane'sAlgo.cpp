// Kadane's Algo [V.V.V.V.V IMP]

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