#include <stdio.h>
#include <string.h>

int main() {
    int n, max_=0;
    scanf("%d\n", &n);
    char names[101];
    char max[101] = {'\0'};
    for (int i = 0; i < n; i++) {
         int z = 0;
         while (scanf("%c", &names[z]) != EOF && names[z] != '\n') {
             z++;
         }
         names[z] = '\0';
         if(z > max_) {
             max_ = z;
             strcpy(max, names);
         }
    }
    printf("%s", max);
    return 0;
}
