#include"interface.h"

void init_dessins_pieces(unsigned char d[][HAUTEUR_CASE][LARGEUR_CASE])
{
    int i,j;

    /**** PION *****/
    for(i=0;i<HAUTEUR_CASE-3;i++)
        for(j=0;j<LARGEUR_CASE;j++)
            d[0][i][j]=' ';
    for(j=0;j<(LARGEUR_CASE-3)/2;j++)
    {
        d[0][i][j]=' ';
        d[0][i][LARGEUR_CASE-1-j]=' ';
    }
    for(j=(LARGEUR_CASE-3)/2;j<(LARGEUR_CASE-3)/2+3;j++)
        d[0][i][j]=219;
    i++;
    for(j=0;j<(LARGEUR_CASE-3)/2;j++)
    {
        d[0][i][j]=' ';
        d[0][i][LARGEUR_CASE-1-j]=' ';
    }
    d[0][i][(LARGEUR_CASE-3)/2]=220;
    d[0][i][(LARGEUR_CASE-3)/2+1]=219;
    d[0][i][(LARGEUR_CASE-3)/2+2]=220;
    i++;
    d[0][i][0]=' ';
    d[0][i][LARGEUR_CASE-1]=' ';
    for(j=(LARGEUR_CASE-5)/2;j<(LARGEUR_CASE-5)/2+5;j++)
         d[0][i][j]=219;

    /**** CAVALIER *****/
     for(i=0;i<HAUTEUR_CASE-4;i++)
        for(j=0;j<LARGEUR_CASE;j++)
            d[1][i][j]=' ';
    for(j=0;j<(LARGEUR_CASE-4)/2;j++)
    {
        d[1][i][j]=' ';
        d[1][i][LARGEUR_CASE-1-j]=' ';
    }
    d[1][i][(LARGEUR_CASE-4)/2]=220;
    d[1][i][(LARGEUR_CASE-4)/2+1]=219;
    d[1][i][(LARGEUR_CASE-4)/2+2]=223;
    d[1][i][(LARGEUR_CASE-4)/2+3]=220;
    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[1][i][j]=' ';
        d[1][i][LARGEUR_CASE-1-j]=' ';
    }
    d[1][i][(LARGEUR_CASE-5)/2]=219;
    for(j=(LARGEUR_CASE-5)/2+1;j<(LARGEUR_CASE-5)/2+1+3;j++)
        d[1][i][j]=' ';
    d[1][i][j]=223;
    i++;
    for(j=0;j<(LARGEUR_CASE-3)/2;j++)
    {
        d[1][i][j]=' ';
        d[1][i][LARGEUR_CASE-1-j]=' ';
    }
    for(j=(LARGEUR_CASE-3)/2-1;j<(LARGEUR_CASE-3)/2+1;j++)
        d[1][i][j]=219;
    d[1][i][j]=220;
    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[1][i][j]=' ';
        d[1][i][LARGEUR_CASE-1-j]=' ';
    }
    d[1][i][j++]=220;
    for(;j<(LARGEUR_CASE-5)/2+4;j++)
        d[1][i][j]=219;
     d[1][i][j]=220;


    /**** FOU *****/
    for(i=0;i<HAUTEUR_CASE-4;i++)
        for(j=0;j<LARGEUR_CASE;j++)
            d[2][i][j]=' ';

    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[2][i][j]=' ';
        d[2][i][LARGEUR_CASE-1-j]=' ';
    }
    d[2][i][j++]=220;
    d[2][i][j++]=219;
    d[2][i][j++]=219;
    d[2][i][j++]=223;
    d[2][i][j++]=' ';

    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[2][i][j]=' ';
        d[2][i][LARGEUR_CASE-1-j]=' ';
    }
    d[2][i][j++]=219;
    d[2][i][j++]=219;
    d[2][i][j++]=220;
    d[2][i][j++]=220;
    d[2][i][j++]=219;
    i++;

    for(j=0;j<(LARGEUR_CASE-3)/2;j++)
    {
        d[2][i][j]=' ';
        d[2][i][LARGEUR_CASE-1-j]=' ';
    }
    d[2][i][j++]=220;
    d[2][i][j++]=219;
    d[2][i][j++]=220;
    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[2][i][j]=' ';
        d[2][i][LARGEUR_CASE-1-j]=' ';
    }
    for(;j<(LARGEUR_CASE-5)/2+5;j++)
        d[2][i][j]=219;

 /**** TOUR *****/

    for(i=0;i<HAUTEUR_CASE-3;i++)
        for(j=0;j<LARGEUR_CASE;j++)
            d[3][i][j]=' ';
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[3][i][j]=' ';
        d[3][i][LARGEUR_CASE-1-j]=' ';
    }
    d[3][i][j++]=219;
    d[3][i][j++]=' ';
    d[3][i][j++]=219;
    d[3][i][j++]=' ';
    d[3][i][j++]=219;
    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[3][i][j]=' ';
        d[3][i][LARGEUR_CASE-1-j]=' ';
    }
    for(;j<(LARGEUR_CASE-5)/2+5;j++)
        d[3][i][j]=219;
    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[3][i][j]=' ';
        d[3][i][LARGEUR_CASE-1-j]=' ';
    }
    for(;j<(LARGEUR_CASE-5)/2+5;j++)
        d[3][i][j]=219;
    /**** ROI *****/

    for(i=0;i<HAUTEUR_CASE-5;i++)
        for(j=0;j<LARGEUR_CASE;j++)
            d[4][i][j]=' ';

    for(j=0;j<(LARGEUR_CASE-1)/2;j++)
    {
        d[4][i][j]=' ';
        d[4][i][LARGEUR_CASE-1-j]=' ';
    }
    d[4][i][j]=220;
    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[4][i][j]=' ';
        d[4][i][LARGEUR_CASE-1-j]=' ';
    }
    d[4][i][j++]=' ';
    d[4][i][j++]=223;
    d[4][i][j++]=219;
    d[4][i][j++]=223;
    d[4][i][j++]=' ';
    i++;
    for(j=0;j<(LARGEUR_CASE-3)/2;j++)
    {
        d[4][i][j]=' ';
        d[4][i][LARGEUR_CASE-1-j]=' ';
    }
    d[4][i][j++]=220;
    d[4][i][j++]=219;
    d[4][i][j++]=220;
    i++;
    for(j=0;j<(LARGEUR_CASE-3)/2;j++)
    {
        d[4][i][j]=' ';
        d[4][i][LARGEUR_CASE-1-j]=' ';
    }
    d[4][i][j++]=219;
    d[4][i][j++]=219;
    d[4][i][j++]=219;
    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[4][i][j]=' ';
        d[4][i][LARGEUR_CASE-1-j]=' ';
    }
    for(;j<(LARGEUR_CASE-5)/2+5;j++)
        d[4][i][j]=219;
    /**** DAME *****/

    for(i=0;i<HAUTEUR_CASE-4;i++)
        for(j=0;j<LARGEUR_CASE;j++)
            d[5][i][j]=' ';
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[5][i][j]=' ';
        d[5][i][LARGEUR_CASE-1-j]=' ';
    }
    d[5][i][j++]=219;
    d[5][i][j++]=220;
    d[5][i][j++]=219;
    d[5][i][j++]=220;
    d[5][i][j++]=219;
    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[5][i][j]=' ';
        d[5][i][LARGEUR_CASE-1-j]=' ';
    }
    d[5][i][j++]=220;
    d[5][i][j++]=219;
    d[5][i][j++]=219;
    d[5][i][j++]=219;
    d[5][i][j++]=220;
    i++;
    for(j=0;j<(LARGEUR_CASE-3)/2;j++)
    {
        d[5][i][j]=' ';
        d[5][i][LARGEUR_CASE-1-j]=' ';
    }
    for(;j<(LARGEUR_CASE-3)/2+3;j++)
        d[5][i][j]=219;
    i++;
    for(j=0;j<(LARGEUR_CASE-5)/2;j++)
    {
        d[5][i][j]=' ';
        d[5][i][LARGEUR_CASE-1-j]=' ';
    }
    for(;j<(LARGEUR_CASE-5)/2+5;j++)
        d[5][i][j]=219;
    i++;


}

