#include <stdio.h>
int main()
{
    int ENG, MATH, PHY, CHEM, CSC;
    scanf("%d %d %d %d %d", &ENG, &MATH, &PHY, &CHEM, &CSC);
    if (ENG > 34 && MATH > 34 && PHY > 34 && CHEM > 34 && CSC > 34)
        printf("PASSED");
    else
        printf("FAILED");
    return 0;
}
