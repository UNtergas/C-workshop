#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

int main()
{
    Liste *list=initialisation();
    printf("-------------list manager-------------\n");
    int n;
    printf(" nhap so luong phan tu cua list...");\
    scanf("%d",&n);
    for(int i=0;i < n; i++){
        int m;
        printf("nhap gia tri can them cua phan tu thu %d...",n-i);
        scanf("%d",&m);
        insertion(list,m);
    }
    theflag:
    printf("\n");
    printf("---------------OPTION------------------\n");
    printf("1 - xoa phan tu dau \n");
    printf("2 - tim kiem phan tu\n");
    printf("3 - xoa phan tu thu n\n");
    printf("4 - in ra list hien tai\n");
    printf("5 - thoat chuong trinh\n");
    int g;
    int f;
    int x;
    printf("your choice...");
    scanf("%d",&g);
    switch(g){
        case 1:
            suppression(list);
            break;
        case 2:
            printf("nhap gia tri can tim \n");
            scanf("%d",&f);
            Element *trouver;
            trouver=trouverElement(list,f);
            if(trouver != NULL){}{
                printf("gia tri %d co trong danh sach\n",trouver->nombre);
                break;
            }
            if(trouver == NULL){
                printf("gia tri khong co trong danh sach\n");
            }
            break;
        case 3:
            printf("nhap so thu tu cua phan tu can xoa");
            scanf("%d",&x);
            defilerElement(list,x);
            break;
        case 4:
            afficherListe(list);

            break;
        case 5:
            exit(EXIT_SUCCESS);
        default:
            break;
    }
    goto theflag;
    return 0;
}
