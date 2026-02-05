#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;

    printf("Enter code (Ctrl+Z then Enter):\n");

    while ((ch = getchar()) != EOF) {

        if (isspace(ch)) continue;

        if (isalpha(ch)) {
            printf("Identifier ");
            while (isalnum(getchar()));
        }
        else if (isdigit(ch)) {
            printf("Constant ");
            while (isdigit(getchar()));
        }
        else if (ch=='+'||ch=='-'||ch=='*'||ch=='='||ch=='<'||ch=='>') {
            printf("Operator ");
        }
    }
    return 0;
}
