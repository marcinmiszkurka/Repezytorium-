#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main( int liczba_slow, char* tablica_slow[])
{
	double x;
	double wynik = 0.0; //w takiej formie jest wpisane żeby był to wynik rzeczywisty
	double potega_x = 1.0;
	 
	
	if (liczba_slow > 2){ // pierwszy parametr to nazwa programu
	
				x = atof(tablica_slow[1]);
				for (int licznik = 2; licznik < liczba_slow; ++licznik){
				wynik += potega_x * atof(tablica_slow[licznik]);
				potega_x *= x;
	}
	printf ("Wynik: %lf", wynik);
	}else{
		printf(" Niepoprawna liczba parametrów");
	}
	
	
	return 0;
}
