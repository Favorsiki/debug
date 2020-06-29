#include <stdio.h>

int main() {
    int matrix[100][100];
    int m;
    int n;
    scanf("%d%d", &m, &n);
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int j;
    int count = 0;
    if (m == 1) {
        for (j = 0; j < n; j++) {
            printf("%d", matrix[0][j]);
            count++;
            if (count != m * n) {
                printf(" ");
            }
        }
    } else if (n == 1) {
        for (j = 0; j < m; j++) {
            printf("%d", matrix[j][0]);
            count++;
            if (count != m * n) {
                printf(" ");
            }
        }
    } else {
        for (int i = 0; i < 2 * m; i++) {
            switch (i % 4) {
                case 0:   
                    for (j = i / 4; j < n - i / 4; j++) {
                        printf("%d", matrix[i / 4][j]);
                        count++;
                        if (count != m * n) {
                            printf(" ");
                        }
                    }
                    break;
                case 1:  
                    for (j = i / 4 + 1; j < m - i / 4; j++) {
                        printf("%d", matrix[j][n - 1 - i / 4]);
                        count++;
                        if (count != m * n) {
                            printf(" ");
                        }
                    }
                    break;
                case 2:  //向左的时候
                    for (j = n - 2 - i / 4; j > i / 4; j--) {
                        //判断
                        if ( m - i / 4 - 1 == i / 4) {
                            break;
                        }                        
                        printf("%d", matrix[m - i / 4 - 1][j]);
                        count++;
                        if (count != m * n) {
                            printf(" ");
                        }
                    }
                    break;
                case 3: //向上的时候
                    for (j = m - 1 - i / 4; j > i / 4 ; j--) {
                        //判断
                        if (i / 4 == n - 1 - i / 4) {
                            break;
                        }                        
                        printf("%d", matrix[j][i / 4]);
                        count++;
                        if (count != m * n) {
                            printf(" ");
                        }
                    }
                    break;
            }
        }
    }
    return 0;
}