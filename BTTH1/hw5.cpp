#include <stdio.h>

int main() {
    int N;
    int i, isPrime = 1;

    printf("Nhap so nguyen duong N: ");
    scanf("%d", &N);

    
    if (N <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= N / 2; i++) {
            if (N % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    
    if (isPrime) {
        printf("%d la so nguyen to.\n", N);
    } else {
        printf("%d khong l� so nguy�n to.\n", N);
    }

    return 0;
}
