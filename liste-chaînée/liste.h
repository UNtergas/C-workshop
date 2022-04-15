#ifndef liste_h
#define liste_h

#include <stdio.h>
#include "stdbool.h"
/* Defin� la  structure d'element */
typedef struct Element Element;
struct Element{
	int nombre;
	Element *suivant;
};

/* Defin� la structure d'une liste cha�n�e */
typedef struct Liste Liste;
struct Liste{
	Element *premier;
};

/* Initialization de  la liste */
Liste *initialisation(void);

/* v�rifier si une liste est vide ou non */
int estVide(Liste *liste);

/*ajouter une element � la t�te*/
void insertion(Liste *liste, int nvNombre);

/* trouver l'element de la liste qui a le nombre qu'on cherch� et retourner un reference sur le pointer trouverELemtn */
Element* trouverElement(Liste *liste, int chercheur);

/* Defiler l'element de n de la liste  */
void defilerElement(Liste *liste, int nombre);

/* supprimer la premiere element */
void suppression(Liste *liste);

/* afficher la liste  */
void afficherListe(Liste *liste);



#endif

