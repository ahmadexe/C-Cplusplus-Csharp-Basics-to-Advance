#include <stdio.h>


int main(int argc, char const *argv[])
{
    int myarr[] = {1,2,3,4,5};
    int len;
    len = (int)(sizeof(myarr)/sizeof(myarr[0]));
    for (int i = len-1; i >= 0; i = i-1){
        printf("%d",myarr[i]);
    }
    return 0;
}