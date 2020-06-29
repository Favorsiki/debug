#include <stdio.h>
int main() {
    int matrix[100][100];
    int m;
    int n;

    int k = 0;
    int l = 0;
    int num;
    scanf("%d %d", &m, &n);
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("%d", matrix[0][0]);
    while (k < m && l < n)
    {
        for (int i = l; i < n; i++) {
            if (k == 0 && i == 0) {
	    } else {
                printf(" %d", matrix[k][i]);
            }

        }
        k++;
        for (int i = k; i < m; i++) {
            printf(" %d", matrix[i][n - 1]);
        }
        n--;
        if (k < m) {
            for (int i = n - 1; i >= l; i--) {
                printf(" %d", matrix[m - 1][i]);
            }
            m--;
        }
        if (l < n) {
            for (int i = m - 1; i >= k; i--) {
                printf(" %d", matrix[i][l]);
                if (i != k) {
                    printf(" ");
                }  
            }
            l++;    
        }        
    }


    return 0;
}
