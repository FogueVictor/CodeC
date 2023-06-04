#include <stdio.h>
#include <unistd.h>

int main(void) {
    while (1) {
        printf("\033[2J");  // Efface l'écran
        printf("\033[H");   // Place le curseur en haut à gauche de l'écran

        // Affiche l'animation
        printf("  ___   _   _   _   ___ \n");
        printf(" | _ ) | | | | | | / __|\n");
        printf(" | _ \\ | |_| | | | \\__ \\\n");
        printf(" |___/  \\___/  |_| |___/\n");

        usleep(200000);  // Attend 200 millisecondes
    }

    return 0;
}
