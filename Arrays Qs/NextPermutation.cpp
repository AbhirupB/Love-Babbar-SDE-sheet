// Next Permutation

#include <bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int> &nums)
{
    int n = nums.size(), k, l;

    // finding first breakpoint,i.e,index where decreaing point is found by traversing from the back.
    for (k = n - 2; k >= 0; k--)
    {
        if (nums[k] < nums[k + 1])
            break;
    }
    // if breakpoint no found, simply reverse because it is the last possible permutation given and 
        // we output the next permutation,i.e,the first one.
    if (k < 0)
        reverse(nums.begin(), nums.end());
    // if breakpoint found, traverse again from back, and find the index that has number greater than the first breakpoint. 
    // SWAP them. Reverse the part on the right of after swap so that we get the smallest permutation.
    else
    {
        for (l = n - 1; l >= 0; l--)
        {
            if (nums[l] > nums[k])
                break;
        }
        swap(nums[l], nums[k]);
        reverse(nums.begin() + (k + 1), nums.end());
    }
    return nums;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    nextPermutation(v);
    for (auto it: v) 
        cout << it << " ";
}

// Optimised:
// TC:0(n)
// SC:0(1)