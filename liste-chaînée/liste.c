#include<stdio.h>
#include<stdlib.h>
#include"liste.h"




Liste *initialisation(void)
{
    Liste *liste =  malloc(sizeof(liste));

    if (liste == NULL )
    {
        exit(EXIT_FAILURE);
    }

    liste->premier = NULL;

    return liste;
}

int estVide(Liste *liste){
    if(liste->premier == NULL)
        return 0;
    return 1;
}

void insertion(Liste *liste, int nvNombre)
{
    /* Création du nouvel élément */
    Element* nouveau =  malloc(sizeof(nouveau));
    if (liste == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }
    nouveau->nombre = nvNombre;

    /* Insertion de l'élément au début de la liste */
    nouveau->suivant = liste->premier;
    liste->premier = nouveau;
}

void suppression(Liste *liste)
{
    if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

    if (liste->premier != NULL)
    {
        Element *Supprimer = liste->premier;
        liste->premier = liste->premier->suivant;
        free(Supprimer);
    }
}

Element *trouverElement(Liste *liste, int chercheur){

        Element *trouverElement;
        trouverElement = liste->premier;
        while(trouverElement->suivant != NULL && trouverElement->nombre != chercheur){
            trouverElement = trouverElement->suivant;
        }
        if ( trouverElement->nombre == chercheur ){
            return trouverElement;
        }
        return NULL;
}

//}
void defilerElement(Liste *liste, int nombre)
{
    if (nombre<=0)
    {
        printf("Error: invalid index");
        exit(EXIT_FAILURE);
    }
    if (liste->premier==NULL)
    {
        printf("List is empty");
        exit(EXIT_SUCCESS);
    }
    int i=-1;
    if (nombre>1)
    {
        Element *c=liste->premier;
    debut:++i;
        if(i==nombre-2)
        {
            Element *buff=c->suivant;
            c->suivant=buff->suivant;
            buff->suivant=NULL;
            return;
        }
        else
        {
            c=c->suivant;
            goto debut;
        }
    }
    else
    {
        liste->premier=liste->premier->suivant;
    }
}


void afficherListe(Liste *liste)
{
    if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

    Element *actuel = liste->premier;

    while (actuel != NULL)
    {
        printf("%d -> ", actuel->nombre);
        actuel = actuel->suivant;
    }
    printf("NULL\n");
}
