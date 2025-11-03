#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase alphabet");
    } 
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase alphabet");
    } 
    else {
        printf("Not an alphabet");
    }

    return 0;
}
