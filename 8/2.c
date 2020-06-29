#include <stdio.h>
#include <string.h>
int main() {
    int n;
    scanf("%d\n", &n);
    char names[5000][101]={0};
    char max[101];
    
    for (int i = 0; i < n; i++) {
         gets(names[i]);
    } 
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strlen(names[j]) >= strlen(names[j+1])) {
                strcpy(max, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j + 1], max);
            }
        }
    }
    
    printf("%s\n", names[n - 1]);
    return 0;
}