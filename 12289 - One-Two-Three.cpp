#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define pb push_back

int main()

{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    string s;
    int n;
    cin>>n;
    while(n--) {
        cin>>s;
        if(s.size()==5)
            cout<<3<<endl;
        else {
            if((s[0]=='t' && s[1]=='w') || (s[0]=='t' && s[2]=='o') || (s[1]=='w' && s[2]=='o'))
                cout<<2<<endl;
            else
                cout<<1<<endl;
        }
    }
    return 0;
}
