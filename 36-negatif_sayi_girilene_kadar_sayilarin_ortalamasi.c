/*
  klavyeden negatif sayı girilene kadar girilen sayıların ortalamasını yazdır
*/

#include <stdio.h>

int main() {
	int sayi;
	int sayac = 0;
	int toplam = 0;
	float ort;

	do {
		printf("sayı girin: ");
		scanf("%d", &sayi);

		if (sayi >= 0) {
			toplam += sayi;
			sayac++;
			ort = toplam / sayac;
		}
	} while (sayi > 0);

	printf("ortalama: %f\n", ort);

	return 0;
}
