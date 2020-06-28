#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        for (int j = num -i +1; j >= 1; j--) {
            printf("%d", j);
            if ( j != 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}