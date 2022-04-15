#ifndef ARBRE_H_INCLUDED
#define ARBRE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
struct noeud{
    int data;
    struct noeud* lf;
    struct noeud* rg;
};

struct arbre{
    struct noeud* root;
};

struct noeud* InsererNoeud(int data);

void AfficherArbre(struct noeud* r, int tail);

int Max(int a,int b);

int MaxTaille (struct noeud* r);

void AfficheUtil(int cong,int digits);

struct noeud* rechercheMin(struct noeud* r);

struct noeud* rechercheMax(struct noeud* r);

struct noeud* rechercheElement(struct noeud* r, int x);

void parcoursLargeur(struct noeud* r,int nmax);

void insererAbr(struct noeud* r,int x);
#endif // ARBRE_H_INCLUDED
