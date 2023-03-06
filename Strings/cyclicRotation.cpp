// // Check if given strings are rotations of each other or not
#include <bits/stdc++.h>
using namespace std;

// bool check_rotation(string s, string goal)
// {
// 	if (s.size() != goal.size())
// 		return false;

// 	queue<char> q1;
// 	for (int i = 0; i < s.size(); i++) {
// 		q1.push(s[i]);
// 	}

// 	queue<char> q2;
// 	for (int i = 0; i < goal.size(); i++) {
// 		q2.push(goal[i]);
// 	}

// 	int k = goal.size();
// 	while (k--) {
// 		char ch = q2.front();
// 		q2.pop();
// 		q2.push(ch);
// 		if (q2 == q1)
// 			return true;
// 	}
// 	return false;
// }

// TC:O(n1*n2)
// SC:O(n)

// bool check_rotation(string s, string goal)
// {
// 	if (s.size() != goal.size())
// 		return false;

// 	string join=s+goal;
//     return (join.find(goal) != string::npos);
// }

// TC:O(n)
// SC:O(n)

bool check_rotation(string s, string goal)
{
	if (s.size() != goal.size())
		return false;

	
}
int main()
{
	string s,s1;
    cin>>s>>s1;

	if (check_rotation(s, s1))
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
	return 0;
}

