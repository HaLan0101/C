#include <stdio.h>
#include <stdlib.h>

int Plus1(int i)
{
    int result = i + 1;
    return result;
}

void Coucou()
{
    printf("coucou");
}

int Addition(int a, int b)
{
    int result = a + b;
    return result;
}

int Addition2(int a, int b)
{
    return a+b;
}

int AdditionPlus1(int a, int b)
{
    int addition = Addition(a,b);
    int result = Plus1(addition);
    return result;
}

//EXERCICES

/*
Exercice 1
Faire une fonction qui prend en entr�e 2 entiers et qui retourne le maximum des deux.
Faire une fonction qui prend en entr�e 2 entiers et qui retourne le minimum des deux.
Faire une fonction qui prend en entr�e 2 entiers et qui retourne la somme des deux.
Faire une fonction qui prend en entr�e 2 entiers et qui retourne la diff�rence entre des deux.

Exercice 2
En utilisant les fonctions de l'exercice 1, cr�er une fonction qui demande deux chiffres entiers � l'utilisateur et qui ensuite lui propose de choisir l'action
parmis les 4 de l'�xercice 1 qu'il va faire sur ces deux chiffres.

Exercice 3
Cr�er une fonction Power qui prend en entr�e deux chiffres a et b et qui retourne a exposant b (a^b)

Exercice 4
Cr�er une fonction qui prend en entr�e un chiffre et qui calcule la somme des retours de la fonction Power pour les chiffres allant de 0 au chiffre entr�.
(Si on rentre 5, le r�sultat sera : 1^1 + 2^2 + 3^3 + 4^4 + 5^5)


Exercices Part 2
Exercice 1
�crire une fonction distance ayant comme param�tres 4 doubles
xa,ya et xb,yb qui repr�sentent les coordonn�es de deux points A et B
et qui renvoie la distance AB.

Exercice 2
Faire une fonction qui prend en entr�e un chiffre et qui renvoie
1 si le chiffre est un nombre premier et 0 si il ne l'est pas.

Exercice 3
Grace � la r�ponse de l'exercice 2, �crire une fonction qui prend en
entr�e un chiffre A et qui affiche les A chiffres entiers premiers
�xistants.

Exercice 4
Sans utiliser de boucles while/for et sans passer par Math.h
faire une fonction qui prend en param�tres deux chiffre a et b
et qui renvoie a^b.
*/


