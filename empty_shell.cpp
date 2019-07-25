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

bool isArsmstrong(int n)
{
    int rem, sum, i=1, x, j, remSum;
    x=n;
    while(i){
        sum=0;
        n=x;
        while(n!=0){
            remSum=1;
            rem=n%10;
            n/=10;
            for(j=1; j<=i; j++){
                remSum=remSum*rem;
            }
            sum+=remSum;
        }
        if(sum<x)
            i++;
        else if(sum>x)
            return false;
        else
            return true;
    }

}

void solve()
{
    int t, n;

    cin>>t;

    while(t--){
        cin>>n;

        if(isArsmstrong(n))
            cout<<"Armstrong"<<endl;
        else
            cout<<"Not Armstrong"<<endl;
    }
}

int main()

{
    ///fileIO();
    fasterIO();

    solve();

    return 0;
}
