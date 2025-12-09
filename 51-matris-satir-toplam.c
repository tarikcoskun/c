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

	for (int r = 0; r < 5; r++) {
		for (int c = 0; c < 4; c++) {
			int sayi = 50 + rand() % 200;
			matris[r][c] = sayi;
			satir_toplam += sayi;
		}

		matris[r][4] = satir_toplam;
		satir_toplam = 0;
	}

	for (int r = 0; r < 5; r++) {
		for (int c = 0; c < 5; c++) {
			printf("%d\t", matris[r][c]);
		}

		printf("\n");
	}

	return 0;
}
