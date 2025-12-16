/*
  50 ile 150 arasındaki sayılar içerisindeki
  tek ve çift sayıların toplamı ekrana yazdırılacak
  tek sayıların toplamı için tek_toplam() fonk.
  çift sayıların toplamı için cif_ftoplam() fonk.
*/

#include <stdio.h>

void tek_toplam() {
	int toplam = 0;
	for (int i = 50; i < 150; i++) {
		if (i % 2 != 0) {
			toplam += i;
		}
	}

	printf("Tek sayıların toplamı: %d\n", toplam);
}

void cift_toplam() {
	int toplam = 0;
	for (int i = 50; i < 150; i++) {
		if (i % 2 == 0) {
			toplam += i;
		}
	}

	printf("Çift sayıların toplamı: %d\n", toplam);
}

int main() {
	tek_toplam();
	cift_toplam();

	return 0;
}
