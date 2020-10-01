#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	int année = 2018;
	bool bis;
	printf("Entrez l'année : \n");
	scanf_s("%d", &année);
	if (année % 4 == 0) {
		if (année % 100 == 0) {
			if (année % 400 == 0) {
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
		printf("L'année %d est bissextile", année);
	}
	else {
		printf("L'année %d n'est pas bissextile", année);
	}
	if (((année % 100 == 0) && (année % 400 == 0) || (année % 4 == 0) && (année % 100 != 0))) {
		printf("L'année %d est bissextille", année);
	}
	else {
		printf("L'année %d n'est pas bissextile", année);
	}
	


}