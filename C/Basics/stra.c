#include <stdio.h>


int main(int argc, char const *argv[])
{
    char str[99];
    printf("Enter a string: ");
    gets(str);

    printf("%s",str);
    return 0;
}