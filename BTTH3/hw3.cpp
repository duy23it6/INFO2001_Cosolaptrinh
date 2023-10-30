#include <stdio.h>

int main() {
    int i, j;
    
    for (j = 1; j <= 10; j++) {
        for (i = 2; i <= 9; i++) {
            printf("%dx%d=%d\t", i, j, i * j);
        }
        printf("\n");
    }
    
    return 0;
}
