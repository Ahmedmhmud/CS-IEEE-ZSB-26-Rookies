// To understand what is happening in this file, please go to the end of the file.

#include "bits/stdc++.h"

#define int long long
#define vi vector< int >
#define fastIO() ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define all(x) x.begin(),x.end()
#define endl '\n'

using namespace std;

/*

    ███████╗ ██████╗ ██╗   ██╗██████╗  █████╗ 
    ██╔════╝██╔═══██╗██║   ██║██╔══██╗██╔══██╗
    █████╗  ██║   ██║██║   ██║██║  ██║███████║
    ██╔══╝  ██║   ██║██║   ██║██║  ██║██╔══██║
    ██║     ╚██████╔╝╚██████╔╝██████╔╝██║  ██║
    ╚═╝      ╚═════╝  ╚═════╝ ╚═════╝ ╚═╝  ╚═╝

*/

template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }



void __fouda_0x01(){
    int n, a, b;
    cin >> n;
    a = b = n;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            if(__gcd(i, n / i) == 1){
                if(max(i, n / i) < max(a, b)){
                    a = i; b = n / i;
                }
            }
        }
    }

    cout << a << ' ' << b << endl;
}
 
int32_t main()
{
    fastIO();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        __fouda_0x01();
    }
    return 0;
}

// to understand what is happening in this file, please go to the starting of the file.