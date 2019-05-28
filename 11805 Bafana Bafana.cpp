#include<bits/stdc++.h>

using namespace std;

int main()

{
    ios::sync_with_stdio(0);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t, i;

    cin>>t;

    for(i=1; i<=t; i++) {
        int n, k, p, ans, count=0;
        cin>>n>>k>>p;
        if(k==n)
            k=1;
        else
            k++;
        while(k) {
            ans=k;
            count++;
            if(count==p)
                break;
            if(k==n)
                k=1;
            else
                k++;
        }
        cout<<"Case "<<i<<": "<<ans<<"\n";
    }

    return 0;
}
