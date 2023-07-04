#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    printf("Bir sayi girin: ");
    scanf("%d", &num);

    int result = factorial(num);

    printf("%d sayisinin faktoriyeli: %d\n", num, result);

    return 0;
}
