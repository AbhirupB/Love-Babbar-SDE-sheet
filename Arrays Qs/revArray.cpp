
#include<iostream>
#include<algorithm>

using namespace std;
int revArray(int arr[], int index, int size){
        if(index<size){
            swap(arr[index],arr[size]);
            revArray(arr, index+1, size-1);
        }
        
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    revArray(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}