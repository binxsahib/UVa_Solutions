#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ull n, test, ck;

    cin>>n;

    while(n!=0)
    {
        ull ans = 0, min, max;
        vector<ull>v;
        test = n;
        while(n--) {
            int k;
            cin>>k;
            for(int i=0; i<k; i++) {
                cin>>ck;
                v.push_back(ck);
            }
            if(k!=0) {
                sort(begin(v), end(v));
                for(int k=0; k<v.size(); k++) {
                    if(v[k]!=0) {
                        min = v[k];
                        v[k] = 0;
                        break;
                    }
                }
                for(int k=v.size()-1; k>=0; k--) {
                    if(v[k]!=0) {
                        max = v[k];
                        v[k] = 0;
                        break;
                    }
                }
                ans += (max-min);
            } else {
                for(int k=0; k<v.size(); k++) {
                    if(v[k]!=0) {
                        min = v[k];
                        v[k] = 0;
                        break;
                    }
                }
                for(int k=v.size()-1; k>=0; k--) {
                    if(v[k]!=0) {
                        max = v[k];
                        v[k] = 0;
                        break;
                    }
                }
                ans += (max-min);
            }
        }

        cout<<ans<<endl;

        cin>>n;
    }

    exit(0);
}
