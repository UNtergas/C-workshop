#include "arbre.h"
#include "queue.h"
int main()
{
    struct arbre* head = (struct arbre*)malloc(sizeof(struct arbre));
    struct noeud* broot;
    broot=InsererNoeud(9);
    broot->rg=InsererNoeud(13);
    broot->lf=InsererNoeud(3);
    broot->rg->lf=InsererNoeud(11);
    broot->rg->lf->lf=InsererNoeud(10);
    broot->rg->lf->rg=InsererNoeud(12);
    broot->rg->rg=InsererNoeud(14);
    broot->lf->rg=InsererNoeud(5);
    broot->lf->rg->rg=InsererNoeud(8);
    //broot->lf->rg->lf=InsererNoeud(4);
    head->root=broot;
    printf("taille est:%d\n",MaxTaille(broot));
    printf("afficher d'arbre binaire recusif\n");
    AfficherArbre(broot,-1);
    printf("\n\n le plus PETIT noeud est %d",rechercheMin(broot)->data);
    printf("\n le plus GRAND noeud est %d",rechercheMax(broot)->data);
    printf("\n\n");
    ///parcoursLargeur(broot,MaxTaille(broot));
    printf("\n recherche pour 10 est vrai %d\n\n",rechercheElement(broot,10)->data);
    insererAbr(broot,4);
    AfficherArbre(broot,-1);
    return 0;
}
