// Merge 2 sorted arrays without using Extra space.

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, m;
//     int i = 0, j = 0, k = 0;
//     cin >> n >> m;
//     int arr1[n], arr2[m], arr3[n + m];
       
//    cout<<"enter sorted arrays:"<<endl;
//     for (i = 0; i < n; i++)
//         cin >> arr1[i];
//     for (i = 0; i < m; i++)
//         cin >> arr2[i];

//     i = 0, j = 0;
//     while (i < n)
//     {
//         arr3[k++] = arr1[i++];
//     }

//     while (j < m)
//     {
//         arr3[k++] = arr2[j++];
//     }

//     sort(arr3, arr3 + n + m);
//     cout<<"output:"<<endl; 
//     for (int i=0; i < n+m; i++)
//         cout << arr3[i] << " ";
 
//     return 0;
// }

// // TC:0((n+m)*log(n+m))+0(n)+0(m)
// // SC:0(n+m)




// #include <bits/stdc++.h>
// using namespace std;

// void fixArr2(int arr2[],int n){
//     for(int i=1;i<n;i++){
//         if(arr2[i]<arr2[i-1])
//             swap(arr2[i],arr2[i-1]);
//     }
// }

// int main()
// {
//     int n, m;
//     int i = 0, j = 0;
//     cin >> n >> m;
//     int arr1[n], arr2[m], arr3[n + m];

//     cout<<"enter sorted arrays:"<<endl;
//     for (i = 0; i < n; i++)
//         cin >> arr1[i];
//     for (i = 0; i < m; i++)
//         cin >> arr2[i];

//     i = 0, j = 0;   //act as pointers

//     while(i<n){
//         if(arr1[i]>arr2[j]){
//             swap(arr1[i],arr2[j]);

//             fixArr2(arr2,m);    //internal swapping of second array to keep it sorted.
//         }    
//         i++;
            
//     }  
//     cout<<"output:"<<endl; 
//     for(i=0;i<n;i++){
//         cout<<arr1[i]<<" ";
//     }
//     for(i=0;i<m;i++){
//         cout<<arr2[i]<<" ";
//     }
// }

// // TC:0(n*m)
// // SC:0(1)



#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    int i = 0, j = 0, k = 0;
    cin >> n >> m;
    int arr1[n], arr2[m], arr3[n + m];
       
    cout<<"enter sorted arrays:"<<endl;

    for (i = 0; i < n; i++)
        cin >> arr1[i];

    for (i = 0; i < m; i++)
        cin >> arr2[i];

    int gap = ceil((float)(n + m) / 2);
    while (gap > 0) {
        int i = 0;
        int j = gap;
        while (j < (n + m)) {
            if (j < n && arr1[i] > arr1[j]) 
                swap(arr1[i], arr1[j]);
            else if (j >= n && i < n && arr1[i] > arr2[j - n]) 
                swap(arr1[i], arr2[j - n]);
            else if (j >= n && i >= n && arr2[i - n] > arr2[j - n]) 
                swap(arr2[i - n], arr2[j - n]);
            
            j++;
            i++;
        }
        if (gap == 1) 
            gap = 0;
        else 
            gap = ceil((float) gap / 2);
        
    }

    cout<<"output:"<<endl; 

    for(i=0;i<n;i++)
        cout<<arr1[i]<<" ";
    
    for(i=0;i<m;i++)
        cout<<arr2[i]<<" ";
    
}
// Optimised:
// TC:0(n+m)
// SC:0(1)