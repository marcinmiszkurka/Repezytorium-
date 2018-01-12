// szukanie w zbiorze dabych, które w zasadzie były już wcześniej posortowane.
// Nazwa programu
// Szukanie w zbiorze

#include <stdio.h>
#include <stdbool.h>
#define N 11
int main(){	
	int tab_sort[N] = {1, 2, 4, 6, 8, 10, 13, 15, 17, 20, 21};
	
	int poczatek = 0;
	int koniec = N  -1;
	int srodek;
	int szukana = 21;
	bool znalazelm = false;
	
	while (znalazelm != true && poczatek <= koniec){
		srodek = (poczatek + koniec ) / 2;
		if (tab_sort [srodek] == szukana){
			znalazelm = true;
	}else{
			if (tab_sort[srodek] > szukana){
				koniec = srodek - 1;
				}else{
					poczatek = srodek + 1 ;
		}
	
	}
}
	
	if ( znalazelm == true){
		printf("Znalazlem. Index %d", srodek);
	}	else{
			printf("Element nie istnieje.\n");
	
	}
	return 0;
}
