#include <stdio.h>
int main(void)
{
    char* p1;
    int* p2;
    double* p3;
    printf("char*: %zu\n", sizeof(p1));
    printf("int*: %zu\n", sizeof(p2));
    printf("double*: %zu\n", sizeof(p3));
    return 0;
}