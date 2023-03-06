//Reverse a string using while loop and recursion.

#include <iostream>
#include <algorithm>
using namespace std;
 
string reverse(string &str, int l, int h)
{
    // if (l < h)
    // {
    //     swap(str[l], str[h]);
    //     reverse(str, l + 1, h - 1);
    // }
    while(l<h){     //do not use for loop!!
        char temp=str[l];
        str[l]=str[h];
        str[h]=temp;
        l++;
        h--;
    }
    return str;
}
 
int main()
{
    string s;
    cin>>s;
 
    reverse(s, 0, s.length() - 1);
    cout << "Reverse of the given string is " << s;
 
    return 0;
}