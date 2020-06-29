#include <stdio.h>

int main() {
    int i,N,x;
    int a[51] = {0};
    scanf("%d",&N);
    a[2] = 1;
    a[3] = 1;
    a[4] = 1;
    if (N <= 4) {
        printf("%d",a[N]);
    } else {
        for (i = 5; i < N; i++) {
            a[i] = a[i - 2] + a[i - 3];
        }
        printf("%d",a[N-2]+a[N-3]);
    }
    return 0;
}
