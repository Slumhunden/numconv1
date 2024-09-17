#include <stdio.h>
#include <stdlib.h>

// Hjælpefunktioner:
// Funktion til at kontrollere om en karakter er en decimalciffer
int is_digit(char c) {
    return c >= '0' && c <= '9';
}

// Funktion til at kontrollere om en karakter er en binærciffer (0 eller 1)
int is_bin_digit(char c) {
    return c == '0' || c == '1';
}

// Funktion til at kontrollere om en karakter er en hexadecimalciffer (0-9, a-f, A-F)
int is_hex_digit(char c) {
    return (c >= '0' && c <= '9') || 
           (c >= 'a' && c <= 'f') || 
           (c >= 'A' && c <= 'F');
}

// Funktion til at kontrollere om en karakter er en octalciffer (0-7)
int is_oct_digit(char c) {
    return c >= '0' && c <= '7';
}

// Konverteringsfunktioner:
// Funktion til at konvertere en decimalstreng til en integer
int dec_to_int(char str[]) {
    return atoi(str);  // Brug af standardfunktion til streng-til-integer konvertering
}

// Funktion til at konvertere en binær streng til en integer
int bin_to_int(char str[]) {
    int result = 0;  // Variabel til at gemme resultatet
    while (*str) {  // Iterér gennem hele strengen
        result = result * 2 + (*str - '0');  // Multipliser det nuværende resultat med 2 og tilføj den næste binærciffer
        str++;
    }
    return result;
}

// Funktion til at konvertere en hexadecimal streng til en integer
int hex_to_int(char str[]) {
    int result = 0;  // Variabel til at gemme resultatet
    while (*str) {  // Iterér gennem hele strengen
        if (*str >= '0' && *str <= '9') {
            result = result * 16 + (*str - '0');  // Multipliser resultatet med 16 og tilføj den næste ciffer
        } else if (*str >= 'a' && *str <= 'f') {
            result = result * 16 + (*str - 'a' + 10);  // Tilføj den korrekte værdi for små bogstaver
        } else if (*str >= 'A' && *str <= 'F') {
            result = result * 16 + (*str - 'A' + 10);  // Tilføj den korrekte værdi for store bogstaver
        }
        str++;
    }
    return result;
}

// Funktion til at konvertere en octal streng til en integer
int oct_to_int(char str[]) {
    int result = 0;  // Variabel til at gemme resultatet
    while (*str) {  // Iterér gennem hele strengen
        result = result * 8 + (*str - '0');  // Multipliser resultatet med 8 og tilføj den næste octalciffer
        str++;
    }
    return result;
}

// Funktion til at konvertere en integer til en decimal streng
void int_to_dec(int num, char str[]) {
    sprintf(str, "%d", num);  // Brug sprintf til at skrive integeren til strengen som decimal
}

// Funktion til at konvertere en integer til en binær streng
void int_to_bin(int num, char str[]) {
    char *start = str;  // Husk startpositionen af strengen
    if (num == 0) {
        *str++ = '0';  // Håndter specieltilfælde hvor integeren er 0
    } else {
        for (unsigned int mask = 1U << (sizeof(int) * 8 - 1); mask; mask >>= 1) {
            *str++ = (num & mask) ? '1' : '0';  // For hver bit, skriv '1' eller '0' til strengen
        }
    }
    *str = '\0';  // Tilføj null-terminator til slutningen af strengen
    // Fjern ledende nuller ved at flytte den gyldige del af strengen til starten
    while (*start == '0' && *(start + 1) != '\0') start++;
    memmove(str - (start - str), start, strlen(start) + 1);
}

// Funktion til at konvertere en integer til en hexadecimal streng
void int_to_hex(int num, char str[]) {
    sprintf(str, "%X", num);  // Brug sprintf til at skrive integeren til strengen som hexadecimal
}

// Funktion til at konvertere en integer til en octal streng
void int_to_oct(int num, char str[]) {
    sprintf(str, "%o", num);  // Brug sprintf til at skrive integeren til strengen som octal
}