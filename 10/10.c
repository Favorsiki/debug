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
    int i;
    int j;
    int N;
    scanf("%d",&N);
    for (i = 1;i <= N; i++) {
        for(j = 2; j <= i; j++) {
            if(i % j == 0) {
                break;
            }
        }
        if(i == j && i != fun(N)){
            printf("%d\n",i);
        } else if (j == i && i == fun(N)) {
            printf("%d",i);
        }
    }
    return 0;
}
