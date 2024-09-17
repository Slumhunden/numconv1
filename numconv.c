#include <stdio.h>
#include <stdlib.h>


//Hjælpefunktioner || is_digit, is_bin_digit, is_hex_digit, og is_oct_digit, som kontrollerer, om en given karakter er et gyldigt ciffer i forskellige talsystemer.
int is_digit(char c){
    return c >= '0' && c <= '9';
}

int is_bin_digit(char c){
    return c == '0' || c == '1';
}

int is_hex_digit(char c){
    return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F');
}

int is_oct_digit(char c){
    return c >= '0' && c <= '7';
}

//konverteringsfunktioner, der konverterer en streng til et heltal i de forskellige talsystemer.

int dec_to_int(char str[]){
    return atoi(str); //atoi er en funktion, der konverterer en streng til et heltal.
}

int bin_to_int(char str[]){
    int result = 0;
    while (*str){
        result = result * 2 + (*str - '0');
        str++;
    }
    return result;
}

int hex_to_int(char str[]){
    int result = 0;
     while (*str) {
        if (*str >= '0' && *str <= '9') {
            result = result * 16 + (*str - '0');
        } else if (*str >= 'a' && *str <= 'f') {
            result = result * 16 + (*str - 'a' + 10);
        } else if (*str >= 'A' && *str <= 'F') {
            result = result * 16 + (*str - 'A' + 10);
        }
        str++;
    }
    return result;
}
