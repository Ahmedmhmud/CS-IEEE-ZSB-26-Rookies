#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int k, r;
    cin >> k >> r;
    int i = 1;
    while((k*i)%10 != r && (k*i)%10 != 0){
        i++;
    }
    cout << i;
}