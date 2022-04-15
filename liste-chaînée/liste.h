#ifndef liste_h
#define liste_h

#include <stdio.h>
#include "stdbool.h"
/* Definé la  structure d'element */
typedef struct Element Element;
struct Element{
	int nombre;
	Element *suivant;
};

/* Definé la structure d'une liste chaînée */
typedef struct Liste Liste;
struct Liste{
	Element *premier;
};

/* Initialization de  la liste */
Liste *initialisation(void);

/* vérifier si une liste est vide ou non */
int estVide(Liste *liste);

/*ajouter une element à la tête*/
void insertion(Liste *liste, int nvNombre);

/* trouver l'element de la liste qui a le nombre qu'on cherché et retourner un reference sur le pointer trouverELemtn */
Element* trouverElement(Liste *liste, int chercheur);

/* Defiler l'element de n de la liste  */
void defilerElement(Liste *liste, int nombre);

/* supprimer la premiere element */
void suppression(Liste *liste);

/* afficher la liste  */
void afficherListe(Liste *liste);



#endif

