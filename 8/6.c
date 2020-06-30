#include <stdio.h>
#include <string.h>
int main() {
    int n;
    int i, j;
    scanf("%d", &n);
    char names[n][101];
    char temp[101];
    gets(names[0]);
    for (i = 0; i < n; i++) {
        gets(names[i]);
    }
	
    int max=strlen(names[0]);
    int number=0;
    for (i = 1; i < n; i++) {
        if (max < strlen(names[i])) {
            max = strlen(names[i]);
            number=i;
        }
    }

    printf("%s\n", names[number]);   
    return 0;   
}
