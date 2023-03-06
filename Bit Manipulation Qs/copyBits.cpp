// Copy set bits in a range

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int a,b,l,r;
//     cin>>a>>b>>l>>r;
//     if(l<1 || r>32) cout<<"out of range bits"<<endl;

//     //we create a mask for each bit that is set in 'a'
//     for(int i=l;i<r;i++){
//         int mask=1<<(i-1);  

//         if(b&mask==1)
//             a=a|mask;
//     }
//     cout<<a<<endl;
// }
// TC:O(r)
// SC:O(1)



#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, l, r; // l and r are for range
    cin >> a >> b >> l >> r;
    if (l < 1 || r > 32)
    {
        cout << "bits of out range" << endl;
    }
    // eg: a=1010 10101 01    l=3,r=7(copy ONLY set bits)
    //     b=1001 00110 01
    //     
    // new b=1001 10111 01
    int mask = 1 << (r - l + 1);// 1= 0000 00000 01   mask=1<<5=0000 01000 00
                                //                            1=0000 00000 01
    mask--;                     //                  mask=mask-1=0000 00111 11
    mask = mask << (l - 1);     //                 mask=mask<<2=0000 11111 00
    mask = mask & a;            //                  mask=mask&a=0000 10101 00
    b = b | mask;               //                     b=b|mask=1001 10111 01
    cout << b;
}
// Optimised:
// TC:O(1)
// SC:O(1)