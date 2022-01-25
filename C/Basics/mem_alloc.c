#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
    int* my_pointer_storage;
    int number;
    
    printf("Enter the amount of people you want in your array: ");
    scanf("%d", &number);

    my_pointer_storage = (int*) malloc(number*sizeof(int));
    for(int i = 0; i < number; i++){
        printf("Enter the %d value of this array: ",i);
        scanf("%d", &my_pointer_storage[i]);
    }

    for(int i = 0; i<number; i++){
        printf("The value at %d of array is %d\n",i,my_pointer_storage[i]);
    }

    return 0;
}