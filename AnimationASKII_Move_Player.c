#include <stdio.h>
#include <conio.h>
#include <unistd.h>

int main(void) {
    int x = 0;  // Position horizontale du personnage
    int y = 0;  // Position verticale du personnage

    while (1) {
        printf("\033[2J");  // Efface l'écran
        printf("\033[H");   // Place le curseur en haut à gauche de l'écran

        // Affiche l'animation
        printf("Déplacez le personnage avec les touches fléchées :\n");
        printf("            \n");
        printf("            O\n");
        printf("           /|\\\n");
        printf("            |\n");
        printf("           / \\\n");

        // Déplace le personnage en fonction de la touche appuyée
        if (kbhit()) {
            char key = getch();
            if (key == '\033') {  // Si la touche est une touche spéciale
                getch();          // Lit le caractère suivant pour déterminer la touche fléchée
                char arrow = getch();
                if (arrow == 'A' && y > 0) {      // Touche flèche haut
                    y--;
                } else if (arrow == 'B' && y < 10) {  // Touche flèche bas
                    y++;
                } else if (arrow == 'C' && x < 10) {  // Touche flèche droite
                    x++;
                } else if (arrow == 'D' && x > 0) {   // Touche flèche gauche
                    x--;
                }
            }
        }

        // Affiche la position du personnage
        printf("\n");
        printf("Position : (%d, %d)\n", x, y);

        usleep(200000);  // Attend 200 millisecondes
    }

    return 0;
}
