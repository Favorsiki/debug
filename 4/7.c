#include <stdio.h>

int main() {
    int n = 10;
    int m;
    int numbers[10];
    int i;
    int max;
    int inter;
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i <= 9; i++) {
        int maxnum = -99999999;
        for (m = i; m <= 9; m++) {
            if (maxnum  < numbers[m]) {
                max = m;
		maxnum = numbers[m];
            }
        }
	if (max != i) {
            inter = numbers[i];
            numbers[i] = numbers[max];
            numbers[max] = inter;
        }
    
    for (i = 0; i <= 9; i++) {
        printf("%d", numbers[i]);
        if (i != 9) {
            printf(" ");
        }
    }

    return 0;
}
