#include <stdio.h>
#include <math.h>

/*
    Programme qui détermine la puissance de X par rapport à Y
*/

int main(void)
{
    int Puissance_ = 0;
    int X = 0;
    int Y = 0;

    printf("Entrez la valeur de X : ");
    scanf("%d", &X);
    printf("\n");
    printf("Entrez la valeur de Y : ");
    scanf("%d", &Y);
    printf("\n");

    // Calcul de X à la puissance Y
    Puissance_ = pow(X, Y);
    printf("La puissance de %d en %d est : %d", X, Y, Puissance_);

    return 0;
}
