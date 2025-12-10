#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n, a, b, c, answer = 0;
    cin >> n;
    while (n--)
    {
        cin >> a >> b >> c;
        int count = 0;
        count = a + b + c;
        if(count >= 2) answer++;
    }

    cout << answer << endl;
}