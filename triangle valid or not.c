#include <stdio.h>

int main() {
    int a, b, c;

    // Input three sides of a triangle
    scanf("%d%d%d", &a, &b, &c);

    // Check the triangle condition
    if (a + b > c && b + c > a && c + a > b) {
        printf("Valid triangle");
    } else {
        printf("Invalid triangle");
    }

    return 0;
}
