#include <stdio.h>
void print_bytes(void* p, size_t n)
{
    unsigned char* a = p;
    for (size_t i = 0; i < n; i++)
        printf("%02X ", (unsigned int)a[i]);
    printf("\n");
}
int main(void)
{
    int x = 0x12345678;
    int a = 12345;
    float b = 12345.0f;
    double c = 12345.0;
    unsigned char* p = (unsigned char*)&x;
    printf("x: ");
    print_bytes(&x, sizeof(x));
    if (*p == 0x78)
        printf("little-endian\n");
    else if (*p == 0x12)
        printf("big-endian\n");
    else
        printf("Other byte order\n");
    printf("int: ");
    print_bytes(&a, sizeof(a));
    printf("float: ");
    print_bytes(&b, sizeof(b));
    printf("double: ");
    print_bytes(&c, sizeof(c));
    return 0;
}