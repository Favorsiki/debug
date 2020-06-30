#include <stdio.h>
void add(char);
void dele(char);
int rwx = 0;
int main() {
    char temp;
    scanf("%c", &temp);
    if (temp == 'x') {
            rwx ^= (1 << 0);
    } else if (temp == 'w') {
        rwx ^= (1 << 1);
        scanf("%c", &temp);
        if (temp == 'x') {
                    rwx ^= (1 << 0);
        } else {
            goto begin;
        }
    }
    else if (temp == 'r') {
        rwx ^= (1 << 2);
        scanf("%c", &temp);
        if (temp == 'w') {
                    rwx ^= (1 << 1);
        } else {
            goto begin;
        }
        scanf("%c", &temp);
        if (temp == 'x') {
                    rwx ^= (1 << 0);
        } else {
            goto begin;
        }
    }

    while (scanf("%c", &temp) != EOF) {
        begin:
        if (temp == '+') {
            scanf("%c", &temp);
            add(temp);
        } else if (temp == '-') {
            scanf("%c", &temp);
            dele(temp);
        }
    }

    printf("%d", rwx);
    return 0;
}
void add(char input) {
    if (input == 'r' && rwx / 2 / 2 != 1) {
        rwx ^= (1 << 2);
        } else if (input == 'w' && (rwx / 2 % 2 != 1)) {
        rwx ^= (1 << 1);
        } else if (rwx % 2 != 1) {
        rwx ^= (1 << 0);
        }
}
void dele(char input)
{
    if (input == 'r' && rwx / 2 / 2 == 1) {
        rwx ^= (1 << 2);
        } else if (input == 'w' && (rwx / 2 % 2 == 1)) {
                rwx ^= (1 << 1);
        } else if (rwx % 2 == 1) {
                rwx ^= (1 << 0);
        }
}
