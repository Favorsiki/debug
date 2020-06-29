#include <string.h>
#include <stdio.h>
int main()
{
    char pms[4];
    char change_pms[100][3];
    int i;
    i = 0;
    int j;
    j = 0;
    
    int a;
    a = 0;
    int b;
    b = 0;
    int c;
    c = 0;


    scanf("%s\n", pms);

    while (scanf("%s\n",change_pms[i++]) != EOF) {
        ;
    }

    for (i = 0; i < strlen(pms); i++) {
        if (pms[i] == 'r') {
            a = 1;
        } else if (pms[i] == 'w') {
            b = 1;
        } else {
            c = 1;
        }
    }

    for (i = 0; i < strlen(change_pms[i]); i++) {
        if (change_pms[i][j] == '+') {
            if (change_pms[i][j + 1] == 'r') {
                a = 1;
            } else if (change_pms[i][j + 1] == 'w') {
                b = 1;
            } else {
                c = 1;
            }
        } else {
            if (change_pms[i][j + 1] == 'r') {
                a = 0;
            } else if (change_pms[i][j + 1] == 'w') {
                b = 0;
            } else {
                c = 0;
            }
        }
    }
    printf("%d", a * 4 + b * 2 + c);
    return 0;
}
