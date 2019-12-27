#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    if(n<2)
        return false;
    for(long long i=2; i*i<=n; i++) {
        if (n%i==0)
            return false;
    }
    return true;
}

int main()
{
    vector<int> primes;

    for(int i=2; i<=15000; i++){
        if(isPrime(i))
            primes.push_back(i);
    }

    int k;
    cin>>k;

    while(k--){
        int q;
        cin>>q;
        cout<<primes[q-1]<<endl;
    }

    return 0;
}
