// // Write a program to cyclically rotate an array by one.

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr1[n];
//     for(int i=0;i<n;i++){
//         cin>>arr1[i];
//     }
//     cout<<arr1[n-1]<<" ";
//     for(int i=0;i<n-1;i++){
//         cout<<arr1[i]<<" ";
//     }

// }

// //TC:O(n)
// //SC:O(1)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int i=0,j=n-1;
    while(i!=j){
        swap(arr1[i],arr1[j]);
        i++;
    }
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }

}
//optimized-two pointer approach
// //TC:O(n)
// //SC:O(1)