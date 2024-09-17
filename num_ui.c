#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "numconv.c"  // Inkludér de konverteringsfunktioner, vi netop har lavet

// Funktion til at vise menuen til brugeren
void show_menu() {
    printf("Vælg talsystem:\n");
    printf("1: Decimal\n");
    printf("2: Binær\n");
    printf("3: Hexadecimal\n");
    printf("4: Octal\n");
    printf("5: Afslut\n");
}

int main() {
    int choice;  // Variabel til at gemme brugerens valg
    char input[100];  // Buffer til at gemme brugerens indtastning
    char output[100];  // Buffer til at gemme output-strenge
    int num;  // Variabel til at gemme konverteret integer

    while (1) {
        show_menu();  // Vis menuen
        printf("Indtast valg: ");
        scanf("%d", &choice);  // Læs brugerens valg

        if (choice == 5) break;  // Afslut programmet hvis brugeren vælger 5

        printf("Indtast tal: ");
        scanf("%s", input);  // Læs brugerens indtastning

        // Bestem talsystemet baseret på brugerens valg og konverter til integer
        switch (choice) {
            case 1:
                num = dec_to_int(input);
                break;
            case 2:
                num = bin_to_int(input);
                break;
            case 3:
                num = hex_to_int(input);
                break;
            case 4:
                num = oct_to_int(input);
                break;
            default:
                printf("Ugyldigt valg!\n");
                continue;
        }

        // Konverter integer til de andre talsystemer og udskriv resultaterne
        printf("Decimal: %d\n", num);
        int_to_bin(num, output);
        printf("Binær: %s\n", output);
        int_to_hex(num, output);
        printf("Hexadecimal: %s\n", output);
        int_to_oct(num, output);
        printf("Octal: %s\n", output);
    }

    return 0;
}