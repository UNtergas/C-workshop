#ifndef TPARBRE_H_INCLUDED
#define TPARBRE_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>

struct noeud{
    int cle;
    struct noeud* Fgau;
    struct noeud* Fdro;
};

typedef struct noeud arbre;

typedef struct noeud noeud;

noeud* creerNoeud(int cle);

noeud* inserer(noeud* arbre,int val);

void AfficheUtil(int cong,int digits);

void AfficherArbre(struct noeud* r, int tail);

noeud* rechercher(noeud* arbre,int val);

noeud* minNoeud(noeud* arbre);

noeud* supprimer(noeud* arbre,int cle);

///tail initial =-1
#endif // TPARBRE_H_INCLUDED
