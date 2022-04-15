#include "arbre.h"

int main()
{
    ///===================VARIABLES==========================
    int tableau[]={1,45,300,4,5,700};
    int* PtTableau = tableau;
    arbre* unArbre = NULL;
    ///arbre* ex14Arbre = NULL;
    unArbre = creerNoeud(666);
    noeud* noeud1 = creerNoeud(5);
    noeud* noeud2 = creerNoeud(1000);
    noeud* noeud3 = creerNoeud(100);
    noeud* doublon = creerNoeud(666);
    //----------------------------------
    noeud* recherche1 = creerNoeud(700);
    noeud* recherche2 = creerNoeud(7);
   /// noeud* noeud4 = creerNoeud(70);
    ///======================MAIN====================
    ///accroche des noeuds---------------
    accroche(unArbre,doublon);
    accroche(unArbre,noeud1);
    accroche(unArbre,noeud2);
    accroche(noeud1,noeud3);
    insererFromTableau(unArbre,PtTableau,sizeof(tableau)/sizeof(tableau[0]));
    ///insererDansArbre(unArbre,noeud4);
    ///inserer ex14------------------
    /*ex14Arbre=creerNoeud(666);
    insererDansArbre(ex14Arbre,noeud2);
    insererDansArbre(ex14Arbre,noeud3);
    insererDansArbre(ex14Arbre,noeud1);
    insererDansArbre(ex14Arbre,noeud3);
    */
    ///trouver element---------------------
    rechercher(unArbre,recherche1);
    rechercher(unArbre,recherche2);
    ///afficher l'arbre--------------------
    printf("\n");
    AfficherArbre(unArbre,-1);
    return 0;
}
