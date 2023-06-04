#include <stdio.h>

/*
    Note pour les tableaux : 
        [Déclaration du tableau]
            <type> <nom_tableau>[X]; // Déclaration avec valeur aléatoire
        
        [Initialisation]
            tableau[3] = {valeur1, valeur2, valeur3};
            tableau[3] = {0} // Toutes les cases valent 0
            tableau[3] = {4} // Premier case à 4, LE RESTE à 0 

        [Accès au tableau]
            tableau[X]      : élèment d'indice X (X + 1éme élèment du tableau)

            tableau         : adresse du tableau
            *tableau        : premier élèment du tableau
            *(tableau + X)  : élèment d'indice X
        (NOTE)
            tableau[3] même chose que -> *(tableau + 5)
            #define <CONSTANTE> <VALEUR>
*/

int main(void){

    int nombre_ = 0;
    int tableau[3] = {0};
    int i;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &nombre_);
    //Affichage
    for ( i = 0; i < nombre_; i++)
        printf("[%d] ", tableau[i]);
    

    return 0;
}