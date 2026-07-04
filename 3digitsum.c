#include <stdio.h>

int main()

{
    int number, firstdigit, lastdigit, sum;
    printf("enter 3 digit number:-");

    scanf("%d", &number);
    firstdigit = number / 100;
    lastdigit = number % 10;
    sum = firstdigit + lastdigit;

    printf("the sum of first and last digit is :- ", sum);
    return 0;
}