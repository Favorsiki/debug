#include <stdio.h>
int main() {
    int shuru;
    int geshu;
    int hangshu;
    int shuru2;
    scanf("%d",&shuru);
    shuru2 = shuru;
    for ( hangshu = 1 ; hangshu <= shuru; hangshu ++) {
        shuru2 = shuru - hangshu + 1;
        for (geshu = 1 ; geshu <= shuru2 ; geshu ++) {
            printf("%d", shuru2 - geshu +1);
            if (shuru2 != geshu) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}