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
    int a;
    int i;
    int j;
    scanf("%d",&a);
    if (a == 2) {
        printf("2");
    } else {
        printf("2\n");
        for (j = 2; j <= a; j++) {
            for(i = 2; i < j; i++) {
                if(j % i == 0) {
                    break;
                } else if (i == j - 1 && j != fun(a)) {
                    printf("%d\n",j);
                } else if (i == j - 1 && j == fun(a)) {
                	printf("%d",j);
				}
            }
        }
    }

    return 0;
}
