/* PROGRAM 1 - wczytywanie tekstu z klawiatury i zapis do txt
#include <stdio.h>
#include <string.h>
main()
{
    FILE *plik;
    char tekst[181];
    plik=fopen("tekstowy_plik_z1.txt","w");
    printf("Wprowadz tekst: \n");
    do
    {
        gets(tekst);
        fputs(tekst,plik);
        fputs("\n",plik);
    }
    while (strlen(tekst)>0);
    fclose(plik);
    return 0;
}*/

/* PROGRAM 2 zamiana co drugiej litery na @
#include <stdio.h>

main()
{
    char znaki;
    FILE* plik_odczyt;
    FILE* plik_zapis;
    plik_odczyt=fopen("tekstz2.txt", "r");
    plik_zapis=fopen("tekstz2_pozmianach.txt", "w");
    int i=0;
    while ((znaki=getc(plik_odczyt))!=EOF)
    {
        ++i;
        if (znaki == 32) i = 0;
        if ((znaki>=65 && znaki<=90) || (znaki>=97 && znaki<=122))
        {
            if (i % 2 == 0) putc('@',plik_zapis);
            else  putc(znaki,plik_zapis);
        }
        else putc(znaki,plik_zapis);
    }
    fclose(plik_odczyt);
    fclose(plik_zapis);
    return 0;
}*/
/*
PROGRAM 3 - odczyt liczb z pliku i sumowanie wczytanych wartosci
#include <stdio.h>
int tab[10];
main()
{
    FILE *ws;
    int suma=0;
    ws = fopen("tekstz3.txt", "rb");
    fread(tab, sizeof(tab),1,ws);
    for (int i = 0; i < 10; i++)
    suma+=tab[1];
    printf("%d",suma);
    fclose(ws);
    getchar();
    return 0;
}*/
