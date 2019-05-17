#include<stdio.h>
#include<math.h>

int div_f(int x);

int main()

{
    int l, u, l1, u1, max_div, n, t, temp, test, i, max_n, j;
    scanf("%d", &test);
    for(j=0; j<test; j++) {
        scanf("%d%d", &l, &u);
        l1=l;
        u1=u;
        if(l>u) {
            t=u;
            u=l;
            l=t;
        }
        max_div=div_f(l);
        max_n=l;
        for(n=l; n<=u; n++) {
            temp=div_f(n);
            if(temp>max_div){
                max_div=temp;
                max_n=n;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n", l1, u1, max_n, max_div);
    }
    return 0;
}

int div_f(int x)

{
    int i, c=0, m, div;
    m=sqrt(x);
    for(i=1; i<=m; i++) {
        if(x%i==0)
            c++;
    }
    if(x==m*m) {
        div=(2*c)-1;
    }
    else{
        div=2*c;
    }
    return div;
}
