#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int sayi = 0;
	sayi = 5 + rand() % 295;

	/*
		a + rand() % b;
		a <= x < a + b
		a ile a + b arasında bir sayı üretir
	*/

	printf("%d\n", sayi);

	return 0;
}
