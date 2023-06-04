#include <stdio.h>
#include <math.h>

/*
    Programme qui calcule la somme des carrée des n premier entier impaire.
        [EXEMPLE]
            N = 5 , SOM = 1² + 3² + 5² + 7² + 9² = 165
*/
void carreDesNombresImpaire(int *pt_nombre_, int *pt_som_);

int main(void)
{
    int nombre_ = 0;
    int result_ = 0;
    int *resultPointer_ = &result_;
    int *nombrePointer_ = &nombre_;

    printf("Entrez un nombre :");
    scanf("%d", &nombre_);
    
    carreDesNombresImpaire(nombrePointer_, resultPointer_);
    printf("Le resultat de la somme de %d est : %d", nombre_, result_);

}

void carreDesNombresImpaire(int *pt_nombre_, int *pt_som_)
{
    *pt_som_ = 0;
    int i , j;

    for (i = 1; i <= *pt_nombre_; i++)
    {
        *pt_som_ = *pt_som_ + pow(j,2);
        j = j + 2;
    }
}
