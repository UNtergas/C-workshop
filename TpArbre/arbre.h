#ifndef ARBRE_H_INCLUDED
#define ARBRE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

struct noeud{
    int cle;
    int valeur;
    struct noeud* Fgau;
    struct noeud* Fdro;
};

typedef struct noeud arbre;

typedef struct noeud noeud;

//int (*mafct)(arbre*);


///Affiche Util----------------------------
void AfficheUtil(int cong,int digits);

void AfficherArbre(struct noeud* r, int tail);
///-------------------------------------------
noeud* creerNoeud(int cle);

void accroche(noeud* pere, noeud* fils);
//Ex 10,11,12
void insererDansArbre(arbre* r, noeud* n);

void insererFromTableau(arbre* r,int* tableau,int taille);
///Fin partie 1
int getCle(arbre* r);

int getValeur(arbre* r);

int CalculGaps(int digits,int flag);

///---------combo afficher----------------
void afficher(int value);

void afficherFunction(struct noeud* r, int decalage, int (*mafct)(arbre* r));
///----------------------------------------------

noeud* rechercheUtil(arbre* r, noeud* n);

void rechercher(arbre* r,noeud* n);

#endif // ARBRE_H_INCLUDED
