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
    int b;
    int c;
    scanf("%d",&a);
    for (b = 1;b <= a; b++) {
	for(c = 2; c <= b; c++) {
	    if(b % c == 0) {
		break;
	    }
	}
	if(b == c && b != fun(a)){
	    printf("%d\n",b);
	} else if (c == b && b == fun(a)) {
	    printf("%d",b);
	}
    }
    return 0;
}
