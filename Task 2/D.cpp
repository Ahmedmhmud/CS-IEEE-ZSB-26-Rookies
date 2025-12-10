#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        map<int,int> freq;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            freq[v[i]]++;
        }

        for (int i = 0; i < n; i++) {
            if (freq[v[i]] == 1) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
}
