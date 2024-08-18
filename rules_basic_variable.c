#include "stdio.h"

// ..

void foo(int *a) {
    *a = *a + 1;
}

int main(void) {
    int a = 0; // Variável local
    int b = 0; // Variável local
    
    while (1) {
        foo(&a);
        
        if (a > 5) {
            b = 1;
            break;
        }
    }
}
