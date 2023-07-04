#include <stdio.h>

int main() {
    float num;

    printf("Bir ondalik sayi girin: ");
    scanf("%f", &num);

    printf("Ondalik sayinin hexadecimal karsiligi: %a\n", num);

    return 0;
}
