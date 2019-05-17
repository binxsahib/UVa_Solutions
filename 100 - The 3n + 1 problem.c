#include<stdio.h>

int cyc_l(int i);

int main()

{
    int i, j, i1, j1, max_cyc_l, n, t, temp;
    while(scanf("%d%d", &i, &j) != EOF) {
        i1=i;
        j1=j;
        if(i>j) {
            t=j;
            j=i;
            i=t;
        }
        max_cyc_l=cyc_l(i);
        for(n=i+1; n<=j; n++) {
            temp=cyc_l(n);
            if(temp>max_cyc_l)
                max_cyc_l=temp;
        }
        printf("%d %d %d\n", i1, j1, max_cyc_l);
    }
    return 0;
}

int cyc_l(int i)

{
    int a=1;
    while(i!=1) {
        if(i%2!=0)
            i=3*i + 1;
        else
            i=i/2;
        a++;
    }
    return a;
}
