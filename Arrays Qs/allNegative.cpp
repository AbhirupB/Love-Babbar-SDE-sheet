// // Move all the negative elements to one side of the array 

// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     sort(arr,arr+n);

//     for(int j=0;j<n;j++){
//         cout<<arr[j]<<" ";
//     }
//     return 0;
// }

// // TC:O(nlogn)
// // SC:O(1)



#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    return 0;
} 

//Optimised- partioning process of QuickSort
//TC:O(n)
//SC:O(1)


// #include<iostream>
// #include<algorithm>

// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int start=0,end=n-1;
//     while(start<=end){
//         if(arr[start]<0 && arr[end]<0)
//             start+=1;
//         else if(arr[start]<0 && arr[end]>0){
//             start+=1;
//             end-=1;
//         }   
//         else if(arr[start]>0 && arr[end]<0){
//             swap(arr[start],arr[end]);
//             start+=1;
//             end-=1;
//         }
//         else
//             end-=1;
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
    
// }
// // Optiminsed- two pointer approach
// // TC:O(n)
// // SC:O(1)