#include <stdio.h>
#include <stdlib.h>

int main()
{

    //integer
    //unsigned : non signé ex: unsigned short sn_entier
    short sn_entier;
    //Entier court
    int n_entier;
    //Entier normal
    long l_entier;
    //Entier long


    printf("Taille en octet du short : %d\n",sizeof(sn_entier));
    printf("Taille en octet du normal : %d\n",sizeof(n_entier));
    printf("Taille en octet du long : %d\n",sizeof(l_entier));

    //reel
    //unsigned : non signé ex: unsigned float flt_reel
    float flt_reel;
    double dbl_reel;
    long double ldbl_reel;

    printf("Taille en octet du float : %d\n",sizeof(flt_reel));
    printf("Taille en octet du double : %d\n",sizeof(dbl_reel));
    printf("Taille en octet du long double : %d\n",sizeof(ldbl_reel));

    //caractère
    char c_car;
    printf("Taille en octet du caractere : %d\n",sizeof(c_car));

    //operateurs

    int n_a=0;
    int n_b=0;


    //==
    //<=
    //>=
    // != (pas =)
    // '/' division
    // % modulo
    //=
    //, indexation
    //& ET (&&)
    //| OU (||)
    // ! NON
    //++ incrémentation
    //-- désincrémentation
    //+=
    //-=
    // /=
    //*=
    //printf("%d",n_a>n_b);

    //ECRIRE
    printf("val de a : %d\n",n_a);
    printf("val de a : %d\n",n_b);
    printf("val de n_a : %d et n_b : %d \n",n_a,n_b);

    //LIRE
    printf("Saisir un entier a \n");
    scanf("%d",&n_a);
    printf("Saisir un entier b \n");
    scanf("%d",&n_b);

    printf("val de n_a : %d et n_b : %d \n",n_a,n_b);







    return 0;
}
