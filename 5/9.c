#include <stdio.h>
#include <string.h>
int main() {
    int i,j;
    char name[10][20]={0};
    for (i = 0; i < 10; i++) {
        scanf("%s",name[i]);
    }
    
    for (i = 0; i < 9; i++) {
    	for (j = 0; j <= 8-i; j++) {
            if(strcmp(name[j+1],name[j]) < 0) {
                char temp[10];
                strcpy(temp,name[j+1]);
                strcpy(name[j+1],name[j]);
                strcpy(name[j],temp);
            }
        }  
    }

    for (i = 0; i < 9; i++) {
        printf("%s\n",name[i]);
    }
    printf("%s",name[9]);
    
    return 0;
}
