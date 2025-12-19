#ifndef __MY_MATH_LIB_H 
#define __MY_MATH_LIB_H 

// Définition d'une fonction de calcul de factorielle. 
unsigned int fact(unsigned int value); 

// Définition d'une fonction d'élévation à une puissance données. 
int power(int value, unsigned int pow); 

// Définition d'une fonction détermination si un nombre est premier.
int nbrpremier(int n);

// Déclaration de la structure point AVANT son utilisation
struct point {
    double x;
    double y;
};

// Version améliorée qui retourne la distance calculée
double distance(struct point a, struct point b);

// Définition d'une fonction de resolution d'equation de second degré
int equation_second_degre(float a, float b, float c, float *racine1, float *racine2);

#endif 