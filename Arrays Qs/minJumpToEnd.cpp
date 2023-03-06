// Minimum no. of Jumps to reach end of an array
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int posIndex = 0;
    int desIndex = 0;
    int jump = 0;

    for (int i = 0; i < n - 1; i++)
    {
        // To check at each index whether we had reached a better destination using the previous index or not.
        desIndex = max(desIndex, arr[i] + i);

        // Jump only when best index is reached.
        if (posIndex == i)
        {
            posIndex = desIndex;
            jump++;
        }
    }
    cout << jump << endl;
}
// Optimized:
// TC:0(n)
// SC:0(1)
