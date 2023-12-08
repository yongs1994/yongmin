#include <stdio.h>

int main()
{
    int num1 = 1, num2 = 2, num3 = 3;
    int *ptrArray[3] = {&num1, &num2, &num3};
    int **ptrToPtrArray = ptrArray;

    for (int i = 0; i < 3; ++i)
    {
        printf("Value at index %d: %d\n", i, *ptrToPtrArray[i]);
    }

    return 0;
}
