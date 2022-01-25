#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int* myptrs;
    int num;
    printf("Enter the size: ");
    scanf("%d",&num);
    myptrs = (int *)calloc(num , sizeof(int));

    for (int i = 0; i < num; i++)
    {
        printf("Enter value for %d place: ",i);
        scanf("%d", &myptrs[i]);
    }

    for(int j = 0; j < num; j++){
        printf("The number of %d in array is %d\n",j,myptrs[j]);
    }
        


    return 0;
}