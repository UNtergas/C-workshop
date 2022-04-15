
#include "data.h"
#include "interface.h"
#include "jeu.h"s


int main()
{
    int pointer=0;
	echiquier echec;
	deplacement d1,d2;
    init_dessins_pieces(dessin_piece);
    printf("\n\n\n\n\n\n\t\t|----------|\n");
    printf("                |CHESS GAME|\n");
    printf("                |----------|\n\n\n");
    printf("|ATTENTION| INPUT in capital letter\nExample:A3 B7\n\n");
    printf("\t\tPRESS ANY KEY TO START");
    fflush(stdin);getchar();
    init_jeu(echec);
    afficher_grille(echec);
    int flag = 0;

    while(1){
        if(flag % 2 == 0){

        d1 = saisie_deplacement(echec,BLANC,&pointer);
        deplacer_piece(echec, d1);
        afficher_grille(echec);
        if(pointer>0)
            break;
        }
        if(flag % 2 != 0){

        d2 = saisie_deplacement(echec,NOIR,&pointer);
        deplacer_piece(echec, d2);
        afficher_grille(echec);
        if(pointer>0)
            break;
        }
        flag ++;
}
printf("GAME OVER");

return 0;
}

