#include<stdio.h>
#include<math.h>
#include<string.h>

int main()

{
    int n, t, a, b, c;
    double e, f, g, d, sum;
    scanf("%d", &n);
    while(n) {
        scanf("%d", &t);
        sum=0.0;
        while(t) {
            scanf("%d%d%d", &a, &b, &c);
            e=(double)a;
            f=(double)b;
            g=(double)c;
            d=((e/f)*g)*f;
            sum+=d;
            t--;
        }
        printf("%.0lf\n", sum);
        n--;
    }

    return 0;
}
