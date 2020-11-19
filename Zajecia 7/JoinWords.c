#include <stdlib.h>
#include <string.h>

char* polacz(char* slowa[], int rozmiar)
{
    int rozmiarTekst = 1;
    for(int i=0; i<rozmiar; i++)
        rozmiarTekst += strlen(slowa[i]);

    char *tekst = calloc(rozmiarTekst, sizeof(char));
    for(int i=0; i<rozmiar; i++)
        strcat(tekst, slowa[i]);

    return tekst;
}

int main()
{
    const char *slowa[] = {"Pa", "we", "l M", "al", "isz" };
    int rozmiar = sizeof(slowa)/sizeof(slowa[0]);

    char *tekst = polacz(slowa, rozmiar);
    printf("%s", tekst);

    free(tekst);
    return 0;
}
