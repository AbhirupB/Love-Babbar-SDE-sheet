// Find the two non-repeating elements in an array of repeating elements
//  #include<bits/stdc++.h>
//  using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//         cin>>arr[i];

//     for(int i=0;i<n;i++){
//         int count=0;
//         for(int j=0;j<n;j++){
//             if(arr[j]==arr[i])
//                 count++;
//         }
//         if(count==1)    cout<<arr[i]<<" ";
//     }
// }
// TC:0(n^2)
// SC:0(1)


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//         cin>>arr[i];

//     map<int,int> mpp;
//     for(int i=0;i<n;i++){
//         mpp[arr[i]]++;
//     }
//     for(auto it:mpp){
//         if(it.second==1)
//             cout<<it.first<<" ";
//     }
// }
// TC:0(nlogn)
// SC:0(n)


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int xor_val = arr[0];
    for (int i = 1; i < n; i++)
        xor_val = xor_val ^ arr[i];

    int set_bit_no=xor_val & ~(xor_val-1);
    // int index_set_bit = 0;
    // while(xor_val){
    //     if(xor_val&1==0)
    //         break;
    //     index_set_bit++;
    //     xor_val>>=1;
    // }

    int xor1 = 0, xor2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] & set_bit_no)
            xor1 = xor1 ^ arr[i];
        else
            xor2 = xor2 ^ arr[i];
    }
    cout << xor1 << " " << xor2 << endl;
}
// optimised:
// TC:0(n)
// SC:0(1)