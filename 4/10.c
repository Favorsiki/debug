#include <stdio.h>

int main() {
    int n = 10;
    int m;
    int numbers[10];
    int i;
    int max;
    int k;
    int j;
    int o;

    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    for (j = 0; j < n; j++) {
        max = -99999999;
        for(k = j; k <=  n - 1; k++){
            if (max < numbers[k]) {
                max =  numbers[k];
		m = k;
            }
           
        }
        o = numbers[j];
        numbers[j] = numbers[m];
        numbers[m] = o;
    }
    for (int q = 0; q < n; q++) {
        if (q == 9) {
            printf("%d", numbers[q]);
        } else {
            printf("%d ", numbers[q]);
        }
    }

    return 0;
}
