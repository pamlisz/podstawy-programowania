#include <stdio.h>

enum Cyfry{Zero, Jeden, Dwa, Trzy, Cztery};

int main()
{
    const int ile = Zero == 0 ? Cztery - Zero + 1 : Cztery - Zero;
    printf("Ilosc wartosci w enumie: %d\n\n", ile);
    for(enum Cyfry cyfra = Zero; cyfra<=Cztery; cyfra++)
        printf("%d ", cyfra);

    return 0;
}
