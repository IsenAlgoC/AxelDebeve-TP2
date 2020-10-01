#include <stdio.h>
#include <stdlib.h>

void permutation(float* a, float* b) {
	float tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int  Again = 0;
	do
	{
		float inter = 0;
		float a = 0;
		float b = 0;
		float c = 0;
		do {
			printf("Toutes les dimensions sont en cm et devront etre comprises entre 0 et 150 cm\n");
			printf("Veuillez saisir la premiere dimension de votre bagage\n");
			scanf_s("%f", &a);
			printf("Veuillez saisir la deuxieme dimension de votre bagage\n");
			scanf_s("%f", &b);
			printf("Veuillez saisir la troisieme dimension de votre bagage\n");
			scanf_s("%f", &c);
		} while (a > 150.0 && b > 150.0 && c > 150.0);

		if (b < c)
		{
			permutation(&b, &c);
		}

		if (a < b)
		{
			permutation(&a, &b);
		}

		if (b < c)
		{
			permutation(&b, &c);
		}

		if (a > 55 || b > 35 || c > 25)
		{
			printf("Le bagage N'EST PAS VALIDE.\n\n");
		}

		else
		{
			printf("Le bagage EST VALIDE.\n\n ");
		}
		printf("Voulez vous verifier un autre bagage ? \n Saisir 1 si oui, 0 sinon\n");
		scanf_s("%d", &Again);

	} while (Again == 1);
}