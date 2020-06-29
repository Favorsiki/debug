#include <stdio.h>
#include <string.h>
int main() {
    char string[10][21];
    char str[21];
    int i, j;
    for (i = 0;i < 10; i++) {
    	scanf("%s",&string[i]);
    } 
    for (i = 0; i < 9; i++) {
        for (j = 0; j <= 8-i; j++) {
            if (strcmp(string[j+1], string[j]) < 0) {
                strcpy(str,string[j+1]);
                strcpy(string[j+1],string[j]);
                strcpy(string[j],str);
            }
        }
    }
    for (i = 0; i < 9; i++) {
        printf("%s\n",string[i]);
    }
    printf("%s",string[9]);
    return 0;
}