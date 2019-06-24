#include<bits/stdc++.h>

using namespace std;

using ull = unsigned long long;
using ll = long long;

#define pb push_back
#define endl '\n'

///(Moan) ey (hoe) pakhi jeno (Oral) dibe <3

void fuck()
{
    string s;
    int i, count;
    while(getline(cin,s)){
        count=0;
        for(i=0; i<s.size(); i++){
            if(!isalpha(s[i]) && isalpha(s[i-1]))
                count++;
        }
        cout<<count<<endl;
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
