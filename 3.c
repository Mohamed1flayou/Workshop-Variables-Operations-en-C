#include <stdio.h>
#include <stdlib.h>

int main()
{
     int Age,numero;
    char prenom[50];
    char Nom[59];
    char Sexe[50];

    printf("entrer yo Age:");
    scanf("%d",&Age);
    printf("entrer yo prenom:");
    scanf("%s",&prenom);
    printf("entrer yo Nom:");
    scanf("%s",&Nom);
    printf("entrer yo Sexe:");
    scanf("%s",&Sexe);
    printf("entrer yo numero:");
    scanf("%d",&numero);

    printf("%d \n %s \n  %s \n %s \n %d \n",Age,prenom,Nom,Sexe,numero);
    return 0;
}
