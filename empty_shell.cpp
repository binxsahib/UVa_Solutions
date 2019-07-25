/*
           Nothing is absolute.
     This is the only absolute truth.
*/

#include<bits/stdc++.h>

using namespace std;

using ull = unsigned long long;
using ll = long long;

#define READ freopen("in.txt", "r", stdin)
#define ROUT freopen("out.txt", "w", stdout)
#define pb push_back
#define endl '\n'

void fasterIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void fileIO()
{
    READ;
    ROUT;
}

void solve()
{
    int t, flag, i;
    string a, b;

    cin>>t;

    while(t--){
        flag=1;
        cin>>a>>b;

        if(a.size()!=b.size())
            flag=0;
        else{
            for(i=0; i<a.size(); i++){
                if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
                    continue;
                else{
                    if(a[i]!=b[i]){
                        flag=0;
                        break;
                    }
                }
            }
        }

        if(flag)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}

int main()

{
    ///fileIO();
    fasterIO();

    solve();

    return 0;
}
