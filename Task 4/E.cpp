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

    string s;
    set<string> st;

    void recursion(int index, string curr){
        if(index == curr.size()){
            st.insert(curr);
            return;
        }

        for(int i = index; i < curr.size(); i++){
            swap(curr[index], curr[i]);
            recursion(index + 1, curr);
            swap(curr[index], curr[i]);
        }
    }

    void __fouda_0x01(){
        cin >> s;
        st.insert(s);
        recursion(0, s);
        cout << st.size() << endl;
        for(auto it: st){
            cout << it << endl;
        }
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