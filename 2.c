#include <stdio.h>
#include <string.h>
int main() {
    char line[200];
    printf("Enter a line:\n");
    fgets(line, sizeof(line), stdin);
    if (line[0] == '/' && line[1] == '/')
        printf("Single-line comment\n");
    else if (line[0] == '/' && line[1] == '*') {
        if (strstr(line, "*/") != NULL)
            printf("Multi-line comment\n");
        else
            printf("Not a complete comment\n");
    }
    else
        printf("Not a comment\n");
    return 0;
}

