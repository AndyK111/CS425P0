#include "lab.h"
#include <stdio.h>
#include <stdlib.h>

#ifdef TEST
#define main main_exclude
#endif



int main(void)
{
    char *greeting = get_greeting("World");
    if (greeting) {
        printf("%s\n", greeting);
        free(greeting); // Free the allocated memory for the greeting
    } else {
        printf("Failed to create greeting.\n");
    }

    //memleak
    malloc(10000);

    /* Intentional crash */
    //volatile int* num = NULL;
    //int h = *num;

    return 0;
}