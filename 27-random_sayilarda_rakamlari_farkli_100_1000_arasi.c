#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	float adet = 0;
	int sayi = 0;

	for (int i = 0; i < 1000; i++) {
		sayi = 100 + rand() % 900;

		int birler = sayi / 1 % 10;
		int onlar = sayi / 10 % 10;
		int yuzler = sayi / 100 % 10;

		if (birler == onlar && onlar == yuzler) {
			adet++;
		}
	}

	printf("%% %f\n", adet / 1000 * 100);

	return 0;
}
