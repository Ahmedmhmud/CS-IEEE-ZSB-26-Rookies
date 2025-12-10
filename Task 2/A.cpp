#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t, n;
    string s;
    cin >> t;
    while(t--){
        cin >> n >> s;
        int answer = 0;
        int freq[100] = {0};
        for(int i = 0; i < n; i++){
            freq[s[i]]++;
        }

        for(char i = 'A'; i <= 'Z'; i++){
            if(freq[i] > 0) answer += (freq[i] + 1);
        }

        cout << answer << "\n";
    }
}