void ChaineDeCaracteres()
{
    //https://fr.wikibooks.org/wiki/Les_ASCII_de_0_%C3%A0_127/La_table_ASCII
    char lettre = 'A';
    printf("%c",lettre); // affiche Z
    printf("%d",lettre); // affiche 65

    //Cr�ation d'un Mot
    char chaine[6];

    chaine[0] = 'S';
    chaine[1] = 'a';
    chaine[2] = 'l';
    chaine[3] = 'u';
    chaine[4] = 't';
    chaine[5] = '\0';

    char chaine2[] = "Salut";

    //Affichage d'une chaine de caract�res
    printf("%s", chaine);

    //Demander du texte � l'utilisateur
    char Text[100];
    scanf("%s", Text);
}

/*
Exercice 1
Via le tableau ASCII Cr�er un tableau contenant toutes les lettres de l'alphabet.
Exercice 2
Cr�er une fonction qui prend en entr�e une chaine de caract�res et lui ajoute un \n � la fin.
Exercice 3
Cr�er une fonction qui supprime les espaces d'une chaine de caract�res
*/
