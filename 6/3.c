#include <stdio.h>
#include <string.h>
int main() {
    int i = 0;
    int counter = 0;
    char temp[3];
    char name[4];
    scanf("%s", name);
    for (int j = 0; j < strlen(name); j++) {
        if(name[j] == 'w') {
            counter += 2;
        }else if(name[j] == 'r') {
            counter += 4;
        }
        else if(name[j] == 'x') {
            counter += 1;
        }
    }
    while (scanf("%s", temp) != EOF) {
        if ((temp[0] == '+' && temp[1] == 'r')) {
            counter = counter | 4;
        } else if ((temp[0] == '+' && temp[1] == 'w')) {
            counter = counter | 2;
        } else if ((temp[0] == '+' && temp[1] == 'x')) {
            counter  = counter | 1;
        } else if ((temp[0] == '-' && temp[1] == 'r')) {
            counter = counter & ~4;
        } else if ((temp[0] == '-' && temp[1] == 'w')) {
            counter = counter & ~2;
        } else if ((temp[0] == '-' && temp[1] == 'x')) {
            counter = counter & ~1;
        }
    }    
    printf("%d", counter);
    return 0;
}