#include <stdio.h>
int fun (int n) {
    int i,j,num;
    for (i = 1; i <= n; i++) {
        for (j = 2; j <= i; j++) {
            if (i % j == 0) {
                break;
            }
        }
        if (j == i) {
            num = i;
        }
    }
    return num;
}

int main() {
    int n, i, j;
    scanf("%d",&n);
    for (i = 1; i <= n; i++) {
        for (j = 2; j <= i; j++) {
            if (i % j == 0) {
                break;
            }
        }
        if (j == i && i != fun(n)) {
            printf("%d\n",i);
        } else if (j == i && i == fun(n)) {
            printf("%d",i);
        }
    }    
    return 0;
}
