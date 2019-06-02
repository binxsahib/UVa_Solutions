#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pb push_back

int main()

{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ll n;
    while(cin>>n) {
        if(n<0)
            break;
        else if(n%2==0)
            cout<<n*(n/2)+(n/2)+1<<endl;
        else
            cout<<n*(n/2)+n+1<<endl;
    }

    return 0;
}
