#include"TParbre.h"

noeud* creerNoeud(int cle){
    noeud* noeud= (struct noeud*)malloc(sizeof(noeud));
    noeud->cle=cle;
    noeud->Fdro=NULL;
    noeud->Fgau=NULL;
    return noeud;
}

noeud* inserer(noeud* arbre,int val){
    if (arbre == NULL){
        return creerNoeud(val);
    }
    if(val > arbre->cle){
        arbre->Fdro=inserer(arbre->Fdro,val);
    }else if(val <arbre->cle){
        arbre->Fgau=inserer(arbre->Fgau,val);
    }
    return arbre;
}

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

noeud* rechercher(noeud* arbre,int val){
    if(arbre==NULL){
        return NULL;
    }
    if(val>arbre->cle){
        rechercher(arbre->Fdro,val);
    }else if(val<arbre->cle){
        rechercher(arbre->Fgau,val);
    }else{
        return arbre;
    }
}
noeud* minNoeud(noeud* arbre){
    if(arbre->Fgau==NULL){
        return arbre;
    }
    minNoeud(arbre->Fgau);
}

noeud* supprimer(noeud* arbre,int val){
    if(arbre==NULL){
        return arbre;
    }
    if(val>arbre->cle){
        arbre->Fdro=supprimer(arbre->Fdro,val);
    }else if(val<arbre->cle){
        arbre->Fgau=supprimer(arbre->Fgau,val);
    }else{
        noeud* temp=(struct noeud*)malloc(sizeof(noeud));
        if(arbre->Fdro==NULL){
            temp=arbre->Fdro;
            arbre=NULL;
            return temp;
        }else if(arbre->Fgau==NULL){
            temp=arbre->Fgau;
            arbre=NULL;
            return temp;
        }
        temp=minNoeud(arbre->Fdro);
        arbre->cle=temp->cle;
        arbre->Fdro=supprimer(arbre->Fdro,temp->cle);
    }
    return arbre;
}


