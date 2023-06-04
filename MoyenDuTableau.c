#include <stdio.h>

/*
    Programme qui calcule la moyenne d'un tableau entré par l'utilisateur et renvoie le nombre de notes supérieures
    à la moyenne de ce tableau.
*/

#define TAILLE_TABLEAU 10 // Constante définissant la taille du tableau

int main(void)
{
    int tabNote_[TAILLE_TABLEAU];
    int som_ = 0;
    int moy_ = 0;
    int count_ = 0;

    // Saisie des notes et calcul de la somme
    for (int i = 0; i < TAILLE_TABLEAU; i++)
    {
        printf("Entrez une note [%d] : ", i);
        scanf("%d", &tabNote_[i]);
        som_ += tabNote_[i];
    }

    moy_ = som_ / TAILLE_TABLEAU; // Calcul de la moyenne

    printf("La moyenne est : %d\n", moy_);

    // Comptage des notes supérieures ou égales à la moyenne
    for (int i = 0; i < TAILLE_TABLEAU; i++)
    {
        if (tabNote_[i] >= moy_)
        {
            count_++;
            printf("[%d] est supérieur ou égal à %d qui est la moyenne.\n", tabNote_[i], moy_);
        }
    }

    printf("Donc il y a %d note(s) supérieure(s) ou égale(s) à la moyenne.\n", count_);

    return 0;
}
