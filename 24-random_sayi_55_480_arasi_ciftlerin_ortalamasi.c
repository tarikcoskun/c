/*
  55 ile 480 arasında
  rastgele 20 sayı üret
  sayılardan çift olanların ortalaması
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int top = 0;
	int adet = 0;

	int sayi = 0;

	for (int i = 0; i < 20; i++) {
		sayi = 55 + rand() % 425;

		if (sayi % 2 == 0) {
			adet++;
			top += sayi;
			printf("%d\n", sayi);
		}
	}

	printf("ortalama: %d\n", top / adet);

	return 0;
}
