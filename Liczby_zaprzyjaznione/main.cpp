#include <stdio.h>
#include <time.h>
#include <math.h>

/*
Liczby zaprzyja�nione to para r�nych liczb naturalnych, takich �e suma dzielnik�w ka�dej z tych liczb r�wna si� drugiej (nie uwzgl�dniaj�c tych dw�ch liczb jako dzielnik�w).
Pierwsz� par� takich liczb, kt�ra zosta�a podana ju� przez Pitagorasa, jest para liczb 220 i 284, poniewa�:
220 = 1 + 2 + 4 + 71 + 142 (dzielniki 284)
284 = 1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 (dzielniki 220)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int sumaDzielnikow(int liczba);

int main()
{
	int liczbaPierwsza=0;
	int liczbaDruga=0;
	int i=0;
	int wprowadzona;

	printf(": ");
	scanf("%d",&wprowadzona);

	clock_t t;
	t=clock();

    int *sumy;
    sumy = (int*)malloc((wprowadzona + 1) * sizeof(int));
    sumy[0] = 0;
    sumy[1] = 1;

    for(i = 2; i <= wprowadzona; i++) {
        sumy[i] = sumaDzielnikow(i);
    }

	for(i = 1; i <= wprowadzona; i++){
	   liczbaPierwsza = i;
	   liczbaDruga = sumy[liczbaPierwsza];
	   if(liczbaDruga > liczbaPierwsza)
		  if(sumy[liczbaDruga] == liczbaPierwsza)
			 printf("%d\t\t\t%d\n\n", liczbaPierwsza, liczbaDruga);
	}

	t = clock()-t;
	printf("\nCzas dzialania programu: %f\n",((float)t/CLOCKS_PER_SEC));

	return 0;
}

int sumaDzielnikow(int liczba)
{
	int sumaDz=1;
	int i;
	int where;

	where=floor(sqrt(liczba));

	for(i=2; i<=where; i++)
	    if(liczba%i == 0)
		    if((liczba/i) != i)
			    sumaDz+=i+liczba/i;
			else
			    sumaDz+=i;
	return sumaDz;
}
