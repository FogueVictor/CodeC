#include <stdio.h>

/* Déclaration des prototypes de fonctions */
void ValeurTableau(int *pt_tab);
void RechercheTableau(const int *pt_tab, const int *pt_nombre, int *pt_count);

int main(void)
{
    /* Déclaration et initialisation */
    int tab[50];
    int nombre, count;

    /* Affectation des valeurs au tableau */
    printf("Entrez les valeurs du tableau :\n");
    ValeurTableau(tab);

    /* Récupération du nombre à rechercher */
    printf("Entrez le nombre à chercher : ");
    scanf("%d", &nombre);

    /* Recherche du nombre et affichage du nombre d'occurrences */
    RechercheTableau(tab, &nombre, &count);
    printf("Le nombre d'occurrences de %d est : %d\n", nombre, count);

    return 0;
}

/* Insertion des valeurs dans le tableau */
void ValeurTableau(int *pt_tab)
{
    for (int i = 0; i < 50; i++)
    {
       printf("Entrez l'élément [%d] : ", i);
       scanf("%d", &pt_tab[i]);
       printf("\n");
    }
}

/* Recherche du nombre dans le tableau */
void RechercheTableau(const int *pt_tab, const int *pt_nombre, int *pt_count)
{
    *pt_count = 0;

    for (int i = 0; i < 50; i++)
    {
       if (pt_tab[i] == *pt_nombre)
        (*pt_count)++;
    }
}
