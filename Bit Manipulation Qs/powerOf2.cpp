// Program to find whether a no is power of two
// #include <bits/stdc++.h>
// using namespace std;

// bool powerOf2(int n)
// {
//     if (n == 0)
//         return 0;

//     return (ceil(log2(n)) == floor(log2(n)));
// }
// int main()
// {
//     int n;
//     cin >> n;
//     string y = powerOf2(n) ? "yes" : "no";
//     cout << y << endl;
// }
// TC:O(1)
// SC:O(1)



// #include <bits/stdc++.h>
// using namespace std;

// bool powerOf2(int n)
// {
//     if (n == 0)
//         return 0;
//     //keep dividing n by 2 until n=1 and the remainder is 0;
//     //if at any point the remainder is not 0 and n is not 1, IT IS NOT A POWER OF 2
//     while(n!=1){
//         if(n%2!=0)
//             return 0;
//         n/=2;
//     }
//     return 1;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     powerOf2(n)? cout<<"yes":cout<<"no";
// }
// TC:O(logn)  //coz of division by 2
// SC:O(1)



// #include <bits/stdc++.h>
// using namespace std;

// bool powerOf2(int n)
// {
//     int c = 0;
//     //every power of 2 has only 1 set bit.
//     while (n > 0) {
//         if ((n & 1) == 1) {
//             c++;
//         }
//         n = n >> 1; // keep dividing n by 2 using right shift operator
//     }

//     if (c == 1) { // if cnt = 1 only then it is power of 2
//         return true;
//     }
//     return false;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     powerOf2(n)? cout<<"yes":cout<<"no";
// }
// TC:0(n)
// SC:0(1)



#include <bits/stdc++.h>
using namespace std;

bool powerOf2(int n)
{
    return (n != 0) && ((n & (n - 1) == 0));
}

int main()
{
    int n;
    cin >> n;
    powerOf2(n) ? cout << "yes" : cout << "no";
}
// Optimised:Brian Kernighan’s algorithm
// TC:O(1)
// SC:O(1)