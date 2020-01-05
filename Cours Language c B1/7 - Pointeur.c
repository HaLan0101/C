#include <stdio.h>
#include <stdlib.h>

void Pointeur()
{
    int coucou = 10;

    //Affichage de la valeur de Coucou
    printf("Il y a %d coucous", coucou);

    //Affichage de l'adresse m�moire de la case Coucou
    //(%p permet l'affichage d'un nombre en Hexad�cimal)
    printf("L'adresse de coucou est %d", &coucou);

    //Cr�ation d'un pointeur
    int *Pointeur_Coucou = NULL;

    //Affectation du pointeur
    Pointeur_Coucou = &coucou;
    // Pointeur_Coucou est identique � *Coucou

    //Affichage du pointeur
    printf("L'adresse stock�e dans le Pointeur_Coucou est %p", Pointeur_Coucou);
    printf("La valeur correspondant est %d", *Pointeur_Coucou);

    //ATTENTION AU PLACEMENT DE *
    //Les deux utilisations de * sont diff�rentes
    int *a ;
    printf("%d",*a);

    //Exemple d'utilisation
    int val = 123;
    int unite = 0;
    int dizaine = 0;
    int centaine = 0;

    DecoupeUniteDizaineCentaine(val,&unite,&dizaine,&centaine);

}

void DecoupeUniteDizaineCentaine(int val, int *u, int *d, int *c)
{
    *c = val/100;
    *d = val/10;
    *u = val;
}

/* Exercice 1
Cr�er une fonction qui prend en param�tre un pointeur et qui change sa valeur pour que la valeur de ce pointeur de soit jamais inf�rieure � z�ro.
Exercice 2
Cr�er une fonction qui prend en param�tre un pointeur et un chiffre et qui ajoute � la valeur du pointeur le chiffre donn�.
Exercice 3
Cr�er une fonction qui �change les valeurs de deux Variables.
Exercice 4
Soit 3 variables : Seconde, Minute, Heure. Cr�er une fonction qui en fonction d'un certain nombre de secondes remplira les deux varibales minutes et heures.
Exercice 5
Ecrire une fonction qui prend une variable en param�tre et qui affiche son adresse m�moire.
Bonus :
Refaire l'�xercice 3 sans copie de valeurs mais en utilisant une copie d'adresse.
*/
