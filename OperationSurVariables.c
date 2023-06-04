#include <stdio.h>

/*
    Programme qui calcule la somme, la différence, le produit et le quotient de deux nombres réels saisis par l'utilisateur.
*/

int main(void)
{
    float nbr1_ = 0;
    float nbr2_ = 0;
    float resultat_ = 0;

    printf("Entrez le nombre A : ");
    scanf("%f", &nbr1_);
    printf("\n");
    printf("Entrez le nombre B : ");
    scanf("%f", &nbr2_);
    printf("\n");

    // L'addition de nbr1_ + nbr2_
    resultat_ = nbr1_ + nbr2_;
    printf("Le résultat de %.2f + %.2f = %.2f\n", nbr1_, nbr2_, resultat_);

    // Le produit
    resultat_ = nbr1_ * nbr2_;
    printf("Le résultat de %.2f * %.2f = %.2f\n", nbr1_, nbr2_, resultat_);

    // La différence
    resultat_ = nbr1_ - nbr2_;
    printf("Le résultat de %.2f - %.2f = %.2f\n", nbr1_, nbr2_, resultat_);

    // Le quotient
    if (nbr2_ != 0)
    {
        resultat_ = nbr1_ / nbr2_;
        printf("Le résultat de %.2f / %.2f = %.2f\n", nbr1_, nbr2_, resultat_);
        resultat_ = (int)nbr1_ % (int)nbr2_;
        printf("Le reste de %.2f mod %.2f = %.2f\n", nbr1_, nbr2_, resultat_);
    }
    else
    {
        printf("Impossible de diviser par zéro.\n");
    }

    return 0;
}
