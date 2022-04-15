#include "arbre.h"

void noeud_recherche(noeud* unArbre){
   ///AfficherGAPS;
    printf("\n%d",CalculGaps(1000,6));
    printf("\n");
    afficherFunction(unArbre,CalculGaps(unArbre->cle,6),&getCle(unArbre));
}
