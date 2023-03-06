// find all pairs on integer array whose sum is equal to given number

// #include<bits/stdc++.h>
// using namespace std;

// void printPairs(int arr[], int n, int sum){
//     int i, j;
//     for(i=0;i<n;i++){
//         for(j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==sum){
//                 cout<<arr[i]<<" "<<arr[j]<<endl;
//             }
//         }
//     }
// }
// int main(){
//     int N, i;
//     cin>>N;
//     int a[N];
//     int s;
//     cin>>s;
//     for(i=0;i<N;i++){
//         cin>>a[i];
//     }
//     printPairs(a, N, s);
//     return 0;
// }

// //TC:O(n^2)
// //SC:O(1)

// #include<bits/stdc++.h>
// using namespace std;

// void printPairs(int arr[], int n, int sum){
//     int low=0, high=n-1;
//     int currSum=0;
//     while(low<high){
//         currSum=arr[low]+arr[high];
//         if(currSum==sum){
//             cout<<arr[low]<<" "<<arr[high]<<endl;
//         }
//         if(currSum>sum) high--;
//         else    low++;
//     }
// }
// int main(){
//     int N, i;
//     cin>>N;
//     int a[N];

//     for(i=0;i<N;i++){
//         cin>>a[i];
//     }

//     sort(a,a+N);

//     int s;
//     cin>>s;

//     printPairs(a, N, s);
//     return 0;
// }

// //TC:O(nlogn)
// //SC:O(1)

// COUNTING THE NUMBER OF SUCH PAIRS:

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getPairsCount(int arr[], int n, int k)
    {
        // code here
        unordered_map<int, int> m;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (m[k - arr[i]] >= 1)
                ans += m[k - arr[i]];
            m[arr[i]]++;
        }
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }

    return 0;
}
