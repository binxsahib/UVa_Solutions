#include<bits/stdc++.h>

using namespace std;

using ull = unsigned long long;
using ll = long long;

#define pb push_back
#define endl '\n'

///(Moan) ey (hoe) pakhi jeno (Oral) dibe <3

void fuck()
{
    int a, b, c;
    cin>>a>>b>>c;
    while(a!=0 && b!=0 && c!=0){
        vector<int>v;
        v.pb(a);
        v.pb(b);
        v.pb(c);
        sort(begin(v),end(v));
        if(pow(v[2],2)==(pow(v[0],2)+pow(v[1],2)))
            cout<<"right"<<endl;
        else
            cout<<"wrong"<<endl;
        cin>>a>>b>>c;
    }
}

int main()

{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    fuck();

    return 0;
}
