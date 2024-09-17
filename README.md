Programoversigt
Dette projekt består af et sæt C-programmer, som kan konvertere heltal mellem forskellige talsystemer: decimal, binær, hexadecimal og octal. Projektet er opdelt i to hovedfiler:

numconv.c: Indeholder konverteringsfunktioner og hjælpefunktioner.

num_ui.c: Indeholder brugerfladen til at interagere med konverteringsfunktionerne.

Filbeskrivelser
numconv.c
Denne fil indeholder følgende:

Hjælpefunktioner:

int is_digit(char c): Kontrollerer om en karakter er en decimalciffer.

int is_bin_digit(char c): Kontrollerer om en karakter er en binærciffer.

int is_hex_digit(char c): Kontrollerer om en karakter er en hexadecimalciffer.

int is_oct_digit(char c): Kontrollerer om en karakter er en octalciffer.

Konverteringsfunktioner:

int dec_to_int(char str[]): Konverterer en decimalstreng til en integer.

int bin_to_int(char str[]): Konverterer en binær streng til en integer.

int hex_to_int(char str[]): Konverterer en hexadecimal streng til en integer.

int oct_to_int(char str[]): Konverterer en octal streng til en integer.

void int_to_dec(int num, char str[]): Konverterer en integer til en decimal streng.

void int_to_bin(int num, char str[]): Konverterer en integer til en binær streng.

void int_to_hex(int num, char str[]): Konverterer en integer til en hexadecimal streng.

void int_to_oct(int num, char str[]): Konverterer en integer til en octal streng.

num_ui.c
Denne fil indeholder brugerfladen, som gør det muligt for brugeren at vælge talsystem og indtaste et tal, der så konverteres til de andre talsystemer og vises på skærmen.

Kompilering og Kørsel
Følg disse trin for at kompilere og køre programmet:

Åbn en terminal/kommandoprompt.

Navigér til den mappe, hvor filerne numconv.c og num_ui.c er placeret.

Kompiler programmet med følgende kommando:

Copy
gcc -o num_ui num_ui.c
Dette genererer en eksekverbar fil ved navn num_ui.

Kør programmet med:

Copy
./num_ui
Brugerflade
Når du kører programmet, vil det vise en menu med valgmuligheder for talsystemer. Brugeren kan vælge et talsystem, indtaste et tal, og programmet vil konvertere tallet til de andre talsystemer.

Eksempel på programkørsel:

Copy
Vælg talsystem:
1: Decimal
2: Binær
3: Hexadecimal
4: Octal
5: Afslut
Indtast valg: 1
Indtast tal: 123
Decimal: 123
Binær: 1111011
Hexadecimal: 7B
Octal: 173
I ovenstående eksempel vælger brugeren decimal talsystem (option 1), indtaster tallet 123, og programmet udskriver det samme tal i binær (1111011), hexadecimal (7B), og octal (173).

Bemærkninger
Husk, at hvis du vælger en ugyldig mulighed fra menuen, vil programmet informere dig om, at valget er ugyldigt, og bede dig om at prøve igen.

Programmet vil fortsætte med at køre, indtil du vælger "Afslut" (option 5).

