#include <stdio.h>

/*
    Programme qui utilise les pointeurs pour trouver les diviseurs d'un nombre.
*/
int recuperer_nombre(int *pt_nombre);
void trouver_diviseurs(int nombre);

int main(void) {
    int nombre;
    recuperer_nombre(&nombre);
    trouver_diviseurs(nombre);
    return 0;
}

int recuperer_nombre(int *pt_nombre) {
    *pt_nombre = 0;
    do {
        printf("Entrez votre nombre : ");
        scanf("%d", pt_nombre);
    } while (*pt_nombre <= 0);

    return *pt_nombre;
}

void trouver_diviseurs(int nombre) {
    printf("Les diviseurs de %d sont : ", nombre);
    for (int i = 1; i <= nombre; i++) {
        if (nombre % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}