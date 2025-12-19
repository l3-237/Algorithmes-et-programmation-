#include "bibliotheque.h" 
#include <math.h>
#include <stdio.h>
#include <stdbool.h>

// Définition d'une fonction de calcul de factorielle. 
unsigned int fact(unsigned int value) { 
    unsigned int result = 1; 
    
    if (value == 0 || value == 1) {
        return 1;
    }
    
    while (value > 1) { 
        result *= value; 
        value--; 
    } 
    return result; 
} 

// Définition d'une fonction d'élévation à une puissance données. 
int power(int value, unsigned int pow) { 
    if (pow == 0) return 1; 
    
    int accumulator = 1; 
    
    unsigned int puissance = pow;
    
    while(puissance > 0) { 
        accumulator *= value; 
        puissance--; 
    } 
    return accumulator; 
} 

// Définition d'une fonction détermination si un nombre est premier.
int nbrpremier(int n) {
    int i;
    
    if (n < 2) {
        return 0;
    }
    
    if (n == 2) {
        return 1;
    }
    
    if (n % 2 == 0) {
        return 0;
    }
    
    i = 3;
    while (i * i <= n) {
        if (n % i == 0) {
            return 0;
        }
        i = i + 2;
    }
    
    return 1;
}

// Définition d'une fonction determination de la distance entre deux points.
double distance(struct point a, struct point b) {
    double d = sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
    return d;
}

// Définition d'une fonction de resolution d'equation de second degré
int equation_second_degre(float a, float b, float c, float *racine1, float *racine2) {
    float delta;
    
    if (racine1 != NULL) *racine1 = 0.0f;
    if (racine2 != NULL) *racine2 = 0.0f;
    
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                return -1; 
            } else {
                return 0; 
            }
        } else {
            if (racine1 != NULL) *racine1 = -c / b;
            return 1; 
        }
    }
    
    
    delta = b * b - 4 * a * c;
    
    if (delta < 0) {
        return 0;
    } 
    else if (delta == 0) {
        if (racine1 != NULL) *racine1 = -b / (2 * a);
        return 1;
    } 
    else {
        if (racine1 != NULL) *racine1 = (-b - sqrt(delta)) / (2 * a);
        if (racine2 != NULL) *racine2 = (-b + sqrt(delta)) / (2 * a);
        return 2;
    }
}