//                                        ZESTAW 4

//PROGRAM 1 - napisz program, w ktorym uzytkownik wprowadza numer dnia tygodnia i wypisuje okreslony tekst w zale¿nosci od liczby
/*
#include <stdio.h>
main()
{
    int nr_dnia;
    printf("Wprowadz numer dnia tygodnia: \n");
    scanf("%d",&nr_dnia);
    switch(nr_dnia)
    {
    case 1: printf("Zwykly dzien \n"); break;
    case 2: printf("Zwykly dzien \n"); break;
    case 3: printf("Zwykly dzien \n"); break;
    case 4: printf("Zwykly dzien \n"); break;
    case 5: printf("Zwykly dzien \n"); break;
    case 6: printf("Weekend \n"); break;
    case 7: printf("Weekend \n"); break;
    default: printf("Bledny numer dnia!"); break;
    }
    return 0;
}*/


//PROGRAM 2 - NAPISZ PROGRAM OBLICZAJACY SUME ELEMENTOW SZEREGU OKRESLONEGO WZOREM
/*
#include <stdio.h>

void sumaszeregu(FILE *plik)
{
float eps=0.0001;
float a, n;
float sum=0;
for(n=1; n>0; n++)
{
	a=((1)/(2+(n*n)));
	if(a<eps)
    {
        break;
		sum+=a;
    };
    else;
}
	fprintf(plik, "Suma tego ciagu to %f \n:", sum);
}
main()
{
 FILE *plik;
 plik=fopen("Zadanie2.txt","w");
 sumaszeregu(*plik);
 fclose(plik);
}*/

//PROGRAM 3
/*
#include <stdio.h>
int wyznacznik(int *n, int *macierz[][])
{
    int det;
    if(n==2) det=(macierz[0][0]*macierz[1][1])-(macierz[0][1]*macierz[1][0]);
    else if (n==3) det=(macierz[0][0]*macierz[1][1]*macierz[2][2])+(macierz[0][1]*macierz[1][2]*macierz[2][1])+(macierz[0][2]*macierz[1][0]*macierz[2][1])-(macierz[0][1]*macierz[1][0]*macierz[2][2])-(macierz[0][0]*macierz[1][2]*macierz[2][1])-(macierz[0][2]*macierz[1][1]*macierz[2][0]);
    else printf("B³±d");
}
main()
{
    int n;
    printf("Wprowadz wielkosc tablicy: \n");
    scanf("%d",&n);
    int macierz[n][n];
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Wprowadz element o symbolach: %d %d \n",i+1,j+1);
            scanf("%d",&macierz[i][j]);
        }
    }
    wyznacznik(&n,&macierz[n][n]);
    return 0;
}*/

//PROGRAM 4
/*
#include <stdio.h>
#include <math.h>
int rekurencja(int *n, int *m)
{
    int wartosc=0;
    if(n && m==0) wartosc=n;
    else if (n>=m && m>0) wartosc=n-m+rekurencja(n-1,m)+rekurencja(n,m-1);
    else;
    return wartosc;
}
main()
{
    int n,m;
    printf("Wprowadz liczbe n: \n");
    scanf("%d",&n);
    printf("Wprowadz liczbe m: \n");
    scanf("%d",&m);
    printf("\n");
    printf("%d",rekurencja(n,m));
    return 0;
}*/

//PROGRAM 5 - struktura student
/*
#include <stdio.h>
#include <string.h>
struct student
{
    char imie[30];
    char nazwisko[30];
    char adres[50];
    long int pesel;
    char kierunek[15];
    int nr_legitymacji;
};
void wprowadz_studenta(struct *student)
{
    int i,j,k,l;
    printf("Podaj imie studenta \n");
    for(i=0; i<30; i++)
    {
        scanf("%s",&student.imie[i])
    };
    printf("Podaj nazwisko studenta \n");
    for(j=0; j<30; j++)
    {
        scanf("%s",&student.nazwisko[j])
    };
    printf("Podaj adres studenta \n");
    for(k=0; k<50; k++)
    {
        scanf("%s",&student.adres[k])
    };
    printf("Podaj PESEL studenta \n");
    scanf("%d",&student.pesel);
    printf("Podaj kierunek studiowany przez studenta \n")
     for(l=0; l<50; l++)
    {
        scanf("%s",&student.kierunek[l])
    };
    printf("Podaj numer legitymacji studenckiej \n");
    scanf("%d",&student.nr_legitymacji);
};
main()
{
    wprowadz_studenta(struct *student);
    return 0;
}*/

//PROGRAM 6
/*
#include <stdio.h>
#include <string.h>
main()
{
    int i;
    int n;
    printf("wprowadz ile linii tekstu chcesz uzupelnic: \n");
    scanf("%d",&n);
    FILE *plik;
    plik=fopen("zadanie6.txt","w");
     for(i=0;i<n;i++)
    {
        printf("Wprowadz linie %d \n",i+1);
        scanf("%s",&plik);
    }
    fclose(plik);
    return 0;
}*/
