// Count total set bits in all numbers from 1 to n
//  #include<bits/stdc++.h>
//  using namespace std;

// int count_bits(int n){
//   int c=0;
//   while(n>=1){
//     if((n&1)==1) c++;
//     n>>=1;
//   }
//   return c;
// }

// void solve()
// {
//   int n; cin>>n;
//   int counter=0;
//   for(int i=1; i<=n; i++){
//     counter += count_bits(i);
//   }
//   cout<<counter<<endl;
// }

// int main() {
//   solve();
//   return 0;
// }
// TC:0(nlogn)
// SC:0(1)

#include <bits/stdc++.h>
using namespace std;

// get the maximum power of 2 <= the given number N;
// 2^0=1 2^1=10  2^2=100 2^3=1000  2^4=10000

// Note: x<<y = x*2^y
// Note: x>>y = x/(2^y)

int maxpowerof2tilln(int n)
{
  int x = 0;

  while ((1 << x) <= n) // 1<<x gives you powers of 2(this statement checks: 2^x<=n)
    x++;

  return x - 1;
}

int solve(int n)
{
  if (n == 0)
    return 0; // base case

  int x = maxpowerof2tilln(n);                        // max power of 2
  int setBits_uptill_2raisex = x * (1 << (x - 1));    // get the set bits uptill 2^x-1
  int setBits_at_msb_From_2raisex = n - (1 << x) + 1; // for the rest of the numbers we see that MSB has 1(all bits set); get them
  int restBits = n - (1 << x);                        // rest of the bits left will form the numbers in repeating fashion; solve recursively.
  int ans = setBits_uptill_2raisex + setBits_at_msb_From_2raisex + solve(restBits);
  return ans;
}
int main()
{
  int n;
  cin >> n;
  cout << solve(n) << endl;
}
// the answer is: (2^x-1)*x + (n-2^x)+1 + recursivelyForTheRestBits(2^x-1)

// Optimised:
// TC:O(logn)
// SC:O(1)