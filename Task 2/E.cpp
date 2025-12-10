#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    string s;
    map<char,int> mp;
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
        mp[s[i]]++;
    }
    for(char i = 'a'; i <= 'z'; i++){
        if(mp[i] == 0){
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";

}