// Find position of the only set bit
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int c=0;    //position
//     if(n==0) cout<<"-1"<<endl;
//     if((n&(n-1))==0){   //check if n is power of 2, coz only powers of 2 have only 1 set bit that is the RSB
//         while(n!=0){
//             c++;
//             n>>=1;
//         } 
//         cout<<c<<endl;
//     }
//     else cout<<"-1"<<endl;
// }
// TC:O(logn)
// SC:O(1)


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==0) cout<<"-1"<<endl;
    if((n&(n-1))==0){   //check if n is power of 2, coz only powers of 2 have only 1 set bit that is the RSB
        int c=log2(n)+1;    //position=number of bits in the number, coz we need to get the position of RSB(rightmost set bit).
        cout<<c<<endl;
    }
    else cout<<"-1"<<endl;
}
// TC:O(logn)
// SC:O(1)