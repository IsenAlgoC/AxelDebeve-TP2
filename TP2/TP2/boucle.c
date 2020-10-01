#include <stdio.h>
#include <stdlib.h>

int main() {

	//La somme des n premiers entiers avec boucle for
	int n = 2;
	int S = 0;
	for (n ; n <= 100 ; n++) {
		S += n;
	}
	printf("La somme des n premiers entiers avec boucle for est %d\n", S);
	
	//La somme des n premiers entiers avec boucle while
	int nbis = 2;
	int Sbis = 0;
	while (nbis <= 100) {
		Sbis += nbis;
		nbis += 1;
	}
	printf("La somme des n premiers entiers avec boucle while est %d\n", Sbis);

	//La somme des n premiers entiers avec boucle do
	int nter = 2;
	int Ster = 0;
	do {
		Ster += nter;
		nter += 1;
	} while (nter <= 100);
	printf("La somme des n premiers entiers avec boucle do est %d\n", Ster);

	//Valeur maximum de n sans dépasement de valeur
	int n1 = 2;
	int Smax = 65535;
	unsigned short int S1 = 0;
	while (Smax - S1 >= n1 + 2) {
		n1 += 1;
		S1 += n1;
	}

	printf("la valeur max de n1 est %d et la somme des n1 premiers entiers est %d\n", n1, S1);

	//Boucle for avec scanf
	int n2 = 2;
	unsigned short int S0 = 0;
	unsigned short int N;
	printf("Entrer la valeur de N :\n");
	scanf_s("%hu", &N);
	for (n2; n2 <= N; n2++) {
		if (N <= 361) {
			S0 = S0 + n2;
		}
		else {
			printf("entrer la valeur de N inferieure ou egale a 361\n");
			scanf_s("%hu", &N);
		}
	}
	printf("La somme des n premiers entiers est %d\n", S0);
}
