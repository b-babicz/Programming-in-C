/*Program 1 - zwracanie mniejszej z liczb

#include <stdio.h>

int mwartosc (int *a, int *b)
{
	if(*a<*b) return *a;
	else if (*a==*b) 
	{
		printf("Obie zmienne sa jednakowe i wynosza: \n");
		return *a;
	}
	else return *b;
}

main()
{
	int a,b;
	printf("Podaj pierwsza liczbe: \n");
	scanf("%d",&a);
	printf("Podaj druga liczbe: \n");
	scanf("%d", &b);
	printf("Wynikiem dzialania funkcji jest: \n");
	printf("%d",mwartosc(&a,&b));
	return 0;
	
}*/


/*
Program 3 - przepisz wartosc stalej 1 argumentu do zmiennej 2 argumentu
#include <stdio.h>

int przepisz (int *a, int *b)
{
	*b=*a;
	return *b;
}


main()
{
	int a=250;
	int b;
	printf("Podaj liczbe: \n");
	scanf("%d",&b);
	printf("%d",przepisz(&a,&b));
	return 0;
	
	
}*/


#include <stdio.h>

void operacjetaba (int N, int *tab1[], int *tab2[])
{
	int j;
	for( j=0; j<N; j++)
	{
		*(tab2+j)=*(tab1+j);
	};
	

};

void operacjetabb (int N, int *tab1[], int *tab2[])
{
	int l;
		for(l=0; l<N; l++)
		{
				*(&tab2[N-1]+l)=*(tab1+l);
		};
		
	

};


main()
{
	int N;
	int i;
	int tab1[N];
	int tab2[N];
	printf("Okresl rozmiar tablicy: \n");
	scanf("%d",&N);
	printf("Podaj wartosci pierwszej tablicy: \n");
	for(i=0; i<N; i++)
	{
		scanf("%d",&tab1[i]);
	};
	printf("Dzialanie funkcji 1.: \n");
	operacjetaba(N, tab1, tab2);
	printf("%d", tab2[0]);
	printf("\n");
	printf("Dzialanie funkcji 2. \n");
	operacjetabb(N, tab1, tab2);
	printf("%d", tab1[0]);
	return 0;
}
