#include "arbre.h"

///============================Ex1===========================
arbre* cD(char cle){
    arbre* arbre=(struct arbre*)malloc(sizeof(arbre));
    arbre->sym=cle;
    arbre->Fgau=NULL;
    arbre->Fdro=NULL;
    return arbre;
}

void afficher(arbre* r,int counT){
    if(r->Fdro==NULL && r->Fgau==NULL){
        printf("%c",r->sym);
    }else{
        if(counT>0)
            printf("(");
        counT++;
        afficher(r->Fgau,counT);
        printf("%c",r->sym);
        afficher(r->Fdro,counT);
        if(counT>1)
            printf(")");
    }
}

int calcul(arbre* r){
    if(isdigit(r->sym)==0){
        //printf("%c",r->sym);
        if(r->sym == '-')
            return calcul(r->Fgau) - calcul(r->Fdro);
        if(r->sym == '+')
            return calcul(r->Fdro) + calcul(r->Fgau);
        if(r->sym == '*')
            return calcul(r->Fdro) * calcul(r->Fgau);
        if(r->sym == '/')
            return calcul(r->Fgau) / calcul(r->Fdro);
    }else{
        return r->sym - '0';
    }
}

///--------------------------
///============================Ex2=========================

nodeListe* creationE2(int cle){
    nodeListe* nL=(struct nodeListe*)malloc(sizeof(nodeListe));
    nL->cle=cle;
    nL->contenu=NULL;
    nL->next=NULL;
    return nL;
}

void printgap(int gap){
  for(int i=0;i<gap;i++){
            printf(" ");
        }
}
void afficherE2(nodeListe* r,int gap){
    if(r==NULL){
        return;
    }else{
        gap++;
        afficherE2(r->contenu,gap);
        //printf("%d-",r->cle);
        printf("\n");
        afficherE2(r->next,gap);
        printf("%d-",r->cle);
    }
}

int estFeuilleE2(nodeListe* r){
    if(r->contenu==NULL){
        return 0;
    }else{
        return 1;
    }
}

int nbFeuilleE2(nodeListe* r){
    if(r==NULL){
        return 0;
    }else if(estFeuilleE2(r)==0){
        return 1 + nbFeuilleE2(r->next);
    }else{
        return nbFeuilleE2(r->contenu)+nbFeuilleE2(r->next);
    }
}

int nbNoeudE2(nodeListe* r){
    if(r==NULL){
        return 0;
    }else{
        return nbNoeudE2(r->contenu) + nbNoeudE2(r->next) + 1;
    }
}

int findMaxE2(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int hauteurE2(nodeListe* r){
    if(r==NULL){
        return 0;
    }else if(estFeuilleE2(r)==0){
        return hauteurE2(r->next);
    }else{
        return findMaxE2(hauteurE2(r->contenu),hauteurE2(r->next)) + 1;
    }
}
///==========================Ex3====================================
///
wordtofind* createWordE3(int cle){
    wordtofind* cW=(struct wordtofind*)malloc(sizeof(wordtofind));
    cW->cle=cle;
    cW->next=NULL;
}

