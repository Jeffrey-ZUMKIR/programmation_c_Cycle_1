#include <stdio.h>
#include <stdlib.h>
#define NBI 10




int main()
{
    int n_a=0,n_b=0;

    //Condition
    if(n_a==n_b){
        printf("n_a et n_b identiques");
    }else{
        printf("n_a et n_b pas identiques");
    }


    //condition switch

    int n_choix=0;

    printf("Menu\n");
    printf("1:Menu 1\n");
    printf("2:Menu 2\n");
    printf("choix ?\n");
    scanf("%d",&n_choix);

    switch(n_choix){
        case 1 :printf("Menu 1\n");break;
        case 2 :printf("Menu 2\n");break;
        default :printf("Pas de menu");
    }

    //boucle pour
    int i;

    for(i=0;i<NBI;i++){
        printf("%d",i);
    }

    //faire tant que
    i=0;
    do{
        printf("%d",i);
        i++;
    }while(i<NBI);

    //tant que faire
    i=0;
    while(i<NBI){
        printf("%d",i);
        i++;
    }





    return 0;
}
