#include <stdio.h>
#include <string.h>

int f(char k[500]) {
    char s[33];//要输出的字符串数组
    int bits[32];
    int  arr[32] = { 0 };
    int i;
    int j;
    int m = strlen(k);
    for (i = 1;i <= m;i++) {
        arr[i % 32] = arr[i % 32] + k[i - 1];   
    }
    for (j = 0;j <= 31;j++) {
        bits[j] = arr[31-j] ^ (arr[j] << 1);
        printf("%c", bits[j] % 85 + 34 );
    }
	printf("\n");
    return 0;
}
int main() {   
    char k[500];
    scanf("%s", &k);
    f(k);
    return 0;
}