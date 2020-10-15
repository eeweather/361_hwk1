#include <stdio.h>
#include <stdlib.h>

int *my_malloc(int n_bytes)
{
    int *ptr;
    ptr = (int *)malloc(n_bytes);
    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }

    // Memory has been successfully allocated
    printf("Memory successfully allocated using malloc.\n");

    return ptr;
}

int main()
{

    // This pointer will hold the
    // base address of the block created
    int *ptr;
    int n;

    // Get the number of elements for the array
    n = 5;
    printf("Enter number of elements: %d\n", n);

    int n_bytes = n * sizeof(int);
    // Dynamically allocate memory using malloc()
    ptr = my_malloc(n_bytes);

    return 0;
}