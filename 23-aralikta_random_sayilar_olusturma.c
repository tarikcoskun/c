#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int sayi = 0;

	for (int i = 0; i < 35; i++) {
		sayi = 48 + rand() % 275;
		printf("%d\n", sayi);
	}

	return 0;
}
