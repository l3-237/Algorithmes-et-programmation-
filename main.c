#include <stdio.h>
#include <stdlib.h>
#include "bibliotheque.h"

int main() {
    printf("=== TESTS DES FONCTIONS MATHEMATIQUES ===\n\n");
    
    // 1. Test de la fonction puissance
    printf("   5^3 = %d\n\n", power(5, 3));
    
    // 2. Test de la fonction factorielle
    printf("   5! = %d\n\n", fact(5));
    
    // 3. Test de la fonction nombre premier
    printf("   17 est %sun nombre premier\n\n", nbrpremier(17) ? "" : "pas ");
    
    // 4. Test de la fonction distance
    struct point p1 = {0, 0};
    struct point p2 = {3, 4};
    printf("la distance est de = %.2f\n\n", distance(p1, p2));
    
    // 5. Test de la fonction équation du second degré
    float racine1, racine2;
    int nb_solutions = equation_second_degre(1, -3, 2, &racine1, &racine2);
    
    if (nb_solutions == -1) {
        printf("   Infinité de solutions\n");
    } else if (nb_solutions == 0) {
        printf("   Aucune solution réelle\n");
    } else if (nb_solutions == 1) {
        printf("   Une solution : x = %.2f\n", racine1);
    } else if (nb_solutions == 2) {
        printf("   Deux solutions : x1 = %.2f, x2 = %.2f\n", racine1, racine2);
    }
    
    return EXIT_SUCCESS;
}