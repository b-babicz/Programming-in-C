#include  <stdio.h>
#include  <math.h>
main()
{
	/*
	PROGRAM 1 - WIEK
	int w;
	printf("Podaj swoj wiek w latach: \n");
	scanf("%d",&w);
	if (w>18)
	{
		printf("Twoj wiek za 480 miesiecy bedzie wynosil: %d\n",w+40);
	}
	else return 0;*/
	
	/*
	PROGRAM 2 - najwieksza liczba
	int a,b,c,d,e;
	printf("Podaj pierwsza liczbe: \n");
	scanf("%d",&a);
	printf("Podaj druga liczbe: \n");
	scanf("%d",&b);
	printf("Podaj trzecia liczbe: \n");
	scanf("%d",&c);
	printf("Podaj czwarta liczbe: \n");
	scanf("%d",&d);
	printf("Podaj piate liczbe: \n");
	scanf("%d",&e);
	if ()*/
	
	/*
	PROGRAM 3 - numer dnia tygodnia
	int d;
	scanf("%d",&d);
	switch(d)
	{
		case 1 ... 5:printf("zwykly dzien");
		break;
		case 6 ... 7:printf("weekend");
		break;
		default:printf("bledny numer dnia");
		break;
	}*/
	
	/*
	PROGRAM 4 - rownanie kwadratowe
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	float delta=(b*b-(4*a*c));
	float x1=((-b-sqrt(delta))/2*a);
	float x2=((-b+sqrt(delta))/2*a);
	if (delta>0)
	{
	printf("Nastepujace rozwiazania rownania postaci ax^2+bx+c=0 dla wprowadzonych wspolczynnikow: \n");
	printf("%f\n",x1);
	printf("%f\n",x2);
}
	else if (delta==0)
	{
		printf("Nastepujacym rozwiazaniem rownania postaci ax^2+bx+c dla wprowadzonych wspolczynnikow jest: \n");
		printf("%f\n",-b/(2.0*a));
	}
	else printf("Brak rozwiazan tego rownania w zbiorze liczb rzeczywistych \n");
	*/
	
	/*
	
	PROGRAM 5 - numer miesiaca
	int n;
	scanf("%d",&n);
	printf("\n");
	printf("Miesiac(e) pozostaly/e do konca roku: \n");
	switch(n)
	{
		case 1: printf("Luty \n");
		case 2: printf("Marzec \n");
		case 3: printf("Kwiecien \n");
		case 4: printf("Maj \n");
		case 5: printf("Czerwiec \n");
		case 6: printf("Lipiec \n");
		case 7: printf("Sierpien \n");
		case 8: printf("Wrzesien \n");
		case 9: printf("Pazdziernik \n");
		case 10: printf("Listopad \n");
		case 11: printf("Grudzien \n");
		break;
		default: printf("Bledny numer miesiaca!");
		break;
	}*/
	
	/*
	PROGRAM 6 - mnozenie 2 liczb i porownanie do 100
	int a,b,c;
	printf("Podaj liczby: \n");
	scanf("%d",&a);
	scanf("%d",&b);
	c=a*b;
	if (c>100) printf("Zmienna c >100");
	else if (c==100) printf("Zmienna c = 100");
	else printf("Zmienna c <100");
	/*
	
	
	/*ZADANIE EKSTRA */
	/*Napisz program, który powie, po wpisaniu daty, jaki dzień tygodnia to był. POMOCNE - dzielenie z resztš!*/
	int d, m, s, r;
	scanf("%d",&d);
	scanf("%d",&m);
	switch(m);
	{
		case 12: s=d+334;
		case 11: s=d+304;
		case 10: s=d+273;
		case 9: s=d+243;
		case 8: s=d+212;
		case 7: s=d+182;
		case 6: s=d+151;
		case 5: s=d+121;
		case 4: s=d+90;
		case 3: s=d+59;
		case 2: s=d+31;
		case 1: s=d;
		break;
		default: printf("Blad!");
		break;
		if (s)
	}
	

	
}
