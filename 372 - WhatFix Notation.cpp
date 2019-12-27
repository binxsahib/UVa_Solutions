#include<bits/stdc++.h>

using namespace std;

#define endl '\n'

string s;
string s2;
int sz;
char ch;

stack<char>stk;

int op_value(char s) {
    if(s=='+' || s=='-') return 1;
    if(s=='/' || s=='*' || s=='%') return 2;
    if(s=='^') return 3;
    return 0;
}

string infix_to_postfix() {
    string temp;
    sz = s.size();
    for(int i = 0; i!=sz; i++) {
        if(s[i]==' ') continue;
        else if(isalpha(s[i])) temp+=s[i];
        else if(s[i]=='(') stk.push(s[i]);
        else if(s[i]==')') {
            while(!stk.empty() && stk.top()!='(') {
                ch=stk.top();
                stk.pop();
                temp+=ch;
            }
            stk.pop();
        } else {
            while(!stk.empty() && op_value(s[i])<op_value(stk.top())) {
                ch=stk.top();
                stk.pop();
                temp+=ch;
            }
            stk.push(s[i]);
        }
    }
    while(!stk.empty()) {
        if(stk.top()!='(') temp+=stk.top();
        stk.pop();
    }
    return temp;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    getline(cin, s);
    cout<<"INFIX   => "<<s<<endl;
    getline(cin, s2);
    cout<<"PREFIX  => "<<s2<<endl;
    string tt = infix_to_postfix();
    cout<<"POSTFIX => ";
    for(int j = 0; j<tt.size(); j++) {
        if(j==tt.size()-1) cout<<tt[j]<<endl;
        else cout<<tt[j]<<" ";
    }

    exit(0);
}
