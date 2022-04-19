#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{

   int arr[3] = {1,2,3};
   int *a = arr;
   printf( "Value of array pointer variable : %d\n", arr[0]);
   printf( "Value of pointer variable : %d\n", *((&a[0])+2));
   int* x = (&a[0]+4);
   printf( "Value of pointer variable : %d\n", (x));
   return 0;

}