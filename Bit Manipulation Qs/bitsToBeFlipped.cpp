//Count number of bits to be flipped to convert A to B
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    int count=0;
    cin>>a>>b;

    //check which bits are different in a and b by doing the XOR as XOR of different bits=0; 
    //later, count the number of set bits.
    int xor_a_b=a^b;
    while(xor_a_b!=0){
        xor_a_b&=xor_a_b-1;
        count++;
    }
    cout<<count<<endl;
}
// Optimized:
// TC:0(n)
// SC:0(1)