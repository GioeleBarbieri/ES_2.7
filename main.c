#include <stdio.h>

int main(void)
{
    float k, L, valore;
    printf (" inserisci il numero di chilometri: ");
    scanf("%f", &k);
    printf (" inserisci il numero di litri: ");
    scanf("%f", &L);
    valore = k/L;
    printf( " per ogni chilometro hai utilizato %f litri di benzina", valore);
    return 0;

}
