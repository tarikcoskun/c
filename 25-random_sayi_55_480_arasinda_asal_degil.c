/*
  55 ile 480 arasında
  rastgele 20 asal olmayan sayı üret
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int sayi = 0;
	int sayac = 0;

	for (int i = 0; i < 20;) {
		sayi = 55 + rand() % 425;

		for (int j = 2; j < sayi; j++) {
			if (sayi % j == 0) {
				sayac++;
			}
		}

		if (sayac > 0) {
			i++;
			printf("%d : %d\n", i + 1, sayi);
		}

		sayac = 0;
	}

	return 0;
}
