// Best time to buy and Sell stock
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int minPrice=arr[0],maxProfit=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            maxProfit=max(arr[i]-minPrice,maxProfit);
        }
        else
            minPrice=min(arr[i],minPrice);
    }

    cout<<maxProfit<<endl;
}
// Optimal solution:
// TC:O(n)
// SC:)(1)
