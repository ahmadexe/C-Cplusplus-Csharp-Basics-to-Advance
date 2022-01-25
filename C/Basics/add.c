#include <stdio.h>


int main(int argc, char const *argv[])
{
    int a;
    int b;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter another number: ");
    scanf("%d", &b);

    printf("The value of a + b is: %d",a+b);

    return 0;
}
