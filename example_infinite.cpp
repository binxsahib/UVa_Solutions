#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define pb push_back

int main()

{
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int c;
    cin>>c;
    while(c--) {
        int n, sum=0, count=0;
        cin>>n;
        int a[n], i;
        double avg;
        for(i=0; i<n; i++) {
            cin>>a[i];
            sum+=a[i];
        }
        avg=(double)sum/(double)n;
        for(i=0; i<n; i++) {
            if(a[i]>avg) {
                count++;
            }
        }
        printf("%.3lf", ((double)count/(double)n)*100.00);
        cout<<"%"<<endl;
    }
    return 0;
}
