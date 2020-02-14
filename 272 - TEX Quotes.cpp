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
    //ROUT;
}

int main()

{
    //fileIO();
    //fasterIO();

    string s;
    int cnt=0;

	while (getline(cin,s)) {
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '"') {
				cnt++;
				if (cnt & 1)
					cout<<"``";
				else
					cout<<"''";
			} else
				cout<<s[i];
		}
		cout<<endl;
	}

    exit(0);
}
