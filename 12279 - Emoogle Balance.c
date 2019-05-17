#include<stdio.h>

int diff(int x);

int main()

{
    int k, i=0, j, n, c=0, co=0, t=75, ck;

    for(i=1; i<=t; i++) {
        scanf("%d", &k);
        if(k==0)
            break;
        ck=diff(k);
        printf("Case %d: %d\n", i, ck);
    }

    return 0;
}

int diff(int x)
{
    int j, n, c=0, co=0, d;
    for(j=0; j<x; j++) {
        scanf("%d", &n);
        if(n>0)
            c++;
        if(n==0)
            co++;
        }
     d=c-co;
     return d;
}
