/* Find the Union and Intersection of the two SORTED arrays.
  using two pointers, sets(for union,sorted or unsorted), maps(for union,sorted or unsorted).*/

#include <iostream>
using namespace std;
void printUnion(int arr1[], int arr2[], int m, int n)
{
  int i = 0, j = 0;
  while (i < m && j < n) {

    //to check duplicates
    while(i>0 && i<m && arr1[i]==arr1[i-1])
        i++;
    while(j>0 && j<n && arr2[j]==arr2[j-1])
        j++;

    //start comparing the two SORTED arrays
    if (arr1[i] < arr2[j])
        cout<<arr1[i++]<<" ";

    else if (arr2[j] < arr1[i])
        cout<<arr2[j++]<<" ";

    else {
        cout<<arr2[j++]<<" ";
        i++;
    }
  }

  // Print remaining elements of the larger array 
  while (i < m)
    cout<<arr1[i++]<<" ";

  while (j < n)
    cout<<arr2[j++]<<" ";
}

void printIntersection(int arr1[], int arr2[], int m, int n)
{
  int i = 0, j = 0;
  while (i < m && j < n) {
     if (arr1[i] < arr2[j])
      i++;
     else if (arr2[j] < arr1[i])
      j++;
     else // if arr1[i] == arr2[j] 
     {
       cout<<arr2[j]<<" ";
       i++;
       j++;
     }
    }
}

int main()
{
   int m, n;

   cin>>m;

   int arr1[m];

   for(int i=0; i<m; i++)
    cin>>arr1[i];

   cin>>n;

   int arr2[n];

   for(int i=0; i<n; i++)
    cin>>arr2[i];

  cout<<"union: ";
  printUnion(arr1, arr2, m, n);

  cout<<"intersection: ";
  printIntersection(arr1, arr2, m, n);

  return 0;
}

// //Optimized- two pointer approach
// //TC:O(m+n)
// //SC:O(1)



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int m, n;

//     cin >> m;

//     int arr1[m];

//     for (int i = 0; i < m; i++)
//         cin >> arr1[i];

//     cin >> n;

//     int arr2[n];

//     for (int i = 0; i < n; i++)
//         cin >> arr2[i];
    
//     set<int> s;

//     for (int i = 0; i < n; i++)
//         s.insert(arr1[i]);

//     for (int i = 0; i < m; i++)
//         s.insert(arr2[i]);

//     for (auto itr = s.begin(); itr != s.end(); itr++)
//         cout << *itr<<" ";


// }

// //TC:O(mlogm+nlogn)



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int m,n;
//     cin>>m>>n;
//     int arr1[m];
//     int arr2[n];

//     for(int i=0;i<m;i++){
//         cin>>arr1[i];
//     }
//     for(int i=0;i<n;i++){
//         cin>>arr2[i];
//     }
    
//     map<int, int> mp;

//     for(int i=0;i<m;i++)
//         mp.insert({arr1[i],i});
//     for(int i=0;i<n;i++)
//         mp.insert({arr2[i],i});

//     for(auto it=mp.begin();it!=mp.end();it++)
//         cout<<it->first<<" ";
// }

// //TC:O(m+n)

