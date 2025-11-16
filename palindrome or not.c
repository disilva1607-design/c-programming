#include <stdio.h>

int main() {
    int n, rev = 0, remainder, original;
    scanf("%d", &n);
    original = n; 
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n = n / 10;
    }
    if (original == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    
    return 0;
}
