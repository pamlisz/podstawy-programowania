#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define n 144

char* polacz(char* tekst, int liczba){
    int rozmiarLiczby = log10(liczba)+1;
    char* liczbaTekst = malloc(rozmiarLiczby * sizeof(char));
    sprintf(liczbaTekst, "%d", liczba);

    char* wynik = malloc(strlen(tekst) + rozmiarLiczby * sizeof(char));
    strcpy(wynik, liczbaTekst);
    strcat(wynik, tekst);
    free(liczbaTekst);
    return wynik;
}


int main()
{
    char tekst[] = "Pawel Malisz";
    char* imie = malloc(strlen(tekst));
    char* nazwisko = malloc(strlen(tekst));

    int i;
    for(i=0; i<strlen(tekst); i++){
        if(tekst[i] == ' ') break;
        imie[i] = tekst[i];
    }
    imie[i++] = '\0';

    int j= 0;
    for(i; i<strlen(tekst); i++, j++){
        nazwisko[j] = tekst[i];
    }
    nazwisko[j++] = '\0';

    printf("%s\n", imie);
    printf("%s\n", nazwisko);

    printf("%s", polacz(imie, n));

    free(imie);
    free(nazwisko);
    return 0;
}
