#include "data.h"
#include "interface.h"
#include "jeu.h"


int main()
{
    deplacement cordone;
    piece piece_echec[8][8];
    init_jeu(piece_echec);
    init_dessins_pieces(dessin_piece);
    printf("\n\n\n\n\n\n\t\t|----------|\n");
    printf("                |CHESS GAME|\n");
    printf("                |----------|\n\n\n");
    printf("|ATTENTION| INPUT in capital letter\nExample:A3 B7\n\n");
    printf("\t\tPRESS ANY KEY TO START");
    fflush(stdin);getchar();
    afficher_grille(piece_echec);
    deplacement destinat;
    destinat.depart.colonne=0;
    destinat.depart.ligne=0;
    destinat.arrivee.colonne=0;
    destinat.arrivee.ligne=0;
    while(1)
    {
        cordone=saisie_deplacement(piece_echec, BLANC, destinat);
        destinat=cordone;
        deplacer_piece(piece_echec, cordone);
        afficher_grille(piece_echec);
        cordone=saisie_deplacement(piece_echec, NOIR, destinat);
        destinat=cordone;
        deplacer_piece(piece_echec, cordone);
        afficher_grille(piece_echec);
    }
  return 0;
}
