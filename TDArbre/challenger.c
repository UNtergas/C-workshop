#include "arbre.h"

void challenger1(){
    arbre* root=cD('-');
    root->Fdro=cD('3');
    root->Fgau=cD('+');
    root->Fgau->Fdro=cD('*');
    root->Fgau->Fgau=cD('9');
    root->Fgau->Fdro->Fdro=cD('2');
    root->Fgau->Fdro->Fgau=cD('4');
    afficher(root,0);
    printf("\n value de la calcul est %d \n",calcul(root));
}

void challenger2(){
    nodeListe* root= creationE2(1);
    root->contenu= creationE2(2);
    root->contenu->contenu= creationE2(4);
    root->contenu->contenu->next= creationE2(5);
    //root->contenu->contenu->next->contenu= creationE2(10);
    root->contenu->contenu->next->next= creationE2(6);
    root->contenu->next=creationE2(3);
    root->contenu->next->contenu=creationE2(7);
    afficherE2(root,-1);
    printf("\n\nnombre de feuilles:%d , nombre de noeuds %d ,et la hauteur %d\n",nbFeuilleE2(root),nbNoeudE2(root),hauteurE2(root));
}

void challenger3(){
    //wordtofind* word =
    nodeListe* root= creationE2(1);
}
