#include <stdio.h>
int main(void)
{
    float array[10] = { 1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f, 7.7f, 8.8f, 9.9f, 11.0f };
    float* ptr;
    printf("array: %p\n", (void*)array);
    printf("&array[0]: %p\n", (void*)&array[0]);
    printf("&array: %p\n", (void*)&array);
    ptr = array;
    printf("ptr: %p, value: %.1f\n", (void*)ptr, *ptr);
    ptr++;
    printf("ptr++: %p, value: %.1f\n", (void*)ptr, *ptr);
    ptr = ptr + 4;
    printf("ptr + 4: %p, value: %.1f\n", (void*)ptr, *ptr);
    ptr = ptr - 2;
    printf("ptr - 2: %p, value: %.1f\n", (void*)ptr, *ptr);
    printf("Step 2:\n");
    for (ptr = array; ptr < array + 10; ptr = ptr + 2)
        printf("%p: %.1f\n", (void*)ptr, *ptr);
    printf("Reverse:\n");
    ptr = array + 10;
    while (ptr > array)
    {
        ptr--;
        printf("%p: %.1f\n", (void*)ptr, *ptr);
    }
    return 0;
}