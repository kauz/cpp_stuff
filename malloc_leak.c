#include <stdlib.h>
#include <stdio.h>

int main() {

    for (int i = 0; i < 100; i++) {
    // while (1) {
        double *pd = (double *)malloc(10 * sizeof(double));

        if (pd != NULL) {
            for (double *p = pd; p < pd + 10; p++)
                *p = 0.0;
        } else {
            printf("Cannot allocate memory");
        }
        // free(pd);
    }


    return 0;
}

// gcc
// valgrind ./a.out
