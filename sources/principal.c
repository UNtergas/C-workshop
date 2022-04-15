#include "data.h"
#include "interface.h"
#include "jeu.h"


int main()
{
    deplacement de;
    piece a[8][8];
    init_jeu(a);
    init_dessins_pieces(dessin_piece);
    printf("\n\n\n\n\n\n \t\tMETTRE EN PLEIN ECRAN PUIS APPUYER SUR UNE TOUCHE\n");getchar();
    afficher_grille(a);
    while(1)
    {
        de=saisie_deplacement(a, BLANC);
        deplacer_piece(a, de);
        de=saisie_deplacement(a, NOIR);
        deplacer_piece(a, de);
        afficher_grille(a);
    }
  return 0;
}
