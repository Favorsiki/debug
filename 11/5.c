#include <stdio.h>
#include <string.h>

int main() {
    int arr[32];
    int bits[32];
    char str[32];
    char result[32];
    char input;
    int j = 0;
    
    for(int i = 0; i < 32; i++){
        arr[i] = 0;
    }
    
    while (scanf("%c", &input) != EOF) {        //
        str[1] = '\0';
        str[0] = input;
        if (strcmp(str, "\n") == 0) {
            break;
        }
        j++;
        arr[j % 32] += (int)(input);
    }
    
    for (int i = 0; i < 32; i++) {
        bits[i] = (arr[31 - i]) ^ (arr[i] << 1);
        int b = (bits[i] % 85) + 34;
        result[i] = (char)b;
    }
    
    for (int i = 0; i < 32; i++) {
        printf("%c",result[i]);
    }
    printf("\n");
    return 0;
}