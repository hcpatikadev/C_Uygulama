#include <stdio.h>
#include <string.h>

int main() {
    char text[100];

    printf("Kelimeyi veya cumleyi girin: ");
    gets(text);

    int length = strlen(text);

    printf("Girilen metnin uzunlugu: %d\n", length);

    return 0;
}
