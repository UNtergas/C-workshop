#ifndef ARBRE_C_INCLUDED
#define ARBRE_C_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
///======================GLOBAL======================
/*
struct noeud{
    int cle;
    struct noeud* fG;
    struct noeud* fD;
};

typedef struct noeud noeud;
*/
///===================================================

///====================Ex1==========================
struct symbole{
    int nomb;
    char operateur;
};

typedef struct symbole symbole;

struct arbre{
    char sym;
    struct arbre* Fgau;
    struct arbre* Fdro;
};

typedef struct arbre arbre;
///-----------------------------------------------
arbre* cD(char cle);
void challenger1();
void afficher(arbre* r,int counT);
int calcul(arbre* r);

///==================Ex2=========================
void challenger2();


struct nodeListe{
    int cle;
    struct nodeListe* next;
    struct nodeListe* contenu;
};
typedef struct nodeListe nodeListe;

void afficherE2(nodeListe* r,int gap);

int estFeuilleE2(nodeListe* r);

int nbFeuilleE2(nodeListe* r);

void printgap(int gap);

int nbNoeudE2(nodeListe* r);

int findMaxE2(int a, int b);

int hauteurE2(nodeListe* r);
///=====================================Ex3====================
void challenger3();

struct dictionE3{
    char cle;
    struct dictionE3* fils;
};

typedef struct dictionE3 dictionE3;

struct wordtofind{
    int cle;
    struct wordtofind* next;
};

typedef struct wordtofind wordtofind;


#endif // ARBRE_C_INCLUDED
