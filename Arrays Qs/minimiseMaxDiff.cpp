//Minimise the maximum difference between heights [V.IMP]
#include<bits/stdc++.h>

using namespace std;

int minMaxDiff(int arr[],int size,int changeNum){

    sort(arr,arr+size);
    if(size==1)return 0;    //base case if number of towers is 1

    int differenceHeight=arr[size-1]-arr[0];

    int tempmax,tempmin;

    for(int loopVar=1;loopVar<size;loopVar++){

        if(arr[loopVar]-changeNum<0) continue;  //negative heights are neglected

        tempmax=max(arr[loopVar-1]+changeNum,arr[size-1]-changeNum);
        tempmin=min(arr[loopVar]+changeNum,arr[0]+changeNum);

        differenceHeight=min(tempmax-tempmin,differenceHeight);
    }

    return differenceHeight;
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;

    cout<<minMaxDiff(arr,size,k)<<endl;
}

// TC:O(Nlog(N))
// SC:O(N)