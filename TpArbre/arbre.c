#include "arbre.h"



void AfficheUtil(int cong,int digits){
    printf("\n");
    for (int i=0;i<cong;i++){
        printf("--- ");
    }
        printf("%d",digits);

}

void AfficherArbre(struct noeud* r, int tail){
    if(r == NULL){
        return;
    }else{
        tail++;
        AfficherArbre(r->Fdro,tail);
        AfficheUtil(tail,r->cle);
        AfficherArbre(r->Fgau,tail);
    }
}

int CalculGaps(int digits,int flag){
    if(digits == 0){
        return flag;
    }else{
        flag--;
        return CalculGaps(digits/10,flag);
    }
}

void afficher(int value){
    printf("%d",value);
}

void indaunga(int gap){
    for(int i=0;i<gap;i++){
        printf("~");
    }
}

void inkhoangtrong(int gap){
    for(int i=0;i<gap;i++){
        printf(" ");
    }
}
/*
void afficherFunction(struct noeud* r, int decalage, int (*mafct)(arbre* r)){
    if(r==NULL){
        return;
    }else{
        afficher((*mafct)(r));
        if((*mafct)(r->Fdro)!=0){
            indaunga(decalage);
        }
        afficherFunction(r->Fdro,decalage,(*mafct)(r));
    }
}
*/
noeud* creerNoeud(int cle){
   noeud* noeud = (struct noeud*)malloc(sizeof(noeud));
   noeud->cle=cle;
   noeud->valeur=1;
   noeud->Fgau=NULL;
   noeud->Fdro=NULL;
   return (noeud);
}

void accroche(noeud* pere, noeud* fils){
    if(fils->cle < pere->cle){
        printf("\n j'accroche a gauche de %d, le noeud %d\n",fils->cle,pere->cle);
        pere->Fgau=fils;
    }else if(fils->cle > pere->cle){
         printf("\n j'accroche a droite de %d, le noeud %d\n",fils->cle,pere->cle);
        pere->Fdro=fils;
    }else{
        printf("\n noeud %d est deja present\n",pere->cle);
        return;
    }
}

void insererDansArbre(arbre* r, noeud* n){
            if (n->cle > r->cle && r->Fdro!= NULL){
                ///printf("\n%d sera suivre droite %d ",n->cle,r->cle);
                insererDansArbre(r->Fdro,n);
            }else if(n->cle < r->cle && r->Fgau!=NULL){
               /// printf("\n%d sera suivre gauche %d ",n->cle,r->cle);
                insererDansArbre(r->Fgau,n);
            }else{
                accroche(r,n);
            }
}

void insererFromTableau(arbre* r,int* tableau,int taille){
    for(int i=0; i< taille;i++){
        insererDansArbre(r,creerNoeud(*tableau));
        tableau++;
    }
}

int getCle(arbre* r){
    if(r!=NULL){
        return r->cle;
    }
    return 0;
}

int getValeur(arbre* r){
    if(r!=NULL){
        return r->valeur;
    }
    return 0;
}

noeud* rechercheUtil(arbre* r, noeud* n){
        if(n->cle < r->cle && r->Fgau!=NULL){
            rechercheUtil(r->Fgau,n);
        }else if(n->cle > r->cle && r->Fdro!=NULL){
            rechercheUtil(r->Fdro,n);
        }else if(n->cle == r->cle){
            return n;
        }else if(r->Fgau == NULL && r->Fdro == NULL && r->cle != n->cle){
            return creerNoeud(-999);
        }
}

void rechercher(arbre* r,noeud* n){
    noeud* flag=(struct noeud*)malloc(sizeof(noeud));
    flag= rechercheUtil(r,n);
    if(flag->cle == n->cle){
        printf("\n j'ai trouve le noeud %d",flag->cle);
    }else{
        printf("\n le noeud %d n'existe pas dans l'arbre",n->cle);
    }
    free(flag);
}