void afficher_grille(piece* grid[][_SIZE])
{

    HANDLE  hConsoleOut;
    WORD    MyAttrib;
    int i,j;
    char abscisse = 'A';
    int ordonnee = 8;

    hConsoleOut = GetStdHandle( STD_OUTPUT_HANDLE );
    system("cls");


    for(i=0;i<_SIZE*HAUTEUR_CASE;i++)
    {
        for(j=0;j<_SIZE*LARGEUR_CASE;j++)
        {
            if((i/HAUTEUR_CASE)%2==0)
            {
                if(((i/HAUTEUR_CASE)*_SIZE+j/LARGEUR_CASE)%2==0){
                    MyAttrib=BACKGROUND_GREEN|BACKGROUND_RED|BACKGROUND_BLUE;
                }
                else
                    MyAttrib=0;
            }
            else
            {
                if(((i/HAUTEUR_CASE)*_SIZE+j/LARGEUR_CASE)%2==0){
                    MyAttrib=0;
                }
                else
                    MyAttrib=BACKGROUND_GREEN|BACKGROUND_RED|BACKGROUND_BLUE;
            }
            if(grid[i/HAUTEUR_CASE][j/LARGEUR_CASE]==NULL)
            {
                SetConsoleTextAttribute(hConsoleOut,MyAttrib);
                printf(" ");
            }
            else
            {
                if(grid[i/HAUTEUR_CASE][j/LARGEUR_CASE]->color==BLANC)
                    MyAttrib=MyAttrib|FOREGROUND_RED|FOREGROUND_GREEN;
                else
                    MyAttrib=MyAttrib|FOREGROUND_RED;
                SetConsoleTextAttribute(hConsoleOut,MyAttrib);
                printf("%c",dessin_piece[grid[i/HAUTEUR_CASE][j/LARGEUR_CASE]->type][i%HAUTEUR_CASE][j%LARGEUR_CASE]);
            }
       }
        SetConsoleTextAttribute(hConsoleOut,FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
        if(i%HAUTEUR_CASE==HAUTEUR_CASE/2)
            printf("  %i",ordonnee--);
        printf("\n");

    }
    printf("\n");
    for(j=0;j<_SIZE*LARGEUR_CASE;j++)
    {
        if(j%LARGEUR_CASE==LARGEUR_CASE/2)
            printf("%c",abscisse++);
        else
            printf(" ");
    }
     printf("\n\n");
}
void piecename(echiquier grid,deplacement d1){
    //d1.depart.colonne=col-'A';
    //d1.depart.ligne = _SIZE-lig;
    switch (grid[d1.depart.colonne][d1.depart.ligne]->type){
    case PION:
        printf("ban da chon quan MA\n");
        break;
    case CAVALIER:
        printf("ban da chon quan TOT\n");
        break;
    case ROI:
        printf("ban da chon quan VUA\n");
        break;
    case DAME:
        printf("ban da chon quan HAU\n");
        break;
    case FOU:
        printf("ban da chon quan TUONG\n ");
        break;
    case TOUR:
        printf("ban da chon quan XE\n");
        break;

    }

}
deplacement get_deplacement(char col1, int lig1,char col2, int lig2)
{
    position c1,c2;
    deplacement d;
    c1.colonne=col1-'A';
    c1.ligne = _SIZE-lig1;
    c2.colonne=col2-'A';
    c2.ligne = _SIZE-lig2;
    d.depart=c1;
    d.arrivee=c2;
    return d;
}

deplacement saisie_deplacement(echiquier grid,couleur player_color,int *pnt)
{

    int ok = 0;
    deplacement d1;
    char col,col2;
    int lig,lig2;
    while(ok==0)
    {

        if(player_color==BLANC){
            printf("den luot quan vang di chuyen\n");
        }else{
            printf("den luot quan do di chuyen\n");
        }
        fflush(stdin);
        printf("INPUT?>>>");
        scanf(" %c%i",&col,&lig);
        if(col>'H' || col < 'A' || lig <1 || lig>8 )
            printf("Coordonnees non valides. Recommencez\n");
        else
        {
            d1.depart.colonne=col-'A';
            d1.depart.ligne = _SIZE-lig;
            if(grid[d1.depart.ligne][d1.depart.colonne]==NULL)
                printf("Pas de piece ici. Recommencez\n");
            else if (grid[d1.depart.ligne][d1.depart.colonne]->color!= player_color)
                 printf("Cette piece n'est pas la votre. Recommencez\n");
            else{
                piecename(grid,d1);
                deplacements_possibles( grid, d1);
                printf("DESTINATION ?");
                scanf(" %c%i",&col2,&lig2);
                deplacement d2;
                d2.depart.colonne=col-'A';
                d2.depart.ligne = _SIZE-lig;

                checkmate(grid,* pnt,d2);
                if(col2>'H' || col2 < 'A' || lig2 <1 || lig2>8 )
                    printf("Coordonnees non valides. Recommencez\n");
                else
                {

                    d1 = get_deplacement(col,lig,col2,lig2);
                    ok=1;
                }
            }
        }
    }
    return d1;
}
int deplacements_possibles( echiquier grid,deplacement d ){
    int check[8][8];
    int i,j,n,m;
    for(i = 0 ; i <8; i++){
        for(j=0; j <8; j++){
            check[i][j]=0;
        }
    }
    /*ROI*/
    if(grid[d.depart.ligne][d.depart.colonne] -> type ==  ROI){
        for(i = d.depart.ligne - 1; i <= d.depart.ligne + 1; i++ ){
            for(j = d.depart.colonne - 1; j <= d.depart.colonne +1; j++){
                    if(grid[i][j] == NULL){
                check[i][j] = 1;
                    }
            }
        }
        check[d.depart.ligne][d.depart.colonne] = 0;
    }
    /*DAME*/
    if(grid[d.depart.ligne][d.depart.colonne] -> type ==  DAME){
            /*-----dame fou-------*/
            i = d.depart.ligne;
            n = d.depart.ligne;
            j = d.depart.colonne;
            m = d.depart.colonne;
            while( i < 7 && j <7 ){
                i++;
                j++;
                if(grid[i][j] != NULL ){
                if((*grid[i][j]).color != (*grid[d.depart.ligne][d.depart.colonne]).color){
                check[i][j] = 1;}
                break;
            }
                check[i][j] = 1;
            }
            while(n >0 && m >0 ){
                m--;
                n--;
                if(grid[n][m] != NULL ){
                if((*grid[n] [m]).color != (*grid[d.depart.ligne][d.depart.colonne]).color){
                check[n][m] = 1;}
                break;
                }
                check[n][m] =1;
            }
            i = d.depart.ligne;
            n = d.depart.ligne;
            j = d.depart.colonne;
            m = d.depart.colonne;
            while(i < 7 && j > 0){
                i++;
                j--;
                if(grid[i][j] != NULL ){
                if((*grid[i][j]).color != (*grid[d.depart.ligne][d.depart.colonne]).color){
                check[i][j] =1;}
                    break;}
                check[i][j]=1;
            }
            while(n>0 && m <7){
                n--;
                m++;
                if(grid[n][m] != NULL ){
                if((*grid[n ][m]).color != (*grid[d.depart.ligne][d.depart.colonne]).color){
                check[n][m] =1;}
                    break;}
                check[n][m]= 1;

            }
            check[d.depart.ligne][d.depart.colonne] = 0;
              /*---- dame tour----*/
                i = d.depart.ligne;
                n = d.depart.ligne;
                j = d.depart.colonne;
                m = d.depart.colonne;
                while(i < 8 ){
                check[i][d.depart.colonne ]= 1;
                i++;
                if (i = 8){
                    break;
                }
                if(grid[i][d.depart.colonne] != NULL ){
                    if((*grid[i][d.depart.colonne]).color != (*grid[d.depart.ligne][d.depart.colonne]).color){
                    check[i][d.depart.colonne] =1;}
                    break;
                }

            }
            while(n >= 0  ){
                check[n][d.depart.colonne] =1;
                n--;
                if(n < 0){
                    break;
                }
                if(grid[n][d.depart.colonne] != NULL){
                    if((*grid[n][d.depart.colonne]).color != (*grid[d.depart.ligne][d.depart.colonne]).color){
                    check[n][d.depart.colonne] =1;}
                    break;}

            }
            while(j <8  ){
                check[d.depart.ligne][j] =1;
                j++;
                if(j >8){
                    break;
                }
                if(grid[d.depart.ligne][j] != NULL ){
                    if((*grid[d.depart.ligne][j]).color != (*grid[d.depart.ligne][d.depart.colonne]).color){
                    check[d.depart.ligne][j] = 1;}
                    break;
                }

            }
          while( m >= 0){
                check[d.depart.ligne][m] =1;
                m--;
                if( m < 0){
                    break;
                }
                if(grid[d.depart.ligne][m] != NULL ){
                    if((*grid[d.depart.ligne][m]).color != (*grid[d.depart.ligne][d.depart.colonne]).color){
                    check[d.depart.ligne][m] = 1;}
                    break;
                }

            }
            check[d.depart.ligne][d.depart.colonne] = 0;

    }
    /*PION*/
    if(grid[d.depart.ligne][d.depart.colonne] -> type == PION){
            /*PION BLANC*/
        if( grid[d.depart.ligne][d.depart.colonne]->color == BLANC){
          if(d.depart.ligne ==  6){
            check[d.depart.ligne -2][d.depart.colonne] = 1;
          }
            if(grid[d.depart.ligne -1][d.depart.colonne] == NULL ){
                check[d.depart.ligne - 1][d.depart.colonne] = 1;
        }
            if(grid[d.depart.ligne-1][d.depart.colonne-1] != NULL && grid[d.depart.ligne-1][d.depart.colonne-1]->color == NOIR ){
                check[d.depart.ligne-1][d.depart.colonne-1] = 1;
        }
            if(grid[d.depart.ligne-1][d.depart.colonne+1] != NULL && grid[d.depart.ligne-1][d.depart.colonne+1]->color == NOIR ){
                check[d.depart.ligne-1][d.depart.colonne+1] = 1;
        }}
        /*PION NOIR*/
        if( grid[d.depart.ligne][d.depart.colonne]->color == NOIR){
            if(d.depart.ligne ==  1){
                check[d.depart.ligne +2][d.depart.colonne] = 1;
          }
            if(grid[d.depart.ligne +1][d.depart.colonne] == NULL ){
                check[d.depart.ligne +1][d.depart.colonne] = 1;
        }
            if(grid[d.depart.ligne+1][d.depart.colonne-1] != NULL && grid[d.depart.ligne+1][d.depart.colonne-1]->color == BLANC ){
                check[d.depart.ligne+1][d.depart.colonne-1] = 1;
        }
            if(grid[d.depart.ligne+1][d.depart.colonne+1] != NULL && grid[d.depart.ligne+1][d.depart.colonne+1]->color == BLANC ){
                check[d.depart.ligne+1][d.depart.colonne+1] = 1;
        }
    }
    }
        /*TOUR*/
        if(grid[d.depart.ligne][d.depart.colonne] -> type == TOUR){
                i = d.depart.ligne;
                n = d.depart.ligne;
                j = d.depart.colonne;
                m = d.depart.colonne;
                while(i < 8 ){
                check[i][d.depart.colonne ]= 1;
                i++;
                if (i = 8){
                    break;
                }
                if(grid[i][d.depart.colonne] != NULL ){
                    if((*grid[i][d.depart.colonne]).color != (*grid[d.depart.ligne][d.depart.colonne]).color){
                    check[i][d.depart.colonne] =1;}
                    break;
                }

            }
            while(n >= 0  ){
                check[n][d.depart.colonne] =1;
                n--;
                if(n < 0){
                    break;
                }
                if(grid[n][d.depart.colonne] != NULL){
                    if((*grid[n][d.depart.colonne]).color != (*grid[d.depart.ligne][d.depart.colonne]).color){
                    check[n][d.depart.colonne] =1;}
                    break;}

            }
            while(j <8  ){
                check[d.depart.ligne][j] =1;
                j++;
                if(j >8){
                    break;
                }
                if(grid[d.depart.ligne][j] != NULL ){
                    if((*grid[d.depart.ligne][j]).color != (*grid[d.depart.ligne][d.depart.colonne]).color){
                    check[d.depart.ligne][j] = 1;}
                    break;
                }

            }
          while( m >= 0){
                check[d.depart.ligne][m] =1;
                m--;
                if( m < 0){
                    break;
                }
                if(grid[d.depart.ligne][m] != NULL ){
                    if((*grid[d.depart.ligne][m]).color != (*grid[d.depart.ligne][d.depart.colonne]).color){
                    check[d.depart.ligne][m] = 1;}
                    break;
                }

            }
            check[d.depart.ligne][d.depart.colonne] = 0;
        }
         /*FOU*/
         if(grid[d.depart.ligne][d.depart.colonne] -> type == FOU){
            i = d.depart.ligne;
            n = d.depart.ligne;
            j = d.depart.colonne;
            m = d.depart.colonne;
            while( i < 7 && j <7 ){
                i++;
                j++;
                if(grid[i][j] != NULL ){
                if((*grid[i][j]).color != (*grid[d.depart.ligne][d.depart.colonne]).color){
                check[i][j] = 1;}
                break;
            }
                check[i][j] = 1;
            }
            while(n >0 && m >0 ){
                m--;
                n--;
                if(grid[n][m] != NULL ){
                if((*grid[n] [m]).color != (*grid[d.depart.ligne][d.depart.colonne]).color){
                check[n][m] = 1;}
                break;
                }
                check[n][m] =1;
            }
            i = d.depart.ligne;
            n = d.depart.ligne;
            j = d.depart.colonne;
            m = d.depart.colonne;
            while(i < 7 && j > 0){
                i++;
                j--;
                if(grid[i][j] != NULL ){
                if((*grid[i][j]).color != (*grid[d.depart.ligne][d.depart.colonne]).color){
                check[i][j] =1;}
                    break;}
                check[i][j]=1;
            }
            while(n>0 && m <7){
                n--;
                m++;
                if(grid[n][m] != NULL ){
                if((*grid[n ][m]).color != (*grid[d.depart.ligne][d.depart.colonne]).color){
                check[n][m] =1;}
                    break;}
                check[n][m]= 1;

            }
            check[d.depart.ligne][d.depart.colonne] = 0;

         }
         /*CAVALIER*/

                if(grid[d.depart.ligne][d.depart.colonne]->type==CAVALIER){
                    int x[8] = {1, -1, 2, 2, 1, -1, -2, -2};
                    int y[8] = {2, 2, 1, -1, -2, -2, 1, -1};
                    int i;
                    for( i=0;i<8;i++){
                        if(d.depart.colonne+x[i]>=0&&d.depart.colonne+x[i]<8&&d.depart.ligne+y[i]>=0&&d.depart.ligne+y[i]<8){
                        if(grid[d.depart.ligne+y[i]][d.depart.colonne+x[i]]==NULL || grid[d.depart.ligne+y[i]][d.depart.colonne+x[i]]->color!=grid[d.depart.ligne][d.depart.colonne]->color){
                            check[d.depart.ligne+y[i]][d.depart.colonne+x[i]] = 1;
                }
            }
        }
    }




    for(i = 0; i < 8; i++){
    printf("%d   |\t", 8 - i);
    for(j = 0; j< 8; j++){
        printf("%d\t" ,check[i][j]);
    }
    printf("\n\n");
    printf("----|----------------------------------------------------------------\n");

    }
    printf(" \tA\tB\tC\tD\tE\tF\tG\tH\n");
    return check;
}
void checkmate(echiquier grid,int *pnt,deplacement d){

        if(grid[d.depart.ligne][d.depart.colonne] -> type == ROI)
            *pnt++;

}
