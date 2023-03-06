// Merge Intervals


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<pair<int, int>> v;

//     for (int i = 0; i < n; i++)
//     {
//         int a, b;
//         cin>>a>>b;
//         v.push_back({a, b});
//     }

//     sort(v.begin(), v.end());
//     vector<pair<int, int>> ans;

//     for (int i = 0; i < n; i++)
//     {
//         int start = v[i].first, end = v[i].second;

//         if (!ans.empty())
//         {
//             if (start <= ans.back().second)
//             {
//                 continue;
//             }
//         }
//         for (int j = i + 1; j < n; j++)
//         {
//             if (v[j].first <= end)
//             {
//                 end = max(end, v[j].second);
//             }
//         }

//         end = max(end, v[i].second);

//         ans.push_back({start, end});
//     }
//     for (auto it : ans)
//     {
//         cout << it.first << " " << it.second << "\n";
//     }
// }

// TC:O(nlogn)+O(n^2) sorting,nested loop
// SC:0(n)  extra vector



#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin>>a>>b;
        v.push_back({a, b});
    }
    vector < vector < int >> merged;
    if(v.size()==0) //edge case
        return 0;

    sort(v.begin(),v.end());

  for (int i = 0; i < v.size(); i++) {
    if (merged.empty() || merged.back()[1] < v[i][0]) {
      vector < int > vi = {
        v[i][0],
        v[i][1]
      };

    merged.push_back(vi);

    } else {
      merged.back()[1] = max(merged.back()[1], v[i][1]);
    }
  }

  for (auto it: merged) {
    cout << it[0] << " " << it[1] << "\n";
  }

}
//Optimised:
// TC:0(n*logn)+0(n) sorting, traversal
// SC:0(n)  storing(extra vector)


