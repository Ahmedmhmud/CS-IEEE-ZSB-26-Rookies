#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    string s;
    cin >> s;

    bool flagAll = true;
    bool flagExceptFirst = true;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] <= 'z' && s[i] >= 'a') flagAll = false;
    }

    for(int i = 1; i < s.size(); i++) {
        if(s[i] <= 'z' && s[i] >= 'a') flagExceptFirst = false;
    }

    if(flagAll || (islower(s[0]) && flagExceptFirst)) {
        for(int i = 0; i < s.size(); i++) {
            if(s[i] <= 'z' && s[i] >= 'a') s[i] -= 32;
            else s[i] += 32;
        }
    }
    
    cout << s;
}