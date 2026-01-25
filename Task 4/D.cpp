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

string s1, s2;
int sentPos = 0;
float totalPossible = 0;
float correct = 0;

void recursion(int index, int currPos){
    if(index == s1.size()){
        totalPossible++;
        if(currPos == sentPos)
            correct++;
        return;
    }

    if(s2[index] == '+')
        recursion(index + 1, currPos + 1);
    else if(s2[index] == '-')
        recursion(index + 1, currPos - 1);
    else{
        recursion(index + 1, currPos + 1);
        recursion(index + 1, currPos - 1);
    }
}

void __fouda_0x01(){
    cin >> s1 >> s2;
    for(char &c:s1){
        if(c == '+') sentPos++;
        else sentPos--;
    }

    recursion(0, 0);
    cout << fixed << setprecision(12) << correct / totalPossible << endl;
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