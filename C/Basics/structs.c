#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char name[999];
};


int main(int argc, char const *argv[])
{
    struct Student Ahmad, Maleeka, Haider;
    Ahmad.id = 1;
    Ahmad.marks = 100;
    strcpy(Ahmad.name,"Muhammad Ahmad");
    printf("%s",Ahmad.name);

    return 0;
}