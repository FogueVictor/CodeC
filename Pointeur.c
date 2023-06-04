#include <stdio.h>
/*
    Programme pour Intervertir 02 Nombre avec des pointeurs

        [POINTEUR]
            *monPointeur_ = NULL ou *monPointeur_ = &maVariable_
            (déclaratio et initialisation d'un pointeur)

            monPointeur_  : adresse de la variable pointée
            *monPointeur_ : valeur de la variable pointée
            &monPointeur  : adresse du pointeur
        [Fin]
*/

//Création de la fonction d'inversion via des poiinteurs
void inverse_Nombre(int *pt_nbr1_, int *pt_nbr2_){
    int varIntermediaire_ = 0;

    varIntermediaire_ = *pt_nbr1_;
    *pt_nbr1_ =  *pt_nbr2_;
    *pt_nbr2_ = varIntermediaire_;
}
int main(void){

    int nombreA_ = 16;
    int nombreB_ = 25;

    //Création des pointeurs + Initialisation
    int *variablePointerDuNombreA_ = &nombreA_;
    int *variablePointerDuNombreB_ = &nombreB_;

    printf("Avant Nombre1 = %d et Nombre2 = %d\n", nombreA_, nombreB_);
    // Appelde la fonction inverse_Nombre() 
    inverse_Nombre(variablePointerDuNombreA_, variablePointerDuNombreB_);
    printf("Apres Nombre1 = %d et Nombre2 = %d\n", nombreA_, nombreB_);


    return 0;
}