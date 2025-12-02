#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int sayi = 0;
	sayi = rand();

	printf("%d\n", sayi);

	return 0;
}
