#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pb push_back

int main()

{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n, k;
    while(cin>>n>>k) {
        int sum=n, rem;
        while(n>=k) {
            rem=n%k;
            sum+=(n/k);
            n=(n/k)+rem;
        }
        cout<<sum<<endl;
    }

    return 0;
}
