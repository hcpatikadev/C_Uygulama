#include <stdio.h>

int main() {
    FILE *file;
    char text[100];

    // Dosyayı yazma modunda aç
    file = fopen("metin.txt", "w");

    if (file == NULL) {
        printf("Dosya olusturma hatasi.\n");
        return 1;
    }

    printf("Metni girin: ");
    gets(text);

    // Dosyaya metni yaz
    fprintf(file, "%s", text);

    // Dosyayı kapat
    fclose(file);

    // Dosyayı okuma modunda aç
    file = fopen("metin.txt", "r");

    if (file == NULL) {
        printf("Dosya acma hatasi.\n");
        return 1;
    }

    printf("Dosyadan okunan metin: ");

    // Dosyayı satır satır oku ve ekrana yazdır
    while (fgets(text, sizeof(text), file)) {
        printf("%s", text);
    }

    // Dosyayı kapat
    fclose(file);

    return 0;
}
