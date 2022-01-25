#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 20;
    int *ptra = &a;

    printf("The value of a's address is %x\n",&a);
    printf("The value using pointer is %x\n",ptra);
    printf("The value using a using pointer is %d\n",*ptra);

    return 0;
}
