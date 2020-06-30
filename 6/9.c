#include <string.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
    int i = 0;
    int chmod_r = 0;
    int chmod_w = 0;
    int chmod_x = 0;


    char temp[4];
    char permission[10][4];

    while (scanf("%s", temp) != EOF) {   
        strcpy(permission[i], temp);
        i++;
    }

    for (i = 0; i < 3; i++) {   
        if (permission[0][i] == 'r') {   
            chmod_r++;
        }
        if (permission[0][i] == 'w') {   
            chmod_w++;
        }
        if (permission[0][i] == 'x') {   
            chmod_x++;
        }
    }

    for (i = 1; i < 10; i++) {   
        if (permission[i][0] == '+') {   
            if (permission[i][1] == 'r') {   
                chmod_r++;
            }
            if (permission[i][1] == 'w') {   
                chmod_w++;
            }
            if (permission[i][1] == 'x') {   
                chmod_x++;
            }
        }
        if (permission[i][0] == '-') {   
            if (permission[i][1] == 'r') {   
                chmod_r--;
            }
            if (permission[i][1] == 'w') {   
                chmod_w--;
            }
            if (permission[i][1] == 'x') {
                chmod_x--;
            }
        }

    }

    printf("%d", chmod_x + chmod_w * 2 + chmod_r * 4);
    return 0;
}