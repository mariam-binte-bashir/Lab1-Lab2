#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);

    if (num > 0)
        printf("%d is positive real number.", num);

    else if (num < 0)
        printf("%d is negative real number.", num);

    else if (num >=0)
        printf("%d is a natural number.", num);


        return 0;
}
