#include <stdio.h>

int main()
{
    int R, C, E, total_rows, total_cells;
    scanf("%d%d%d", &R, &C, &E);
    total_rows = R + E;
    total_cells = total_rows * C;
    printf("%d", total_cells);
    return 0;
}
