#include<stdio.h>

int mid(int x, int y, int z);

int main()

{
    int a, b, c, d, t, i;
    scanf("%d", &t);
    for(i=1; i<=t; i++) {
        scanf("%d %d %d", &a, &b, &c);
        d = mid(a,b,c);
        printf("Case %d: %d\n", i, d);
    }
    return 0;
}

int mid(int x, int y, int z)

{
    int s,v,t;
    if(x>y) {
        t=y;
        y=x;
        x=t;
    }
    if(x>z){
        s=z;
        z=x;
        x=s;
    }
    if(y>z) {
        v=z;
        z=y;
        y=v;
    }
    return y;
}

