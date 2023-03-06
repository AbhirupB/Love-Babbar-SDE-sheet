//Min and Max in an array using sort func, linear search, odd/even approach for least comparisons.
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int i;
    int max,min;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }


    // sort(arr,arr+n);
    // cout<<"minimum="<<arr[0]<<endl;
    // cout<<"maximum="<<arr[n]<<endl;
    

    // int max=arr[0];
    // int min=arr[0];
    // for(i=0;i<n;i++){
    //     if(arr[i]>=max)
    //         max=arr[i];
    //     if(arr[i]<min)
    //         min=arr[i];
    // }
    // cout<<"min="<<min<<endl;
    // cout<<"max="<<max<<endl;


    // TC:O(n)
    // SC:O(1)
    if(n%2==0){     //if n is even use first two elements as max and min.
        if(arr[0]>arr[1]){
             max=arr[0];
             min=arr[1];
        }
        else{
             max=arr[1];
             min=arr[0];
        }
        
        i=2;    //starting index 2 as first two elements are used

    }
    else{
         min=arr[0];
         max=arr[0];

        i=1;     //starting index 1 as only first element is used
    }

    //start comparing in pairs from 1 to n-1 or 2 to n-1 depending on n being odd/even.
    while(i<n-1){
        if(arr[i]>arr[i+1]){
            if(arr[i]>max)
                max=arr[i];
            if(arr[i+1]<min)
                min=arr[i+1];
        }
        else
            if(arr[i+1]>max)
                max=arr[i+1];
            if(arr[i]<min)
                min=arr[i];

        i+=2;   //increment by 2 as pairs are used.
    }
    
    cout<<"max="<<max<<endl;
    cout<<"min="<<min<<endl;
    return 0;
}
    