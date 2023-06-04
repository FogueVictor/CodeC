#include <stdio.h>

/*
    Programme qui utilise les pointeurs pour calculer la somme, le produit et la division de 02 réels.
*/

void RecuperationNombre(float *pt_nombreA, float *pt_nombreB);
void OperationSurlesNombres(float *pt_nombreA, float *pt_nombreB, float *pt_Som, float *pt_Prod, float *pt_Div);

int main(void)
{
    float nombreA = 0;
    float nombreB = 0;
    float Som = 0;
    float Div = 0;
    float Prod = 0;

    /* Initialisation des pointeurs */
    float *pt_nombreA = &nombreA;
    float *pt_nombreB = &nombreB;
    float *pt_Som = &Som;
    float *pt_Prod = &Prod;
    float *pt_Div = &Div;

    RecuperationNombre(pt_nombreA, pt_nombreB);
    printf("\n");
    OperationSurlesNombres(pt_nombreA, pt_nombreB, pt_Som, pt_Prod, pt_Div);
    printf("Les opérations sur les nombres sont :\n La somme = [%.2f]\n Le produit = [%.2f]\n La division = [%.2f]", *pt_Som, *pt_Prod, *pt_Div);

    return 0;
}

void RecuperationNombre(float *pt_nombreA, float *pt_nombreB)
{
    printf("Entrez le nombre A : ");
    scanf("%f", pt_nombreA);
    printf("\n");
    printf("Entrez le nombre B : ");
    scanf("%f", pt_nombreB);
}

void OperationSurlesNombres(float *pt_nombreA, float *pt_nombreB, float *pt_Som, float *pt_Prod, float *pt_Div)
{
    // Calcul de la somme
    *pt_Som = *pt_nombreA + *pt_nombreB;
    // Calcul du produit
    *pt_Prod = *pt_nombreA * *pt_nombreB;
    // Vérification de la division par zéro
    if (*pt_nombreB != 0)
    {
        // Calcul de la division
        *pt_Div = *pt_nombreA / *pt_nombreB;
    }
    else
    {
        printf("Erreur : division par zéro impossible.\n");
    }
}
