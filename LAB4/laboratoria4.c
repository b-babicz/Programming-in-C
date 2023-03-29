
/* PROGRAM 1 - popros o podanie imienia i wyswietl napis z wprowadzona dana
#include <stdio.h>
#include <string.h>
main()
{
    char imie[20];
    printf("Podaj imie uzytkowniku: \n");
    scanf("%s",imie);
    printf("Witaj %s",imie);
    return 0;
}*/


/*
PROGRAM 2 - obliczanie dlugosci lancucha na podstawie wprowadzonego wyrazu
#include <stdio.h>
#include <string.h>
main()
{
    char wyraz[50];
    printf("Podaj wybrane przez siebie slowo: \n");
    scanf("%s",wyraz);
    printf("%d",strlen(wyraz));
    return 0;
}*/


/*
PROGRAM 3 - wyprowadzanie pierwszej i ostatniej litery wyrazu tworzacego lancuch znakowy
#include <stdio.h>
#include <string.h>
main()
{
    char wyraz[50];
    printf("Podaj wybrane przez siebie slowo: \n");
    scanf("%s",wyraz);
    printf("\n");
    printf("Pierwsza litera tego wyrazu to: \n");
    printf("%c \n",wyraz[0]);
    printf("Ostatnia litera tego wyrazu to: \n");
    printf("%c",wyraz[strlen(wyraz)-1]);
    return 0;
}*/

/*
PROGRAM 4 - duze litery zamiast malych
#include <stdio.h>
#include <string.h>
main()
{
    char strumien[120];
    printf("Podaj wybrany tekst: \n");
    scanf("%s",strumien);
    for (int i=strlen(strumien);i>=0;i--)
    {
        char z=strumien[i];
        if (isupper(z)==0) printf("%c",toupper(z));
        else printf("%c",z);
    };
    return 0;
}*/

#include <stdio.h>
main()
{

    char tablica[10];
    for (int i=0; i<10; i++)
    {
        printf("Podaj znak numer")
    }



}
