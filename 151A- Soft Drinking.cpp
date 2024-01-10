#include<stdio.h>

int main()
{
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    int min_toasts = k * l / nl;
    if (min_toasts > c * d) {
        min_toasts = c * d;
    }
    if (min_toasts > p / np) {
        min_toasts = p / np;
    }
    printf("%d",min_toasts / n);

    return 0;
}
