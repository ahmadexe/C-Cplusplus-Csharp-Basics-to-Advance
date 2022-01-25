#include <stdio.h>

void table(int num)
{
    for(int i = 1; i <= 10; i++){
        int x = i * num;

        printf("%d\n",x);    
            
            
            }
}

int main(int argc, char const *argv[])
{
    table(5);
    return 0;
}
