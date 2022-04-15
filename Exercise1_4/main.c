#include"TParbre.h"
int main()
{
   int table[]={5,9,2,3,4,11,12,40,1,8};
   arbre* root=NULL;
   int taille= sizeof(table)/sizeof(table[0]);
   for(int i=0;i<taille;i++){
        root=inserer(root,table[i]);
   }
   AfficherArbre(root,-1);
   noeud* find=rechercher(root,9);
   noeud* notfind=rechercher(root,10);
   if(find == NULL){
        printf("\n\n>not found");
   }else{
        printf("\n\n>noeud %d est dans arbre",find->cle);
   }
    if(notfind == NULL){
        printf("\n\n>noeud est pas dans arbre");
   }else{
        printf("\n\n>noeud %d est dans arbre",notfind->cle);
   }
   ///-----------------------
   noeud* minnoeud=minNoeud(root);
   printf("\n\n>noeud %d est le plus petit dans arbre",minnoeud->cle);
   printf("\n\n>supprimer 1 et 5");
   root=supprimer(root,1);
   root=supprimer(root,5);
   printf("\n\n>noeud est supprimer");
   AfficherArbre(root,-1);
   printf("\n\n");
   return 0;
}
