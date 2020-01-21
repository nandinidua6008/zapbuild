#include <stdio.h>
#include <math.h>

int main()
{
    int num,root;

    /* Input a number from user */
    printf("Enter any number to find square root: ");
    scanf("%d", &num);

    /* Calculate square root of num */
    root = sqrt(num);

    /* Print the resultant value */
    printf("Square root of %d is %d", num, root);

    return 0;
}
