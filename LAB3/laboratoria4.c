#include <stdio.h>
#include <math.h>
 /*
 ZADANIE 1 - wartosc bezwzgledna z n jako funkcja wlasna
 int wbezwzgledna(int x)
{
	int wb;
	if (x>=0) wb=x;
	else wb=(-1)*x;
	printf("%d",wb);
}
main()
{
	int n;
	printf("Podaj liczbe calkowita n: \n");
	scanf("%d",&n);
	printf("Wartosc bezwzgledna z podanej liczby wynosi: \n");
	int wbez=wbezwzgledna(n);
	return 0;
	
}*/

/*
ZADANIE 2 - Celsjusz na Farenheit jako funkcja wlasna
float FnaC (int celsjusz)
{
	float farenheit=((9/5.0)*celsjusz)+32;
	return farenheit;
}
main()
{
	int C;
	float F;
	printf("Podaj temperature w *C, ktora chcesz zamienic na *F \n");
	scanf("%d",&C);
	F=FnaC(C);
	printf("Podana temperatura w *F wynosi: \n");
	printf("%f",F);
	return 0;
}*/

/*
ZADANIE 4 - 2^n jako wlasna funkcja
int potega2(int x)
{
	int pot;
	pot=pow(2.0,x);
	return pot;
}

main()
{
	int n;
	int potegadwojki;
	printf("Podaj jaka potege liczby 2 chcesz obliczyc: \n");
	scanf("%d",&n);
	potegadwojki=potega2(n);
	printf("Zlecona potega liczby 2 wynosi: \n");
	printf("%d",potegadwojki);
	return 0;
}*/

/*
ZADANIE 5 - pierwiastek o dowolnej potedze jako wlasna funkcja
float pierwiastek(int a, float b)
{
	if (a>1 && b>=0)
	{
	int pierw;
	pierw=pow(b,(1.0/a));
	return pierw;
	}
	else return 0;
}

main()
{
	int m;
	float n;
	float p=0.0;
	printf("Podaj stopien pierwiastka: \n");
	scanf("%d", &m);
	printf("Podaj liczbe podpierwiastkowa: \n");
	scanf("%f",&n);
	p=pierwiastek(m,n);
	printf("Zlecony pierwiastek wynosi: \n");
	printf("%f",p);
	return 0;
}*/

float pierwiastek(int a, float b)
{
	if (a>1 && b>=0)
	{
	int pierw;
	pierw=pow(b,(1.0/a));
	return pierw;
	}
	else return 0;
}
float sumowanie(int a1, int b1)
{
	int suma;
	for(int i=0;i<=a1;i++)
	{
		suma+=pierwiastek(i,b1);
	}
	return suma;
}


main()
{
	int n;
	int m;
	float s;
	printf("Podaj ostatnia liczbe podpierwiastkowa sumy \n");
	scanf("%d",&n);
	printf("Podaj stopien pierwiastka: \n");
	scanf("%d", &m);
	s=sumowanie(n,m);
	
}

