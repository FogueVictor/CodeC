#include <stdio.h>

/*
    Programme qui calcule le périmètre et l'aire d'un rectangle.
*/

int main(void)
{
    float longueur = 0;   // Variable pour la longueur du rectangle
    float largeur = 0;    // Variable pour la largeur du rectangle
    float surface = 0;    // Variable pour stocker la surface du rectangle
    float perimetre = 0;  // Variable pour stocker le périmètre du rectangle

    printf("Entrez la longueur du rectangle : ");
    scanf("%f", &longueur);
    printf("\n");
    printf("Entrez la largeur du rectangle : ");
    scanf("%f", &largeur);
    printf("\n");

    if (longueur <= 0 || largeur <= 0)
    {
        printf("Les valeurs de longueur et de largeur doivent être strictement positives.\n");
    }
    else if (longueur <= largeur)
    {
        printf("Ce n'est plus un rectangle.\n");
    }
    else
    {
        perimetre = 2 * (longueur + largeur);
        printf("Le périmètre de ce rectangle est : %.2f\n", perimetre);
        surface = longueur * largeur;
        printf("Et sa surface est : %.2f\n", surface);
    }

    return 0;
}
