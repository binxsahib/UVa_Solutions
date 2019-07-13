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
    int n, s, d, x, y;
    cin>>n;
    while(n--){
        cin>>s>>d;
        x=(s+d)/2;
        y=s-x;
        if(x+y==s && x-y==d && x>=0 && y>=0)
            cout<<x<<" "<<y<<endl;
        else
            cout<<"impossible"<<endl;
    }
}

int main()

{
    ///fileIO();
    fasterIO();

    codehub();

    return 0;
}
