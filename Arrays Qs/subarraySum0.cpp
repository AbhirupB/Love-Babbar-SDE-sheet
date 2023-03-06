#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    unordered_set<int> hashSetSums;

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];

        if(sum==0 || hashSetSums.find(sum)!=hashSetSums.end())
            cout<<"found\n";
        hashSetSums.insert(sum);
    }
    cout<<"not found\n";
}

// TC:O(n)
// Sc:O(n)