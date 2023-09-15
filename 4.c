#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int sum, sub, mul, div,mod;

    printf("enter the two numbers :  ");
    scanf("%d %d", a,b);

    sum = a+b;
    sub= a-b;
    mul =a*b;
    div = a/b;
    mod = a%b;

    printf("the sum : %d\n", sum);
    printf("the sub : %d\n", sub);
    printf("the mul : %d\n", mul);
    printf("the div : %d\n", div);
    printf("the mod : %d\n", mod);
    return 0;
}
