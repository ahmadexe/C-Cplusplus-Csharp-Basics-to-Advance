#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);
    if (age < 18)
    {
        printf("You can not drive");
    }

    else if (age >= 18)
    {
        printf("You can vote %d", age);
    }
    
    return 0;
}
