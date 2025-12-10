#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int x;
    cin >> x;
    if(x != 2 && x != 0 && ((x-2)%2 == 0)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

}