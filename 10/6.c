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
    int a,b,c;
    scanf("%d",&c);

    for (b = 2; b <= c; b++) {
        for(a = 2; a < b; a++) {
            if (b % a == 0) {
                printf("");
                break;
            }
        }
        if (a >= b && b != fun(c)) {
            printf("%d\n",b);
        } else if (a >= b && b == fun(c)) {
        	printf("%d",b);
		}
        
    }
    return 0;
}
