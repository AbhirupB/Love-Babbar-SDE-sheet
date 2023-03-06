// Rearrange positive and negative numbers in O(n) time and O(1) extra space
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i, j, k, arr[n];
//     for(i=0;i<n;i++)
//         cin>>arr[i];
    
//     vector<int> pos;
//     vector<int> neg;

//     for(i=0;i<n;i++){
//         if(arr[i]<0)
//             neg.push_back(arr[i]);
//         else    
//             pos.push_back(arr[i]);
//     }

//     i=0, j=0, k=0;
//     while(i<neg.size() && j<pos.size()){
//         arr[k++]=neg[i++];
//         arr[k++]=pos[j++];
//     }
//     while(i<neg.size()){
//         arr[k++]=neg[i++];
       
//     }
//     while(j<pos.size()){
//         arr[k++]=neg[i++];
        
//     }
    
//     for(i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// TC: O(n)
// SC: )(n)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j, k;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
}