/* PROGRAM 1 - operacje na liczbach zespolonych
#include <stdio.h>
#include <math.h>
#define MAX 2
struct wliczbzesp
{
    int x,y;
};
main()
{
    struct wliczbzesp wsp[MAX];
    for (int i=0;i<MAX;i++)
    {
       printf("Podaj wspolczynnik x liczby zespolonej: \n");
    scanf("%d",&wsp[i].x);
    printf("Podaj wspolczynnik y liczby zespolonej: \n");
    scanf("%d",&wsp[i].y);
    }
   for (int i=0;i<MAX;i++)
   {
       printf("wsp[%d].x=%d\t",i,wsp[i].x);
       printf("wsp[%d].y=%d\n",i,wsp[i].y);
   }
   printf("Suma liczb zespolonych wynosi: \n");
   printf("Zmienna x: %d \n",wsp[0].x+wsp[1].x);
   printf("Zmienna y: %d \n",wsp[0].y+wsp[1].y);
   printf("Roznica liczb zespolonych wynosi: \n");
   printf("Zmienna x: %d \n",wsp[0].x-wsp[1].x);
   printf("Zmienna y: %d \n",wsp[0].y-wsp[1].y);
   return 0;
}*/
/*
#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX 100
struct biblioteka
{
    char tytul[50];
    char autor[50];
    int index;
    int cena;
};
main()
{
    struct biblioteka bib[MAX];
    FILE *plik;
    plik=fopen("Zadanie3.txt","r");

   return 0;
}*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX 100
struct danepracownicy
{
    char imie[20];
    char nazwisko[20];
    int pensja;
    char plec;
};
main()
{
    struct danepracownicy dane[MAX];
    for (int i=0;i<MAX;i++)
    {
    printf("Podaj imie pracownika: \n");
    scanf("%s",&dane[i].imie);
    printf("Podaj nazwisko pracownika: \n");
    scanf("%s",&dane[i].nazwisko);
    printf("Podaj pensje pracownika: \n");
    scanf("%d",&dane[i].pensja);
    printf("Podaj plec pracownika: \n");
    scanf("%c",&dane[i].plec);
    }
   for (int i=0;i<MAX;i++)
   {
       printf("wsp[%d].x=%d\t",i,wsp[i].x);
       printf("wsp[%d].y=%d\n",i,wsp[i].y);
   }
   printf("Suma liczb zespolonych wynosi: \n");
   printf("Zmienna x: %d \n",wsp[0].x+wsp[1].x);
   printf("Zmienna y: %d \n",wsp[0].y+wsp[1].y);
   printf("Roznica liczb zespolonych wynosi: \n");
   printf("Zmienna x: %d \n",wsp[0].x-wsp[1].x);
   printf("Zmienna y: %d \n",wsp[0].y-wsp[1].y);
   return 0;
