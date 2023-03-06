//Count set bits in an integer
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int count=0;
//     if(n==0) cout<<'0';

//     while(n!=0){
//         if(n&1==1)
//             count++;
//         n>>=1;
//     }

//     cout<<count;
//     return 0;
// }
// TC:O(longn)
// SC:0(1)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    
    while(n!=0){
        n&=(n-1);
        count++;
    }

    cout<<count<<endl;
}
//Slightly optimised:
// TC:0(logn)
// SC:0(1)