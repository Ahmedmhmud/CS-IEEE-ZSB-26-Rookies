#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t, n;
    cin >> t;
    string s1, s2;
    while(t--){
        map<char,int> mp1, mp2;
        cin >> n >> s1 >> s2;
        for(int i = 0; i < n; i++){
            mp1[s1[i]]++;
            mp2[s2[i]]++;
        }
        
        bool flag = true;
        for(char i = 'a'; i <= 'z'; i++){
            if(mp1[i] != mp2[i]){
                cout << "NO\n";
                flag = false;
                break;
            }
        }

        if(flag) cout << "YES\n";
    }
}