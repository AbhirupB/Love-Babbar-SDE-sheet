// // Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo.


// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i,c0 = 0, c1 = 0, c2 = 0;
//     int arr[n];
//     cout<<"input:";
//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         if (arr[i] == 0)
//             c0++;
//         else if (arr[i] == 1)
//             c1++;
//         else if (arr[i] == 2)
//             c2++;
//         else
//             exit(0);
//     }

//     int j = 0;
//     while (c0 > 0)
//     {
//         arr[j++] = 0;
//         c0--;
//     }

//     while (c1 > 0)
//     {
//         arr[j++] = 1;
//         c1--;
//     }

//     while (c2 > 0)
//     {
//         arr[j++] = 2;
//         c2--;
//     }

//     cout<<"output:";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

// return 0;
// }

// // TC:O(n) But array is traversed twice which may not be accepted! 1)to count 0,1,2.. 2) update the array..
// // SC:O(1)


#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int start=0;int mid=0;int end=n-1;  //pointers
    while(mid<=end){
        switch(arr[mid]){
            case 0:swap(arr[start++],arr[mid++]);
                   break;
            case 1:mid++;
                   break;
            case 2:swap(arr[mid],arr[end--]);
                   break;
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

}
// Optimized solution
// TC:O(n)
// SC:O(1)
