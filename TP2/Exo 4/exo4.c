#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {
	srand((unsigned)time(NULL));
	int secret = rand();
	int nombre = 0;
	int tentative = 0;
	while (nombre != secret) {
		printf("Choisis un nombre : \n");
		scanf_s("%d", &nombre);
		tentative += 1;
		if (nombre < secret){
			printf("Plus \n");
		}
		if (nombre > secret) {
			printf("Moins \n");
		}
		if (nombre == secret) {
			printf("Tu as trouvé en %d essais", tentative);
		}
	}
}