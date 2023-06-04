#include <stdio.h>
#include <string.h>

/*
    Programme qui inverse une chaîne de caractère
    [Methode 1]
        Utilisation de la fonction : strrev()
            (Exemple)
                printf("Votre texte est : %s", strrev(phrase_));
    [Methode 2]
        Utilisation d'une boucle
            (Exemple dans le code)
*/

int main(void){
    char phrase_[100];
    int i;
    printf("Entrez une chaîne : ");
    scanf("%s", &phrase_);

    for ( i = strlen(phrase_) - 1; i >= 0; i--)
    {
        printf("%c", phrase_[i]);
    }
    

    return 0;
}