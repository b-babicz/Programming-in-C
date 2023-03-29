/* PROGRAM 1 - otrzymywanie pliku teksttowego i zwrot liczby wystapien znaku c
#include <stdio.h>
#include <string.h>
int zliczc(const char *"zadanie1.txt", char c)
{
    int liczbac=0;
    FILE *plik=fopen("zadanie1.txt","r");
    int i=fgetc(plik)
    for(i;i!=EOF;i++)
    {
        if(i==c) liczbac++;
        else liczbac=liczbac;
    };
    fclose(plik);
    return liczba c
}*/

#include <stdio.h>
#include <string.h>
main()
{
    FILE *plik1;
    FILE *plik2;
    plik1=fopen("zadanie6_1.txt","r");
    plik2=fopen("zadanie6_2.txt","a+");
}
