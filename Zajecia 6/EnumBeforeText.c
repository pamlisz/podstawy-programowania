#include <stdio.h>
#include <ctype.h>

enum Typ{ERROR, WARNING, INFORMATION};

void wyswietl(char* tekst, enum Typ typ){
    switch(typ){
        case ERROR:
            printf("[ERROR] ");
            break;
        case WARNING:
            printf("[WARNING] ");
            break;
        case INFORMATION:
            printf("[INFORMATION] ");
            break;
    }

    printf("%s", tekst);
}

int main()
{
    char tekst[] = "Lorem ipsuM Dolor sIt AmEt, consectetur adipiscing elit.";
    wyswietl(tekst, INFORMATION);

    return 0;
}
