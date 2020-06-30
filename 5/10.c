#include <stdio.h>
#include <string.h>
int main() {
    char names[10][21];
    int i,j;
    for (i = 0; i < 10; i++) {
        scanf("%s",&names[i]);
    }
    
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10 - i -1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                char temp[21];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1],temp);
            }
        }
    }
    for (i = 0; i < 9; i++) {
        printf("%s\n",names[i]);
    }
    printf("%s",names[9]);
    return 0;
}