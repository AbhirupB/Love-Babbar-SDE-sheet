// find duplicate in an array of N+1 Integers
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     sort(arr, arr + n);

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == arr[i + 1])
//         {
//             cout << arr[i] << endl;
//             break;
//         }
//     }
// }

// TC:0(n*logn)     due to Sorting algo.
// SC:0(1)

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     // In a Frequency Array, the index is an element of another array.
//     int freq[n + 1]={0};

//     for (int i = 0; i < n; i++)
//     {
//         if (freq[arr[i]] == 0)
//             freq[arr[i]] += 1;
//         else
//             cout << arr[i] << endl;
//     }
// }

// TC:0(n)  due to array traversal.
// SC:0(n)  due to frequency array.


// ( use only if modifying of array is allowed, i.e ARRAY IS NOT READ-ONLY !!)
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

    for (int i = 0; i < n; i++)
    {

        int index = abs(arr[i]);    //modifying array values all to +ve.

        if (arr[index] < 0)         // the repeated element will again become an index.
            cout << index << endl;

        arr[index] = -arr[index];
    }
}

// Optimised:
// TC:0(n)
// SC:0(1)