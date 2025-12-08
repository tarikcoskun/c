/*
  5x5 matris
  ilk 4 sütun verileri 50 - 250 sayıları arasından rastgele doldurulacak
  5. sütun verileri ilgili satırdaki sayıların toplamı olacak
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int matris[5][5];
	int satir_toplam = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			int sayi = 50 + rand() % 200;
			matris[i][j] = sayi;
			satir_toplam += sayi;
		}

		matris[i][4] = satir_toplam;
		satir_toplam = 0;
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d\t", matris[i][j]);
		}

		printf("\n");
	}

	return 0;
}
