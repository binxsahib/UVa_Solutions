#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

#define pb push_back

int main()

{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t, i;
    cin>>t;
    for(i=1; i<=t; i++) {
        int n, j, high=0, low=0;
        cin>>n;
        int a[n];
        for(j=0; j<n; j++)
            cin>>a[j];
        for(j=1; j<n; j++) {
            if(a[j]>a[j-1])
                high++;
            else if(a[j]<a[j-1])
                low++;
        }
        cout<<"Case "<<i<<": "<<high<<" "<<low<<endl;
    }

    return 0;
}
