#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	int ann�e = 2018;
	bool bis;
	printf("Entrez l'ann�e : \n");
	scanf_s("%d", &ann�e);
	if (ann�e % 4 == 0) {
		if (ann�e % 100 == 0) {
			if (ann�e % 400 == 0) {
				bis = true;
			}
			else {
				bis = false;
			}
		}
		else {
			bis = true;
		}
	}
	else {
		bis = false;
	}

	if (bis == true){
		printf("L'ann�e %d est bissextile", ann�e);
	}
	else {
		printf("L'ann�e %d n'est pas bissextile", ann�e);
	}
	if (((ann�e % 100 == 0) && (ann�e % 400 == 0) || (ann�e % 4 == 0) && (ann�e % 100 != 0))) {
		printf("L'ann�e %d est bissextille", ann�e);
	}
	else {
		printf("L'ann�e %d n'est pas bissextile", ann�e);
	}
	


}