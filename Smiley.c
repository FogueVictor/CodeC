#include <stdio.h>
#include <unistd.h>

int main() {
    int i, j;
    char message[] = "Merde C'est VRAIMENT TROP BETE";
    int length = sizeof(message) - 1;

    for (i = 0; i < 10; i++) {
        // Efface l'écran
        printf("\033[H\033[J");

        // Décalage horizontal
        for (j = 0; j < i; j++)
            printf(" ");

        // Affiche le message avec un effet cool
        for (j = 0; j < length; j++) {
            if (i % 2 == 0) {
                printf("\033[1;31m%c\033[0m", message[j]); // Texte en rouge
            } else {
                printf("\033[1;34m%c\033[0m", message[j]); // Texte en bleu
            }
        }
        printf("\n");

        // Pause pour l'animation
        usleep(500000); // 500 millisecondes
    }
    // Affiche le gros smiley coloré à la fin de l'animation
    printf("\n");
    printf("\033[1;33m  *********\033[0m\n"); // Jaune
    printf("\033[1;33m *         *\033[0m\n"); // Jaune
    printf("\033[1;33m*   \033[1;31mO   O\033[0m   *\033[0m\n"); // Jaune pour le contour du visage, Rouge pour les yeux
    printf("\033[1;33m*     \033[1;31m^\033[0m     *\033[0m\n"); // Jaune pour le contour du visage, Rouge pour le nez
    printf("\033[1;33m *  \033[1;31m\\ --- \\\033[0m*\033[0m\n"); // Jaune pour le contour du visage, Rouge pour la bouche
    printf("\033[1;33m  *       *\033[0m\n"); // Jaune
    printf("\033[1;33m   *******\033[0m\n\n"); // Jaune
    return 0;
}
