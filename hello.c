#include <stdio.h>

int main() {
    char name[100]; // Deklaracja tablicy na imię o maksymalnej długości 100 znaków

    printf("Podaj swoje imię: ");
    scanf("%s", name); // Wczytanie imienia ze standardowego wejścia

    printf("Witaj, %s!\n", name); // Wyświetlenie powitania z imieniem użytkownika

    return 0;
}