/*
           Nothing is absolute.
     This is the only absolute truth.
*/

#include<bits/stdc++.h>

using namespace std;

using ull = unsigned long long;
using ll = long long;

#define READ freopen("input.txt", "r", stdin)
#define ROUT freopen("output.txt", "w", stdout)
#define pb push_back
#define endl '\n'

///***Don't Send Nudes. Send Codes***///

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

///**** Ass ta THICK Code! ****///

void codehub()
{
    int n, i, j;
    while(cin>>n){
        int a[n], fixedCount=n-1, count=0;
        vector<int>v,d;
        for(i=0; i<n; i++){
            cin>>a[i];
        }
        for(i=0; i<n-1; i++){
            d.pb(abs(a[i]-a[i+1]));
            v.pb(i+1);
        }
        for(i=0; i<n-1; i++){
            for(j=0; j<n-1; j++){
                if(d[j]==v[i])
                    v[i]=0;
            }
        }
        for(i=0; i<n-1; i++){
            if(v[i]==0)
                count++;
        }
        if(count==fixedCount)
            cout<<"Jolly"<<endl;
        else
            cout<<"Not jolly"<<endl;
    }
}

int main()

{
    ///fileIO();
    fasterIO();

    codehub();

    return 0;
}
