void Tableaux()
{
    //Cr�ation d'un tableau de 4 cases
    int tableau[4];

    int tailleTableau2 = 4;
    int tableau2[tailleTableau2];

    int i;
    //Initialisation d'un tableau
    tableau[0] = 10;
    tableau[1] = 23;
    tableau[2] = 505;
    tableau[3] = 8;
    //Attention tableau[4] n'�xiste pas

    int tableau3[4] = {1, 5, 147, 0};
    int tableau4[4] = {10, 23}; // Valeurs: 10, 23, 0, 0



    for (i = 0 ; i < 4 ; i++)
    {
        tableau[i] = 0;
    }




    //affichage du tableau

    printf("%d", tableau);    //Affiche l'adresse du tableau
    printf("%d", tableau[0]); //Affiche la valeur de la premi�re case du tableau
    printf("%d", tableau[1]); //Affiche la valeur de la deuxi�me case du tableau

    for (i=0;i<4;i++)
    {
        printf("%d \n",tableau[i]);
    }

    printf("%d", *tableau); //Affiche la valeur de la premi�re case du tableau
    printf("%d", *(tableau+1)); //Affiche la valeur de la deuxi�me case du tableau
}



void QueDes1(int *t, int taille)
{
    for(int i=0;i<taille;i++)
    {
        t[i] = 1;
    }

}


/*
Exercice 1
En une ligne cr�er un tableau de 50 cases initialis�es par des z�ros dans chaque case.
Exercice 2
Cr�er un tableau de 100 cases o� chaque case est initailis�e par son indice dans le Tableaux
Exercice 3
�crire un programme qui demande � l�utilisateur de saisir 10 entiers stock�s dans un tableau
ainsi qu�un entier V. Le programme doit rechercher si V se trouve dans le tableau et afficher � V se trouve dans le tableau � ou � V ne se trouve pas dans le tableau �.
Exercice 4
Cr�er une fonction qui prends en entr�e un tableau et qui affiche la somme de toutes les valeurs comprises dans ce Tableaux
Exercice 4.1
Cr�ez une fonction qui calcule et renvoie la moyenne des valeurs d'un tableau.
Exercice 5
Cr�er une fonction qui prend en entr�e 2 tableaux et qui copie les valeurs du premier tableau dans le deuxi�me.
Exercice 6
�crire un programme qui saisit 2 tableaux de 10 entiers A et B. C est un tableau de 20 entiers.
Le programme doit mettre dans C la fusion des tableaux A et B. On copiera dans les 10 premi�res cases de C le tableau A, dans les dix derni�res le tableau B.
*/
