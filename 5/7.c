#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void swap (char (*b)[31], char (*c)[31]) {
    char* temp=(char *)malloc(31);
	strcmp(temp, *b);
	strcmp(*b, *c);
	strcmp(*c, temp);
}
int main() {
    char name[20][31];
    int i;
    int j;
    int m = 10;
    for (i = 0; i < m; i++) {
        scanf("%s", name[i]);    
    }
    for (j = 0; j < m; j++) {
        for (i = 0; i <m-j-1; i ++) {
            if(strcmp(name[i], name[i + 1]) > 0){ 
                    swap(&name[i], &name[i+1]);    
            }
        }
    }
    for (i = 0; i < 9; i++) {
        printf("%s\n",name[i]);
    }
    printf("%s",name[9]);
    return 0;
}



