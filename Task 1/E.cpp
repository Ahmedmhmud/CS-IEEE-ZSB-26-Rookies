#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t;
    char c;
    vector<char> codeforces = {'c', 'o', 'd', 'e', 'f', 'r', 's'};
    cin >> t;
    while(t--){
        cin >> c;
        if(find(codeforces.begin(), codeforces.end(), c) != codeforces.end()) cout << "YES\n";
        else cout << "NO\n";
    }
}