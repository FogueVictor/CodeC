#include <stdio.h>

/*
    Programme qui récupère 10 réels, les stocke dans un tableau, puis écrit :
    - Les fonctions (03) qui calculent et affichent la moyenne, la somme et le produit de ces éléments
    - Et une fonction qui affiche les éléments positifs et négatifs du tableau
*/

void RecuperationDesDonnees_(float *pt_tab_);
void SommeDuTableau_(float *pt_tab_, float *pt_Som_);
void ProduitDuTableau_(float *pt_tab_, float *pt_Prod_);
void MoyenneDuTableau_(float *pt_Som, float *pt_Moy);
int ElementPositif_(float *pt_tab_, int *pt_countPos);
int ElementNegatif_(float *pt_tab_, int *pt_countNeg);

int main(void)
{
    /* Déclaration des variables */
    float tab_[10];
    float Som_ = 0; float Prod_ = 1; float Moy_ =  0; // Initialisation de Prod_ à 1 pour le calcul du produit
    int countPos_ = 0; int countNeg_ = 0;

    /* Initialisation des pointeurs */
    float *PointeurDuTableau_ = tab_;
    float *PointeurSomme_ = &Som_;
    float *PointeurProduit_ = &Prod_;
    float *PointeurMoyenne_ = &Moy_;
    int *PointeurCountPos_ = &countPos_;
    int *PointeurCountNeg_ = &countNeg_;
    
    /* Récupération des données */
    printf("Entrez les valeurs de votre TABLEAU : \n");
    RecuperationDesDonnees_(PointeurDuTableau_);

    /* Calcul de la somme du tableau */
    SommeDuTableau_(PointeurDuTableau_, PointeurSomme_);
    printf("La somme de ce tableau est %.2f \n", *PointeurSomme_);

    /* Calcul du produit du tableau */
    ProduitDuTableau_(PointeurDuTableau_, PointeurProduit_);
    printf("Le produit de ce tableau est %.2f \n", *PointeurProduit_);

    /* Calcul de la moyenne du tableau */
    MoyenneDuTableau_(PointeurSomme_, PointeurMoyenne_);
    printf("La moyenne de ce tableau est %.2f\n", *PointeurMoyenne_);

    /* Affichage des nombres positifs */
    printf("Les nombres positifs sont : ");
    ElementPositif_(PointeurDuTableau_, PointeurCountPos_);
    printf("Donc il y a %d nombre(s) positif(s)\n", *PointeurCountPos_);

    /* Affichage des nombres négatifs */
    printf("Les nombres négatifs sont : ");  
    ElementNegatif_(PointeurDuTableau_, PointeurCountNeg_);
    printf("Donc il y a %d nombre(s) négatif(s)\n", *PointeurCountNeg_);

    return 0;
}

void RecuperationDesDonnees_(float *pt_tab_)
{
    for (int i = 0; i < 10; i++)
    {
        printf("Entrez la valeur [%d] : ", i);
        scanf("%f", &pt_tab_[i]);
        printf("\n");
    }
}

void SommeDuTableau_(float *pt_tab_, float *pt_Som_)
{
    *pt_Som_ = 0;
    for (int i = 0; i < 10; i++)
        *pt_Som_ += pt_tab_[i];
}

void ProduitDuTableau_(float *pt_tab_, float *pt_Prod_)
{
    for (int i = 0; i < 10; i++)
        *pt_Prod_ *= pt_tab_[i];
}

void MoyenneDuTableau_(float *pt_Som, float *pt_Moy)
{
    *pt_Moy = *pt_Som / 10;
}

int ElementPositif_(float *pt_tab_, int *pt_countPos)
{
    for (int i = 0; i < 10; i++)
    {
        if (pt_tab_[i] > 0)
        { 
            printf("[%.2f] ", pt_tab_[i]);
            (*pt_countPos)++;
        }
    }
    printf("\n");
    return *pt_countPos;
}

int ElementNegatif_(float *pt_tab_, int *pt_countNeg)
{
    for (int i = 0; i < 10; i++)
    {
        if (pt_tab_[i] < 0)
        {
            printf("[%.2f] ", pt_tab_[i]);
            (*pt_countNeg)++;
        }
    }
    printf("\n");
    return *pt_countNeg;
}
