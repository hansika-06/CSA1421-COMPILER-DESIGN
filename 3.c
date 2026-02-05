#include <stdio.h>
int main() {
    char ch, next;
    printf("Enter input (Ctrl+Z to stop):\n");
    while ((ch = getchar()) != EOF) {
        if (ch == ' ' || ch == '\t' || ch == '\n')
            continue;
        if (ch == '/') {
            next = getchar();
            if (next == '/') {
                while (getchar() != '\n');
            }
            else if (next == '*') {
                while (1) {
                    ch = getchar();
                    next = getchar();
                    if (ch == '*' && next == '/')
                        break;
                }
            }
            else {
                printf("%c", ch);
                ungetc(next, stdin);
            }
        }
        else {
            printf("%c", ch);
        }
    }
    return 0;
}

