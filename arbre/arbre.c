#include "arbre.h"
#include "queue.h"
//int estFeuille(struct noeud* noeud){
  //  return (noeud->lf == NULL && noeud->rg == NULL);
//}
void AfficherArbre(struct noeud* r, int tail){
    if(r == NULL){
        return;
    }else{
        tail++;
        AfficherArbre(r->rg,tail);
        AfficheUtil(tail,r->data);
        AfficherArbre(r->lf,tail);
    }
}
int Max(int a,int b){
    if (a>b){
        return a;
    }else{
        return b;
    }
}
int MaxTaille (struct noeud* r){
    if(r==NULL){
        return -1;
    }else{
        return Max(MaxTaille(r->lf),MaxTaille(r->rg))+1;
    }
}

struct noeud* rechercheMin(struct noeud* r){
    struct noeud* rs = (struct noeud*)malloc(sizeof(struct noeud));
    rs=r;
    if(rs!=NULL){
        if(rs->lf != NULL){
            rs= rechercheMin(r->lf);
        }
    }
    return rs;
    free(rs);
};

struct noeud* rechercheMax(struct noeud*r){
    struct noeud* rl = (struct noeud*)malloc(sizeof(struct noeud));
    rl=r;
    if(rl!=NULL){
        if(rl->rg != NULL){
            rl=rechercheMax(r->rg);
        }
    }
    return rl;
    free(rl);
};
void AfficheUtil(int cong,int digits){
    printf("\n");
    for (int i=0;i<cong;i++){
        printf("   ");
    }
        printf("%d",digits);

}

void parcoursLargeur(struct noeud* r,int nmax){
    struct noeud* n=(struct noeud*)malloc(sizeof(struct noeud));
    struct queue* F=createQueue(nmax);
    enqueue(F,r);
    while(isEmpty(F)){
        n->data=dequeue(F);
        printf("%d",n->data);
        if(n->lf!=NULL){
            enqueue(F,n->lf);
        }
        if(n->rg!=NULL){
            enqueue(F,n->rg);
        }
    }

}

struct noeud* rechercheElement(struct noeud* r, int x){
    if(r!=NULL){
        if(x<r->data){
            r=rechercheElement(r->lf,x);
        }else if(x>r->data){
            r=rechercheElement(r->rg,x);
        }
    }
    return r;
};

void insererAbr(struct noeud* r,int x){
    if(r!=NULL){
        if(x<r->data){
            insererAbr(r->lf,x);
        }else if(x>r->data){
            insererAbr(r->rg,x);
        }
    }else{
       // r->data=x;
       //r->lf=r->rg=NULL;
       r=InsererNoeud(x);
    }
}

void supprimerEle(struct noeud* r,int x){
    if(r!=NULL){
        if(x<r->data){
            supprimerEle(r->lf);
        }else if(x>r->data){
            supprimerEle(r->rg);
        }else{
            if(r->lf!=NULL){
                r=r->rg;
            }else if(r->rg!=NULL){
                r=r->lf;
            }else{
                struct noeud* m=(struct noeud*)malloc(sizeof(struct noeud));
            }
        }
    }
}


struct noeud* InsererNoeud(int data){
    struct noeud* nn = (struct noeud*)malloc(sizeof(struct noeud));
    nn->data = data;
    nn->lf = NULL;
    nn->rg = NULL;
    return (nn);
};
